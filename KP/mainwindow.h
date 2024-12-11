#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_autorization_clicked();

    void on_radioButtonPasswrod_clicked();

private:
    Ui::MainWindow *ui;
    admin *adminWindow; // Указатель на окно Admin
    user *userWindow;   // Указатель на окно User
};

#endif // MAINWINDOW_H
