/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *password;
    QRadioButton *radioButtonPasswrod;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QPushButton *autorization;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        MainWindow->setMaximumSize(QSize(400, 300));
        MainWindow->setStyleSheet(QString::fromUtf8(" background-color: #F9FAFB;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        horizontalLayout->addWidget(password);

        radioButtonPasswrod = new QRadioButton(centralwidget);
        radioButtonPasswrod->setObjectName("radioButtonPasswrod");

        horizontalLayout->addWidget(radioButtonPasswrod);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        autorization = new QPushButton(centralwidget);
        autorization->setObjectName("autorization");
        autorization->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        autorization->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #4F46E5;\n"
"        color: #FFFFFF;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #6366F1;\n"
"       }"));

        gridLayout->addWidget(autorization, 8, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(name);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "admin_password", nullptr));
        radioButtonPasswrod->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217/\320\277\320\276\321\207\321\202\320\260", nullptr));
        autorization->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        name->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
