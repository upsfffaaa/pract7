#ifndef USER_H
#define USER_H


//#include "qevent.h"
#include <QWidget>
#include <QSqlRelationalTableModel> // Для QSqlRelationalTableModel
#include <QComboBox>
#include <QSqlError>
#include <QWebEngineView>
#include <QTableView>
#include <QFile>

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    //кнопки
    void on_pushButton_clicked();
    //
    //
    void on_btnAddAccounts_clicked();
    void on_btnDeleteAccounts_clicked();
    void on_btnSubmitAccounts_clicked();
    //
    void on_btnAddplan_clicked();
    void on_btnDeleteplan_clicked();
    void on_btnSubmitplan_clicked();
    //
    void on_btnAddbudget_clicked();
    void on_btnDeletebudget_clicked();
    void on_btnSubmitbudget_clicked();
    //
    void on_btnAddstatus_clicked();
    void on_btnDeletestatus_clicked();
    void on_btnSubmitstatus_clicked();
    //
    void on_btnAddcategories_clicked();
    void on_btnDeletecategories_clicked();
    void on_btnSubmitcategories_clicked();
    //
    void on_btnAddGoals_clicked();
    void on_btnDeleteGoals_clicked();
    void on_btnSubmitGoals_clicked();
    //
    void on_btnAddtransactions_clicked();
    void on_btnDeletetransactions_clicked();
    void on_btnSubmittransactions_clicked();

    //модели

    void Set_model_user_status();
    void Set_model_Accounts();
    void Set_model_planned_transactions();
    void Set_model_budget();
    void Set_model_categories();
    void Set_model_Goals();
    void Set_model_transactions();

    //
    //void CreateTransactionCharts();
    //
    void deleteSelectedRow(QSqlTableModel *model, QTableView *tableView, QWidget *parent);
    void NewRow(QSqlTableModel *model, const QString &tableName, QWidget *parent = nullptr);
    // диаграммы
    void generateIncomeChart(const QString& filePath);
    void generateExpenseChart(const QString& filePath);
    void generateIncomeExpenseChart(const QString &filePath);
    void Charts();









    void on_tabs_tabBarClicked(int index);
private:
    Ui::user *ui;
    QSqlRelationalTableModel *modelTransactions;//
    QSqlRelationalTableModel *modelUserStatus;//
    QSqlRelationalTableModel *modelUsers;//
    QSqlRelationalTableModel *modelGoals;//
    QSqlRelationalTableModel *modelCategories;//
    QSqlRelationalTableModel *modelBudget;//
    QSqlRelationalTableModel *modelPlannedTransactions;//
    QSqlRelationalTableModel *modelAccounts;//
    QComboBox *statusComboBox;
    void setupModels(); // Добавьте объявление этой функции
    void setupTabConnections(); // Добавьте объявление этой функции
    void showError(const QString &message, const QSqlError &error); // Добавьте объявление
    QSqlRelationalTableModel* getCurrentModel();
};

#endif // USER_H
