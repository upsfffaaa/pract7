#include "user.h"
#include "ui_user.h"
#include "mainwindow.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QAbstractItemView>
#include <QTableView>
#include <QSqlQuery>
#include <QSqlError>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QUrl>
#include <QCoreApplication>
#include <QFile>
#include <QApplication>
#include <QWidget>
#include <QWebEngineView>
#include <QVBoxLayout>
#include <QWebEngineSettings>
#include <QWebEngineProfile>
#include <QFile>
#include <QTextStream>
#include <QDate>
#include <QDebug>
#include <QSortFilterProxyModel>
#include <QLineEdit>
#include <QProcess>
#include <QFileDialog>
#include <QSqlRecord>
#include <QTextStream>



user::user(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::user)
    , modelUsers(new QSqlRelationalTableModel(this))
    , modelUserStatus(new QSqlRelationalTableModel(this))
    , modelTransactions(new QSqlRelationalTableModel(this))
    , modelGoals(new QSqlRelationalTableModel(this))
    , modelCategories(new QSqlRelationalTableModel(this))
    , modelBudget(new QSqlRelationalTableModel(this))
    , modelPlannedTransactions(new QSqlRelationalTableModel(this))
    , modelAccounts(new QSqlRelationalTableModel(this))


{
    ui->setupUi(this);

    Set_model_user_status();
    Set_model_Accounts();
    Set_model_planned_transactions();
    Set_model_budget();
    Set_model_categories();
    Set_model_Goals();
    Set_model_transactions();
    //CreateTransactionCharts();
    Charts();

    //////////////////////////////////////////////////////////////////////////////////




}
user::~user() {
    delete ui;
}
void user::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}
void user::Charts(){
    generateIncomeChart("/home/upsfffaaa/KP/res/run.html");
    generateExpenseChart("/home/upsfffaaa/KP/res/run2.html");
    generateIncomeExpenseChart("/home/upsfffaaa/KP/res/run3.html");
    // Разрешаем доступ к внешним ресурсам
    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    ui->webdoxod->settings()->setAttribute(QWebEngineSettings::JavascriptEnabled, true);
    ui->webdoxod->settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    ui->webdoxod->settings()->setAttribute(QWebEngineSettings::LocalContentCanAccessRemoteUrls, true);

    // Загружаем локальный HTML файл в webView
    ui->webdoxod->setUrl(QUrl::fromLocalFile("/home/upsfffaaa/KP/res/run.html"));

    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    ui->webdoxod_2->settings()->setAttribute(QWebEngineSettings::JavascriptEnabled, true);
    ui->webdoxod_2->settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    ui->webdoxod_2->settings()->setAttribute(QWebEngineSettings::LocalContentCanAccessRemoteUrls, true);

    // Загружаем локальный HTML файл в webView
    ui->webdoxod_2->setUrl(QUrl::fromLocalFile("/home/upsfffaaa/KP/res/run2.html"));

    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    ui->webGraf->settings()->setAttribute(QWebEngineSettings::JavascriptEnabled, true);
    ui->webGraf->settings()->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    ui->webGraf->settings()->setAttribute(QWebEngineSettings::LocalContentCanAccessRemoteUrls, true);

    // Загружаем локальный HTML файл в webView
    ui->webGraf->setUrl(QUrl::fromLocalFile("/home/upsfffaaa/KP/res/run3.html"));
}





void user::generateExpenseChart(const QString& filePath) {
    // Получение текущей даты и даты месяца назад
    QDate currentDate = QDate::currentDate();
    QDate monthAgoDate = currentDate.addMonths(-1);

    // Выполнение запроса к базе данных
    QSqlQuery query;
    query.prepare(R"(
        SELECT u.username, SUM(t.amount) as total_expense
        FROM transactions t
        INNER JOIN users u ON t.user_id = u.user_id
        WHERE t.type = 'expense' AND t.transaction_date BETWEEN :start_date AND :end_date
        GROUP BY u.username
    )");
    query.bindValue(":start_date", monthAgoDate);
    query.bindValue(":end_date", currentDate);

    if (!query.exec()) {
        qWarning() << "Ошибка выполнения запроса:" << query.lastError().text();
        return;
    }

    // Формирование данных для диаграммы
    QStringList dataRows;
    dataRows << "['User', 'Expense']"; // Заголовки столбцов

    while (query.next()) {
        QString username = query.value("username").toString();
        double totalExpense = query.value("total_expense").toDouble();
        QString usernameWithExpense = QString("%1 (%2)").arg(username).arg(totalExpense, 0, 'f', 2); // Добавляем сумму к имени
        dataRows << QString("['%1', %2]").arg(usernameWithExpense).arg(totalExpense);
    }

    // Генерация HTML-файла
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Не удалось открыть файл для записи:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    out << R"(<html>
  <head>
    <script type="text/javascript" src="https://www.gstatic.com/charts/loader.js"></script>
    <script type="text/javascript">
      google.charts.load('current', {'packages':['corechart']});
      google.charts.setOnLoadCallback(drawChart);

      function drawChart() {
        var data = google.visualization.arrayToDataTable([
)";

    // Добавляем данные в JavaScript массив
    out << "          " << dataRows.join(",\n          ") << "\n";

    out << R"(        ]);

        var options = {
          title: 'Monthly Expense by User',
          pieHole: 0.4 // Для круговой диаграммы с дыркой в центре (donut chart), можно убрать
        };

        var chart = new google.visualization.PieChart(document.getElementById('piechart'));
        chart.draw(data, options);
      }
    </script>
  </head>
  <body>
    <div id="piechart" style="width: 900px; height: 500px;"></div>
  </body>
</html>)";

    file.close();
    qDebug() << "HTML-файл для диаграммы успешно создан:" << filePath;
}

void user::generateIncomeChart(const QString& filePath) {
    // Получение текущей даты и даты месяца назад
    QDate currentDate = QDate::currentDate();
    QDate monthAgoDate = currentDate.addMonths(-1);

    // Выполнение запроса к базе данных
    QSqlQuery query;
    query.prepare(R"(
        SELECT u.username, SUM(t.amount) as total_income
        FROM transactions t
        INNER JOIN users u ON t.user_id = u.user_id
        WHERE t.type = 'income' AND t.transaction_date BETWEEN :start_date AND :end_date
        GROUP BY u.username
    )");
    query.bindValue(":start_date", monthAgoDate);
    query.bindValue(":end_date", currentDate);

    if (!query.exec()) {
        qWarning() << "Ошибка выполнения запроса:" << query.lastError().text();
        return;
    }

    // Формирование данных для диаграммы
    QStringList dataRows;
    dataRows << "['User', 'Income']"; // Заголовки столбцов

    while (query.next()) {
        QString username = query.value("username").toString();
        double totalIncome = query.value("total_income").toDouble();
        QString usernameWithIncome = QString("%1 (%2)").arg(username).arg(totalIncome, 0, 'f', 2); // Добавляем сумму к имени
        dataRows << QString("['%1', %2]").arg(usernameWithIncome).arg(totalIncome);
    }

    // Генерация HTML-файла
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Не удалось открыть файл для записи:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    out << R"(<html>
  <head>
    <script type="text/javascript" src="https://www.gstatic.com/charts/loader.js"></script>
    <script type="text/javascript">
      google.charts.load('current', {'packages':['corechart']});
      google.charts.setOnLoadCallback(drawChart);

      function drawChart() {
        var data = google.visualization.arrayToDataTable([
)";

    // Добавляем данные в JavaScript массив
    out << "          " << dataRows.join(",\n          ") << "\n";

    out << R"(        ]);

        var options = {
          title: 'Monthly Income by User',
          pieHole: 0.4 // Для круговой диаграммы с дыркой в центре (donut chart), можно убрать
        };

        var chart = new google.visualization.PieChart(document.getElementById('piechart'));
        chart.draw(data, options);
      }
    </script>
  </head>
  <body>
    <div id="piechart" style="width: 900px; height: 500px;"></div>
  </body>
</html>)";

    file.close();
    qDebug() << "HTML-файл для диаграммы успешно создан:" << filePath;
}
void user::generateIncomeExpenseChart(const QString &filePath)
{
    QSqlQuery query;
    QDate currentDate = QDate::currentDate();
    QDate threeMonthsAgo = currentDate.addMonths(-3);

    // Запрос для доходов и расходов за последние три месяца
    query.prepare("SELECT transaction_date, SUM(CASE WHEN type = 'income' THEN amount ELSE 0 END) AS income, "
                  "SUM(CASE WHEN type = 'expense' THEN amount ELSE 0 END) AS expense "
                  "FROM transactions WHERE transaction_date BETWEEN :start_date AND :end_date "
                  "GROUP BY transaction_date ORDER BY transaction_date ASC");
    query.bindValue(":start_date", threeMonthsAgo);
    query.bindValue(":end_date", currentDate);
    query.exec();

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Failed to open file for writing:" << filePath;
        return;
    }

    QTextStream out(&file);
    out << "<html>\n";
    out << "  <head>\n";
    out << "    <script type=\"text/javascript\" src=\"https://www.gstatic.com/charts/loader.js\"></script>\n";
    out << "    <script type=\"text/javascript\">\n";
    out << "      google.charts.load('current', {'packages':['corechart']});\n";
    out << "      google.charts.setOnLoadCallback(drawChart);\n";
    out << "      function drawChart() {\n";
    out << "        var data = google.visualization.arrayToDataTable([\n";
    out << "          ['Date', 'Income', 'Expense'],\n";

    while (query.next()) {
        QDate date = query.value("transaction_date").toDate();
        double income = query.value("income").toDouble();
        double expense = query.value("expense").toDouble();
        out << QString("          ['%1', %2, %3],\n").arg(date.toString("yyyy-MM-dd")).arg(income).arg(expense);
    }

    out << "        ]);\n";
    out << "        var options = {\n";
    out << "          title: 'Income and Expenses Over the Last Three Months',\n";
    out << "          curveType: 'function',\n";
    out << "          legend: { position: 'bottom' }\n";
    out << "        };\n";
    out << "        var chart = new google.visualization.LineChart(document.getElementById('curve_chart'));\n";
    out << "        chart.draw(data, options);\n";
    out << "      }\n";
    out << "    </script>\n";
    out << "  </head>\n";
    out << "  <body>\n";
    out << "    <div id=\"curve_chart\" style=\"width: 900px; height: 500px\"></div>\n";
    out << "  </body>\n";
    out << "</html>\n";

    file.close();
}



void user::Set_model_user_status()
{
    // Настроим модель данных для таблицы user_status
    modelUserStatus->setTable("user_status");

    // Выполняем выборку данных
    modelUserStatus->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelUserStatus);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tableuser_status->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tableuser_status->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableuser_status->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableuser_status->setItemDelegate(new QSqlRelationalDelegate(ui->tableuser_status));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tableuser_status->horizontalHeader()->setStretchLastSection(true);
    ui->tableuser_status->setSortingEnabled(true);

    // Связываем изменение текста в textstatus с фильтрацией
    connect(ui->textstatus, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textstatus->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}
void user::Set_model_Accounts()
{
    // Настроим модель данных для таблицы accounts
    modelAccounts->setTable("accounts");

    // Устанавливаем связь с таблицей users для отображения username вместо user_id
    modelAccounts->setRelation(
        modelAccounts->fieldIndex("user_id"),
        QSqlRelation("users", "user_id", "username")
        );

    // Выполняем выборку данных
    modelAccounts->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelAccounts);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tableAccounts->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tableAccounts->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableAccounts->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableAccounts->setItemDelegate(new QSqlRelationalDelegate(ui->tableAccounts));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tableAccounts->horizontalHeader()->setStretchLastSection(true);
    ui->tableAccounts->setSortingEnabled(true);

    // Связываем изменение текста в textacc с фильтрацией
    connect(ui->textacc, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textacc->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}


void user::Set_model_planned_transactions()
{
    // Настроим модель данных для таблицы planned_transactions
    modelPlannedTransactions->setTable("planned_transactions");

    // Устанавливаем связь с таблицей users для отображения username вместо user_id
    modelPlannedTransactions->setRelation(
        modelPlannedTransactions->fieldIndex("user_id"),
        QSqlRelation("users", "user_id", "username")
        );

    // Устанавливаем связь с таблицей categories для отображения category_name вместо category_id
    modelPlannedTransactions->setRelation(
        modelPlannedTransactions->fieldIndex("category_id"),
        QSqlRelation("categories", "category_id", "category_name")
        );

    // Выполняем выборку данных
    modelPlannedTransactions->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelPlannedTransactions);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tableplanned_transactions->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tableplanned_transactions->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableplanned_transactions->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableplanned_transactions->setItemDelegate(new QSqlRelationalDelegate(ui->tableplanned_transactions));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tableplanned_transactions->horizontalHeader()->setStretchLastSection(true);
    ui->tableplanned_transactions->setSortingEnabled(true);

    // Связываем изменение текста в textplan с фильтрацией
    connect(ui->textplan, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textplan->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}


void user::Set_model_budget()
{
    // Настроим модель данных для таблицы budget
    modelBudget->setTable("budget");

    // Устанавливаем связь с таблицей users для отображения username вместо user_id
    modelBudget->setRelation(
        modelBudget->fieldIndex("user_id"),
        QSqlRelation("users", "user_id", "username")
        );

    // Выполняем выборку данных
    modelBudget->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelBudget);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tablebudget->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tablebudget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tablebudget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tablebudget->setItemDelegate(new QSqlRelationalDelegate(ui->tablebudget));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tablebudget->horizontalHeader()->setStretchLastSection(true);
    ui->tablebudget->setSortingEnabled(true);

    // Связываем изменение текста в textBud с фильтрацией
    connect(ui->textBud, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textBud->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}

void user::Set_model_categories()
{
    // Настроим модель данных для таблицы categories
    modelCategories->setTable("categories");

    // Выполняем выборку данных
    modelCategories->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelCategories);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tableCategories->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tableCategories->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableCategories->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableCategories->setItemDelegate(new QSqlRelationalDelegate(ui->tableCategories));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tableCategories->horizontalHeader()->setStretchLastSection(true);
    ui->tableCategories->setSortingEnabled(true);

    // Связываем изменение текста в textcategory с фильтрацией
    connect(ui->textcategory, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textcategory->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}


void user::Set_model_Goals()
{
    // Настроим модель данных для таблицы goals
    modelGoals->setTable("goals");

    // Устанавливаем связь с таблицей users для отображения username вместо user_id
    modelGoals->setRelation(
        modelGoals->fieldIndex("user_id"),
        QSqlRelation("users", "user_id", "username")
        );

    // Выполняем выборку данных
    modelGoals->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelGoals);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tableGoals->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tableGoals->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableGoals->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableGoals->setItemDelegate(new QSqlRelationalDelegate(ui->tableGoals));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tableGoals->horizontalHeader()->setStretchLastSection(true);

    // Включаем возможность сортировки по столбцам
    ui->tableGoals->setSortingEnabled(true);

    // Связываем изменение текста в textGoals с фильтрацией
    connect(ui->textGoals, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textGoals->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}


void user::Set_model_transactions()
{
    // Настроим модель данных для таблицы transactions
    modelTransactions->setTable("transactions");

    // Устанавливаем связь с таблицей users для отображения username вместо user_id
    modelTransactions->setRelation(
        modelTransactions->fieldIndex("user_id"),
        QSqlRelation("users", "user_id", "username")
        );

    // Устанавливаем связь с таблицей categories для отображения category_name вместо category_id
    modelTransactions->setRelation(
        modelTransactions->fieldIndex("category_id"),
        QSqlRelation("categories", "category_id", "category_name")
        );

    // Выполняем выборку данных
    modelTransactions->select();

    // Создаем прокси-модель для фильтрации данных
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(modelTransactions);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Нечувствительность к регистру
    proxyModel->setFilterKeyColumn(-1); // Поиск по всем столбцам

    // Привязываем прокси-модель к таблице в интерфейсе
    ui->tabletransactions->setModel(proxyModel);

    // Настроим поведение таблицы
    ui->tabletransactions->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tabletransactions->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tabletransactions->setItemDelegate(new QSqlRelationalDelegate(ui->tabletransactions));

    // Устанавливаем автоматическое растягивание последнего столбца
    ui->tabletransactions->horizontalHeader()->setStretchLastSection(true);

    // Включаем возможность сортировки по столбцам
    ui->tabletransactions->setSortingEnabled(true);

    // Связываем изменение текста в textTran с фильтрацией
    connect(ui->textTran, &QTextEdit::textChanged, [proxyModel, this]() {
        QString filterText = ui->textTran->toPlainText(); // Получаем текст из QTextEdit
        proxyModel->setFilterFixedString(filterText); // Применяем фильтрацию
    });
}






void user::deleteSelectedRow(QSqlTableModel *model, QTableView *tableView, QWidget *parent) {
    // Получаем текущую выделенную строку
    int currentRow = tableView->currentIndex().row();

    if (currentRow < 0) {
        // Если строка не выбрана, показываем сообщение об ошибке
        QMessageBox::warning(parent, "Ошибка", "Выберите запись для удаления!");
        return;
    }

    // Подтверждение удаления
    if (QMessageBox::question(parent, "Подтверждение", "Вы уверены, что хотите удалить эту запись?")
        == QMessageBox::Yes) {

        // Удаляем строку из модели
        model->removeRow(currentRow);

        // Применяем изменения
        if (!model->submitAll()) {
            // Если удаление не удалось, показываем сообщение об ошибке
            QMessageBox::critical(parent, "Ошибка", "Не удалось удалить запись:\n" + model->lastError().text());
            model->revertAll(); // Откатываем изменения
        } else {
            // Успешное удаление
            QMessageBox::information(parent, "Успех", "Запись успешно удалена!");
            // Обновляем отображение в таблице
            model->select();  // Перезагружаем данные из базы данных
        }
    }
}


void user::NewRow(QSqlTableModel *model, const QString &tableName, QWidget *parent) {
    // Находим указатель на виджет таблицы по имени tableName
    QTableView *tableView = parent->findChild<QTableView *>(tableName);

    if (!tableView) {
        // Если таблица не найдена, показываем сообщение об ошибке
        QMessageBox::critical(parent, "Ошибка", "Таблица с именем " + tableName + " не найдена!");
        return;
    }

    // Добавляем пустую строку в модель
    int row = model->rowCount();
    model->insertRow(row);

    // Устанавливаем текущий индекс в первой ячейке новой строки
    tableView->setCurrentIndex(model->index(row, 1)); // Переводим курсор в первый столбец

}


////////////////////////////////////Crud на табличей Accounts
void user::on_btnAddAccounts_clicked()
{
    // Добавляем пустую строку в модель accounts
    NewRow(modelAccounts, "tableAccounts", this);

    // Применяем настройки для столбца user_id, чтобы он был выпадающим списком (показываем username вместо user_id)
    ui->tableAccounts->setItemDelegateForColumn(modelAccounts->fieldIndex("user_id"), new QSqlRelationalDelegate(ui->tableAccounts));
}


void user::on_btnSubmitAccounts_clicked()
{
    // Проверка на заполненность обязательных полей, кроме account_id
    for (int row = 0; row < modelAccounts->rowCount(); ++row) {
        // Пропускаем столбец account_id (он будет автоматически сгенерирован)
        QModelIndex indexUser = modelAccounts->index(row, modelAccounts->fieldIndex("user_id"));
        QModelIndex indexAccountType = modelAccounts->index(row, modelAccounts->fieldIndex("account_type"));

        // Проверка для полей (user_id, account_type)
        if (indexUser.data().toString().isEmpty() || indexAccountType.data().toString().isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Все поля должны быть заполнены!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelAccounts->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelAccounts->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Новая запись успешно добавлена!");
        // Обновляем отображение в таблице
        modelAccounts->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeleteAccounts_clicked()
{
    deleteSelectedRow(modelAccounts, ui->tableAccounts, this);
}

////////////////////////////////////Crud на табличей plan
void user::on_btnAddplan_clicked()
{
    // Добавляем пустую строку в модель planned_transactions
    NewRow(modelPlannedTransactions, "tableplanned_transactions", this);

    // Применяем настройки для столбца user_id, чтобы он был выпадающим списком (показываем username вместо user_id)
    ui->tableplanned_transactions->setItemDelegateForColumn(modelPlannedTransactions->fieldIndex("user_id"), new QSqlRelationalDelegate(ui->tableplanned_transactions));

    // Применяем настройки для столбца category_id, чтобы он был выпадающим списком (показываем category_name вместо category_id)
    ui->tableplanned_transactions->setItemDelegateForColumn(modelPlannedTransactions->fieldIndex("category_id"), new QSqlRelationalDelegate(ui->tableplanned_transactions));
}


void user::on_btnSubmitplan_clicked()
{
    // Проверка на заполненность обязательных полей, кроме transaction_id
    for (int row = 0; row < modelPlannedTransactions->rowCount(); ++row) {
        // Пропускаем столбец transaction_id (он будет автоматически сгенерирован)
        QModelIndex indexUser = modelPlannedTransactions->index(row, modelPlannedTransactions->fieldIndex("user_id"));
        QModelIndex indexCategory = modelPlannedTransactions->index(row, modelPlannedTransactions->fieldIndex("category_id"));
        QModelIndex indexAmount = modelPlannedTransactions->index(row, modelPlannedTransactions->fieldIndex("amount"));
        QModelIndex indexDate = modelPlannedTransactions->index(row, modelPlannedTransactions->fieldIndex("transaction_date"));

        // Проверка для полей (user_id, category_id, amount, transaction_date)
        if (indexUser.data().toString().isEmpty() || indexCategory.data().toString().isEmpty() ||
            indexAmount.data().toString().isEmpty() || indexDate.data().toString().isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Все поля должны быть заполнены!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelPlannedTransactions->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelPlannedTransactions->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Новая запись успешно добавлена!");
        // Обновляем отображение в таблице
        modelPlannedTransactions->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeleteplan_clicked()
{
    deleteSelectedRow(modelPlannedTransactions, ui->tableplanned_transactions, this);

}
////////////////////////////////////Crud на табличей budget
void user::on_btnAddbudget_clicked()
{
    // Добавляем пустую строку в модель budget
    NewRow(modelBudget, "tablebudget", this);

    // Применяем настройки для столбца user_id, чтобы он был выпадающим списком (показываем username вместо user_id)
    ui->tablebudget->setItemDelegateForColumn(modelBudget->fieldIndex("user_id"), new QSqlRelationalDelegate(ui->tablebudget));
}


void user::on_btnSubmitbudget_clicked()
{
    // Проверка на заполненность обязательных полей, кроме budget_id
    for (int row = 0; row < modelBudget->rowCount(); ++row) {
        // Пропускаем столбец budget_id (он будет автоматически сгенерирован)
        QModelIndex indexUser = modelBudget->index(row, modelBudget->fieldIndex("user_id"));
        QModelIndex indexAmount = modelBudget->index(row, modelBudget->fieldIndex("amount"));
        QModelIndex indexStartDate = modelBudget->index(row, modelBudget->fieldIndex("start_date"));
        QModelIndex indexEndDate = modelBudget->index(row, modelBudget->fieldIndex("end_date"));

        // Проверка для полей (user_id, amount, start_date, end_date)
        if (indexUser.data().toString().isEmpty() || indexAmount.data().toString().isEmpty() ||
            indexStartDate.data().toString().isEmpty() || indexEndDate.data().toString().isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Все поля должны быть заполнены!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelBudget->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelBudget->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Новая запись успешно добавлена!");
        // Обновляем отображение в таблице
        modelBudget->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeletebudget_clicked()
{
    deleteSelectedRow(modelBudget, ui->tablebudget, this);

}
////////////////////////////////////Crud на табличей status
void user::on_btnAddstatus_clicked()
{
    // Добавляем пустую строку в модель user_status
    NewRow(modelUserStatus, "tableuser_status", this);

    // Применяем настройки для столбца user_id, чтобы он был выпадающим списком (если нужно отображать user_id как имя пользователя или иную информацию)
    ui->tableuser_status->setItemDelegateForColumn(modelUserStatus->fieldIndex("user_id"), new QSqlRelationalDelegate(ui->tableuser_status));
}


void user::on_btnSubmitstatus_clicked()
{
    // Проверка на заполненность обязательных полей
    for (int row = 0; row < modelUserStatus->rowCount(); ++row) {
        // Пропускаем столбец user_status_id (он будет автоматически сгенерирован)
        QModelIndex indexUser = modelUserStatus->index(row, modelUserStatus->fieldIndex("user_id"));
        QModelIndex indexStatus = modelUserStatus->index(row, modelUserStatus->fieldIndex("status"));
        QModelIndex indexDate = modelUserStatus->index(row, modelUserStatus->fieldIndex("date"));

        // Проверка для полей (user_id, status, date)
        if (indexUser.data().toString().isEmpty() || indexStatus.data().toString().isEmpty() ||
            indexDate.data().toString().isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Все поля должны быть заполнены!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelUserStatus->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelUserStatus->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Новая запись успешно добавлена!");
        // Обновляем отображение в таблице
        modelUserStatus->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeletestatus_clicked()
{
    deleteSelectedRow(modelUserStatus, ui->tableuser_status, this);

}
////////////////////////////////////Crud на табличей expense_categories
void user::on_btnAddcategories_clicked()
{
    // Добавляем пустую строку в модель categories
    NewRow(modelCategories, "tableCategories", this);

    // Применяем настройки для столбца (если нужно отображение данных, например, выпадающий список для каких-либо столбцов)
    // Можно дополнительно настроить поля, если, например, один из столбцов является выпадающим списком или связанный с другой таблицей.
    ui->tableCategories->setItemDelegateForColumn(modelCategories->fieldIndex("category_name"), new QSqlRelationalDelegate(ui->tableCategories));
}


void user::on_btnSubmitcategories_clicked()
{
    // Проверка на заполненность обязательных полей
    for (int row = 0; row < modelCategories->rowCount(); ++row) {
        // Пропускаем столбец category_id (он будет автоматически сгенерирован)
        QModelIndex indexCategoryName = modelCategories->index(row, modelCategories->fieldIndex("category_name"));

        // Проверка для поля category_name
        if (indexCategoryName.data().toString().isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Поле 'Category Name' должно быть заполнено!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelCategories->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelCategories->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Новая категория успешно добавлена!");
        // Обновляем отображение в таблице
        modelCategories->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeletecategories_clicked()
{
    deleteSelectedRow(modelCategories, ui->tableCategories, this);

}
////////////////////////////////////Crud на табличей Goals
void user::on_btnAddGoals_clicked()
{
    // Добавляем пустую строку в модель goals
    NewRow(modelGoals, "tableGoals", this);

    // Если нужно настроить дополнительные поля, например, с выпадающими списками или связями, можно сделать это здесь
    ui->tableGoals->setItemDelegateForColumn(modelGoals->fieldIndex("goal_name"), new QSqlRelationalDelegate(ui->tableGoals));
}


void user::on_btnSubmitGoals_clicked()
{
    // Проверка на заполненность обязательных полей
    for (int row = 0; row < modelGoals->rowCount(); ++row) {
        // Пропускаем столбец goal_id (он будет автоматически сгенерирован)
        QModelIndex indexGoalName = modelGoals->index(row, modelGoals->fieldIndex("goal_name"));
        QModelIndex indexGoalAmount = modelGoals->index(row, modelGoals->fieldIndex("goal_amount"));

        // Проверка для поля goal_name
        if (indexGoalName.data().toString().isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Поле 'Goal Name' должно быть заполнено!");
            return;
        }

        // Проверка для поля goal_amount (например, должно быть числовое значение)
        if (indexGoalAmount.data().toDouble() <= 0) {
            QMessageBox::warning(this, "Ошибка", "Поле 'Goal Amount' должно быть больше 0!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelGoals->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelGoals->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Новая цель успешно добавлена!");
        // Обновляем отображение в таблице
        modelGoals->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeleteGoals_clicked()
{
    deleteSelectedRow(modelGoals, ui->tableGoals, this);

}
////////////////////////////////////Crud на табличей transactions
void user::on_btnAddtransactions_clicked()
{
    // Добавляем пустую строку в модель transactions
    NewRow(modelTransactions, "tableTransactions", this);

    // Если нужно настроить дополнительные поля (например, выпадающие списки), делаем это здесь.
    // Например, устанавливаем делегаты для отображения связанных данных
    ui->tabletransactions->setItemDelegateForColumn(modelTransactions->fieldIndex("user_id"), new QSqlRelationalDelegate(ui->tabletransactions));
    ui->tabletransactions->setItemDelegateForColumn(modelTransactions->fieldIndex("category_id"), new QSqlRelationalDelegate(ui->tabletransactions));
}


void user::on_btnSubmittransactions_clicked()
{
    // Проверка на заполненность обязательных полей
    for (int row = 0; row < modelTransactions->rowCount(); ++row) {
        // Пропускаем поля с автоматическим значением, например, transaction_id
        QModelIndex indexAmount = modelTransactions->index(row, modelTransactions->fieldIndex("amount"));
        QModelIndex indexCategory = modelTransactions->index(row, modelTransactions->fieldIndex("category_id"));
        QModelIndex indexUser = modelTransactions->index(row, modelTransactions->fieldIndex("user_id"));

        // Проверка для поля amount (например, должно быть числовое значение и больше 0)
        if (indexAmount.data().toDouble() <= 0) {
            QMessageBox::warning(this, "Ошибка", "Поле 'Amount' должно быть больше 0!");
            return;
        }

        // Проверка для поля category_id (должен быть выбран существующий category_id)
        if (indexCategory.data().toInt() <= 0) {
            QMessageBox::warning(this, "Ошибка", "Не выбрана категория!");
            return;
        }

        // Проверка для поля user_id (должен быть выбран существующий user_id)
        if (indexUser.data().toInt() <= 0) {
            QMessageBox::warning(this, "Ошибка", "Не выбран пользователь!");
            return;
        }
    }

    // Применяем изменения в модель
    if (!modelTransactions->submitAll()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения:\n" + modelTransactions->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Транзакция успешно добавлена!");
        // Обновляем отображение в таблице
        modelTransactions->select();  // Перезагружаем данные из базы данных
    }
}



void user::on_btnDeletetransactions_clicked()
{
    deleteSelectedRow(modelTransactions, ui->tabletransactions, this);

}






void user::on_tabs_tabBarClicked(int index)
{
    Set_model_user_status();
    Set_model_Accounts();
    Set_model_planned_transactions();
    Set_model_budget();
    Set_model_categories();
    Set_model_Goals();
    Set_model_transactions();
    Charts();
}

