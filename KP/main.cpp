#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QWebEngineProfile>
#include <QWebEngineSettings>

bool connectToDatabase(QWidget *parent = nullptr) {
    // Создаём объект базы данных
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL"); // Используем драйвер PostgreSQL

    // Настраиваем параметры подключения
    db.setHostName("localhost"); // Если база данных на локальной машине
    db.setDatabaseName("KP");    // Название базы данных
    db.setUserName("upsfffaaa"); // Имя пользователя
    db.setPassword("15937048"); // Пароль

    // Открываем соединение
    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
        QMessageBox::critical(parent, "Database Error", "Failed to connect to the database:\n" + db.lastError().text());
        return false;
    }

    qDebug() << "Database connection established!";
    QMessageBox::information(parent, "Database Connection", "Connected to the database successfully!");
    return true;
}
// Применяем настройки ко всем QWebEngineView
void applyWebViewSettings() {
    QWebEngineProfile *profile = QWebEngineProfile::defaultProfile();
    QWebEngineSettings *settings = profile->settings();

    // Разрешаем использование локального хранилища
    settings->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);

    // Разрешаем выполнение JavaScript
    settings->setAttribute(QWebEngineSettings::JavascriptEnabled, true);

    // Разрешаем доступ к локальному контенту с удаленными URL
    settings->setAttribute(QWebEngineSettings::LocalContentCanAccessRemoteUrls, true);

    // Вы также можете добавить другие настройки, которые хотите применить ко всем веб-вьюшкам
}
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    applyWebViewSettings();
    // Подключение к базе данных
    if (!connectToDatabase()) {
        return -1; // Завершаем приложение, если соединение не удалось
    }

    MainWindow w;
    w.show();
    return a.exec();
}
