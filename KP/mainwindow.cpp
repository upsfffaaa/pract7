#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include "user.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QCryptographicHash>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Устанавливаем по умолчанию скрытый режим для поля пароля
    ui->password->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_autorization_clicked()
{
    QString inputNameOrEmail = ui->name->text().trimmed();
    QString inputPassword = ui->password->text();

    if (inputNameOrEmail.isEmpty() || inputPassword.isEmpty()) {
        QMessageBox::warning(this, "Ошибка авторизации", "Заполните поля 'Имя/почта' и 'Пароль'");
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        SELECT username, email, password, is_superuser
        FROM users
        WHERE (username = :nameOrEmail OR email = :nameOrEmail)
          AND password = crypt(:inputPassword, password)
    )");
    query.bindValue(":nameOrEmail", inputNameOrEmail);
    query.bindValue(":inputPassword", inputPassword); // Передаем пароль для хеширования и сравнения

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to query the database.");
        return;
    }

    if (query.next()) {
        QString storedUsername = query.value("username").toString();
        QString storedEmail = query.value("email").toString();
        bool isSuperuser = query.value("is_superuser").toBool();

        qDebug() << "Found user: " << storedUsername << " Email: " << storedEmail;

        if (isSuperuser) {
            admin *adminWindow = new admin();
            adminWindow->show();
            this->close();
        } else {
            user *userWindow = new user;
            userWindow->show();
            this->close();
        }
    } else {
        QMessageBox::warning(this, "Ошибка авторизации", "Неверное имя пользовалетя, почта или пароль");
    }
}



void MainWindow::on_radioButtonPasswrod_clicked()
{
    // Проверяем состояние радио-кнопки и переключаем режим отображения пароля
    if (ui->radioButtonPasswrod->isChecked()) {
        ui->password->setEchoMode(QLineEdit::Normal); // Показываем пароль
    } else {
        ui->password->setEchoMode(QLineEdit::Password); // Скрываем пароль
    }
}
