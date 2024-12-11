/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabs;
    QWidget *tabtransactions;
    QGridLayout *gridLayout_2;
    QFrame *frame_16;
    QGridLayout *gridLayout_17;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_18;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_19;
    QWebEngineView *webdoxod;
    QWidget *tab_2;
    QGridLayout *gridLayout_20;
    QWebEngineView *webdoxod_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_21;
    QWebEngineView *webGraf;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_10;
    QTableView *tabletransactions;
    QTextEdit *textTran;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *btnAddtransactions;
    QPushButton *btnDeletetransactions;
    QPushButton *btnSubmittransactions;
    QPushButton *pushButton_9;
    QPushButton *pushButton_19;
    QWidget *tabincome_categories;
    QGridLayout *gridLayout_9;
    QFrame *frame_14;
    QGridLayout *gridLayout_15;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_9;
    QTableView *tableGoals;
    QTextEdit *textGoals;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btnAddGoals;
    QPushButton *btnDeleteGoals;
    QPushButton *btnSubmitGoals;
    QPushButton *pushButton_8;
    QPushButton *pushButton_18;
    QWidget *tabexpense_categories;
    QGridLayout *gridLayout_8;
    QFrame *frame_12;
    QGridLayout *gridLayout_16;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableCategories;
    QTextEdit *textcategory;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btnAddcategories;
    QPushButton *btnDeletecategories;
    QPushButton *btnSubmitcategories;
    QPushButton *pushButton_7;
    QPushButton *pushButton_17;
    QWidget *tabuser_status;
    QGridLayout *gridLayout_7;
    QFrame *frame_3;
    QGridLayout *gridLayout_11;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableuser_status;
    QTextEdit *textstatus;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnAddstatus;
    QPushButton *btnDeletestatus;
    QPushButton *btnSubmitstatus;
    QPushButton *pushButton_6;
    QPushButton *pushButton_16;
    QWidget *tabbudget;
    QGridLayout *gridLayout_6;
    QFrame *frame_10;
    QGridLayout *gridLayout_14;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QTableView *tablebudget;
    QTextEdit *textBud;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btnAddbudget;
    QPushButton *btnDeletebudget;
    QPushButton *btnSubmitbudget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_15;
    QWidget *tabplanned_transactions;
    QGridLayout *gridLayout_5;
    QFrame *frame_7;
    QGridLayout *gridLayout_13;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QTableView *tableplanned_transactions;
    QTextEdit *textplan;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnAddplan;
    QPushButton *btnDeleteplan;
    QPushButton *btnSubplan;
    QPushButton *pushButton_4;
    QPushButton *pushButton_14;
    QWidget *tablog;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableAccounts;
    QTextEdit *textacc;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddAccounts;
    QPushButton *btnDeleteAccounts;
    QPushButton *btnSubmitAccounts;
    QPushButton *pushButton_3;
    QPushButton *pushButton_13;
    QWidget *tabUser;
    QGridLayout *gridLayout_3;
    QFrame *frame_5;
    QGridLayout *gridLayout_12;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableuser;
    QTextEdit *textEditUser;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdduser;
    QPushButton *btnDeleteuser;
    QPushButton *btnSubmituser;
    QPushButton *pushButton_2;
    QPushButton *pushButton_12;
    QWidget *tab_4;
    QGridLayout *gridLayout_23;
    QFrame *frame_9;
    QGridLayout *gridLayout_22;
    QFrame *frame_18;
    QVBoxLayout *verticalLayout_11;
    QTableView *tablelog;
    QTextEdit *textEditLog;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QPushButton *pushButton_11;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(900, 600);
        admin->setMinimumSize(QSize(900, 0));
        admin->setMaximumSize(QSize(900, 600));
        admin->setStyleSheet(QString::fromUtf8(" background-color: #F9FAFB;"));
        gridLayout = new QGridLayout(admin);
        gridLayout->setObjectName("gridLayout");
        tabs = new QTabWidget(admin);
        tabs->setObjectName("tabs");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy);
        tabs->setMinimumSize(QSize(0, 0));
        tabs->setMaximumSize(QSize(5000, 5000));
        tabs->setStyleSheet(QString::fromUtf8(" background-color: #F9FAFF;"));
        tabtransactions = new QWidget();
        tabtransactions->setObjectName("tabtransactions");
        gridLayout_2 = new QGridLayout(tabtransactions);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_16 = new QFrame(tabtransactions);
        frame_16->setObjectName("frame_16");
        frame_16->setFrameShape(QFrame::Shape::StyledPanel);
        frame_16->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_17 = new QGridLayout(frame_16);
        gridLayout_17->setObjectName("gridLayout_17");
        scrollArea = new QScrollArea(frame_16);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 824, 982));
        gridLayout_18 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_18->setObjectName("gridLayout_18");
        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_19 = new QGridLayout(tab);
        gridLayout_19->setObjectName("gridLayout_19");
        webdoxod = new QWebEngineView(tab);
        webdoxod->setObjectName("webdoxod");
        webdoxod->setMinimumSize(QSize(750, 500));
        webdoxod->setMaximumSize(QSize(750, 500));
        webdoxod->setTabletTracking(false);
        webdoxod->setAutoFillBackground(false);
        webdoxod->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_19->addWidget(webdoxod, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_20 = new QGridLayout(tab_2);
        gridLayout_20->setObjectName("gridLayout_20");
        webdoxod_2 = new QWebEngineView(tab_2);
        webdoxod_2->setObjectName("webdoxod_2");
        webdoxod_2->setMinimumSize(QSize(750, 500));
        webdoxod_2->setMaximumSize(QSize(750, 500));
        webdoxod_2->setTabletTracking(false);
        webdoxod_2->setAutoFillBackground(false);
        webdoxod_2->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_20->addWidget(webdoxod_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_21 = new QGridLayout(tab_3);
        gridLayout_21->setObjectName("gridLayout_21");
        webGraf = new QWebEngineView(tab_3);
        webGraf->setObjectName("webGraf");
        webGraf->setMinimumSize(QSize(750, 500));
        webGraf->setMaximumSize(QSize(750, 500));
        webGraf->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_21->addWidget(webGraf, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_18->addWidget(tabWidget, 2, 0, 1, 1);

        frame_17 = new QFrame(scrollAreaWidgetContents);
        frame_17->setObjectName("frame_17");
        horizontalLayout_15 = new QHBoxLayout(frame_17);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        tabletransactions = new QTableView(frame_17);
        tabletransactions->setObjectName("tabletransactions");
        tabletransactions->setMinimumSize(QSize(0, 300));

        verticalLayout_10->addWidget(tabletransactions);

        textTran = new QTextEdit(frame_17);
        textTran->setObjectName("textTran");
        textTran->setMaximumSize(QSize(16777215, 30));
        textTran->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_10->addWidget(textTran);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        btnAddtransactions = new QPushButton(frame_17);
        btnAddtransactions->setObjectName("btnAddtransactions");
        btnAddtransactions->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_16->addWidget(btnAddtransactions);

        btnDeletetransactions = new QPushButton(frame_17);
        btnDeletetransactions->setObjectName("btnDeletetransactions");
        btnDeletetransactions->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeletetransactions->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_16->addWidget(btnDeletetransactions);

        btnSubmittransactions = new QPushButton(frame_17);
        btnSubmittransactions->setObjectName("btnSubmittransactions");
        btnSubmittransactions->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_16->addWidget(btnSubmittransactions);

        pushButton_9 = new QPushButton(frame_17);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_16->addWidget(pushButton_9);

        pushButton_19 = new QPushButton(frame_17);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_16->addWidget(pushButton_19);


        verticalLayout_10->addLayout(horizontalLayout_16);


        horizontalLayout_15->addLayout(verticalLayout_10);


        gridLayout_18->addWidget(frame_17, 0, 0, 2, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_17->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_16, 0, 0, 1, 1);

        tabs->addTab(tabtransactions, QString());
        tabincome_categories = new QWidget();
        tabincome_categories->setObjectName("tabincome_categories");
        gridLayout_9 = new QGridLayout(tabincome_categories);
        gridLayout_9->setObjectName("gridLayout_9");
        frame_14 = new QFrame(tabincome_categories);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_15 = new QGridLayout(frame_14);
        gridLayout_15->setObjectName("gridLayout_15");
        frame_15 = new QFrame(frame_14);
        frame_15->setObjectName("frame_15");
        horizontalLayout_13 = new QHBoxLayout(frame_15);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        tableGoals = new QTableView(frame_15);
        tableGoals->setObjectName("tableGoals");

        verticalLayout_9->addWidget(tableGoals);

        textGoals = new QTextEdit(frame_15);
        textGoals->setObjectName("textGoals");
        textGoals->setMaximumSize(QSize(16777215, 30));
        textGoals->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_9->addWidget(textGoals);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        btnAddGoals = new QPushButton(frame_15);
        btnAddGoals->setObjectName("btnAddGoals");
        btnAddGoals->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_14->addWidget(btnAddGoals);

        btnDeleteGoals = new QPushButton(frame_15);
        btnDeleteGoals->setObjectName("btnDeleteGoals");
        btnDeleteGoals->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeleteGoals->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_14->addWidget(btnDeleteGoals);

        btnSubmitGoals = new QPushButton(frame_15);
        btnSubmitGoals->setObjectName("btnSubmitGoals");
        btnSubmitGoals->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_14->addWidget(btnSubmitGoals);

        pushButton_8 = new QPushButton(frame_15);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_14->addWidget(pushButton_8);

        pushButton_18 = new QPushButton(frame_15);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_14->addWidget(pushButton_18);


        verticalLayout_9->addLayout(horizontalLayout_14);


        horizontalLayout_13->addLayout(verticalLayout_9);


        gridLayout_15->addWidget(frame_15, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_14, 0, 0, 1, 1);

        tabs->addTab(tabincome_categories, QString());
        tabexpense_categories = new QWidget();
        tabexpense_categories->setObjectName("tabexpense_categories");
        gridLayout_8 = new QGridLayout(tabexpense_categories);
        gridLayout_8->setObjectName("gridLayout_8");
        frame_12 = new QFrame(tabexpense_categories);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_16 = new QGridLayout(frame_12);
        gridLayout_16->setObjectName("gridLayout_16");
        frame_13 = new QFrame(frame_12);
        frame_13->setObjectName("frame_13");
        horizontalLayout_11 = new QHBoxLayout(frame_13);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        tableCategories = new QTableView(frame_13);
        tableCategories->setObjectName("tableCategories");

        verticalLayout_8->addWidget(tableCategories);

        textcategory = new QTextEdit(frame_13);
        textcategory->setObjectName("textcategory");
        textcategory->setMaximumSize(QSize(16777215, 30));
        textcategory->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_8->addWidget(textcategory);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        btnAddcategories = new QPushButton(frame_13);
        btnAddcategories->setObjectName("btnAddcategories");
        btnAddcategories->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_12->addWidget(btnAddcategories);

        btnDeletecategories = new QPushButton(frame_13);
        btnDeletecategories->setObjectName("btnDeletecategories");
        btnDeletecategories->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeletecategories->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_12->addWidget(btnDeletecategories);

        btnSubmitcategories = new QPushButton(frame_13);
        btnSubmitcategories->setObjectName("btnSubmitcategories");
        btnSubmitcategories->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_12->addWidget(btnSubmitcategories);

        pushButton_7 = new QPushButton(frame_13);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_12->addWidget(pushButton_7);

        pushButton_17 = new QPushButton(frame_13);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_12->addWidget(pushButton_17);


        verticalLayout_8->addLayout(horizontalLayout_12);


        horizontalLayout_11->addLayout(verticalLayout_8);


        gridLayout_16->addWidget(frame_13, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame_12, 0, 0, 1, 1);

        tabs->addTab(tabexpense_categories, QString());
        tabuser_status = new QWidget();
        tabuser_status->setObjectName("tabuser_status");
        gridLayout_7 = new QGridLayout(tabuser_status);
        gridLayout_7->setObjectName("gridLayout_7");
        frame_3 = new QFrame(tabuser_status);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_11 = new QGridLayout(frame_3);
        gridLayout_11->setObjectName("gridLayout_11");
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        tableuser_status = new QTableView(frame_4);
        tableuser_status->setObjectName("tableuser_status");

        verticalLayout_4->addWidget(tableuser_status);

        textstatus = new QTextEdit(frame_4);
        textstatus->setObjectName("textstatus");
        textstatus->setMaximumSize(QSize(16777215, 30));
        textstatus->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_4->addWidget(textstatus);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnAddstatus = new QPushButton(frame_4);
        btnAddstatus->setObjectName("btnAddstatus");
        btnAddstatus->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_5->addWidget(btnAddstatus);

        btnDeletestatus = new QPushButton(frame_4);
        btnDeletestatus->setObjectName("btnDeletestatus");
        btnDeletestatus->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeletestatus->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_5->addWidget(btnDeletestatus);

        btnSubmitstatus = new QPushButton(frame_4);
        btnSubmitstatus->setObjectName("btnSubmitstatus");
        btnSubmitstatus->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_5->addWidget(btnSubmitstatus);

        pushButton_6 = new QPushButton(frame_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_16 = new QPushButton(frame_4);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_5->addWidget(pushButton_16);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout_11->addWidget(frame_4, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_3, 0, 0, 1, 1);

        tabs->addTab(tabuser_status, QString());
        tabbudget = new QWidget();
        tabbudget->setObjectName("tabbudget");
        gridLayout_6 = new QGridLayout(tabbudget);
        gridLayout_6->setObjectName("gridLayout_6");
        frame_10 = new QFrame(tabbudget);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_14 = new QGridLayout(frame_10);
        gridLayout_14->setObjectName("gridLayout_14");
        frame_11 = new QFrame(frame_10);
        frame_11->setObjectName("frame_11");
        horizontalLayout_9 = new QHBoxLayout(frame_11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        tablebudget = new QTableView(frame_11);
        tablebudget->setObjectName("tablebudget");

        verticalLayout_7->addWidget(tablebudget);

        textBud = new QTextEdit(frame_11);
        textBud->setObjectName("textBud");
        textBud->setMaximumSize(QSize(16777215, 30));
        textBud->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_7->addWidget(textBud);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        btnAddbudget = new QPushButton(frame_11);
        btnAddbudget->setObjectName("btnAddbudget");
        btnAddbudget->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_10->addWidget(btnAddbudget);

        btnDeletebudget = new QPushButton(frame_11);
        btnDeletebudget->setObjectName("btnDeletebudget");
        btnDeletebudget->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeletebudget->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_10->addWidget(btnDeletebudget);

        btnSubmitbudget = new QPushButton(frame_11);
        btnSubmitbudget->setObjectName("btnSubmitbudget");
        btnSubmitbudget->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_10->addWidget(btnSubmitbudget);

        pushButton_5 = new QPushButton(frame_11);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_10->addWidget(pushButton_5);

        pushButton_15 = new QPushButton(frame_11);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_10->addWidget(pushButton_15);


        verticalLayout_7->addLayout(horizontalLayout_10);


        horizontalLayout_9->addLayout(verticalLayout_7);


        gridLayout_14->addWidget(frame_11, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_10, 0, 0, 1, 1);

        tabs->addTab(tabbudget, QString());
        tabplanned_transactions = new QWidget();
        tabplanned_transactions->setObjectName("tabplanned_transactions");
        gridLayout_5 = new QGridLayout(tabplanned_transactions);
        gridLayout_5->setObjectName("gridLayout_5");
        frame_7 = new QFrame(tabplanned_transactions);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_13 = new QGridLayout(frame_7);
        gridLayout_13->setObjectName("gridLayout_13");
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName("frame_8");
        horizontalLayout_6 = new QHBoxLayout(frame_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        tableplanned_transactions = new QTableView(frame_8);
        tableplanned_transactions->setObjectName("tableplanned_transactions");

        verticalLayout_5->addWidget(tableplanned_transactions);

        textplan = new QTextEdit(frame_8);
        textplan->setObjectName("textplan");
        textplan->setMaximumSize(QSize(16777215, 30));
        textplan->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_5->addWidget(textplan);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        btnAddplan = new QPushButton(frame_8);
        btnAddplan->setObjectName("btnAddplan");
        btnAddplan->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_8->addWidget(btnAddplan);

        btnDeleteplan = new QPushButton(frame_8);
        btnDeleteplan->setObjectName("btnDeleteplan");
        btnDeleteplan->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeleteplan->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_8->addWidget(btnDeleteplan);

        btnSubplan = new QPushButton(frame_8);
        btnSubplan->setObjectName("btnSubplan");
        btnSubplan->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_8->addWidget(btnSubplan);

        pushButton_4 = new QPushButton(frame_8);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_8->addWidget(pushButton_4);

        pushButton_14 = new QPushButton(frame_8);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_8->addWidget(pushButton_14);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_6->addLayout(verticalLayout_5);


        gridLayout_13->addWidget(frame_8, 0, 0, 1, 1);


        gridLayout_5->addWidget(frame_7, 2, 0, 1, 1);

        tabs->addTab(tabplanned_transactions, QString());
        tablog = new QWidget();
        tablog->setObjectName("tablog");
        gridLayout_4 = new QGridLayout(tablog);
        gridLayout_4->setObjectName("gridLayout_4");
        frame = new QFrame(tablog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setObjectName("gridLayout_10");
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        tableAccounts = new QTableView(frame_2);
        tableAccounts->setObjectName("tableAccounts");

        verticalLayout_3->addWidget(tableAccounts);

        textacc = new QTextEdit(frame_2);
        textacc->setObjectName("textacc");
        textacc->setMaximumSize(QSize(16777215, 30));
        textacc->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_3->addWidget(textacc);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnAddAccounts = new QPushButton(frame_2);
        btnAddAccounts->setObjectName("btnAddAccounts");
        btnAddAccounts->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_3->addWidget(btnAddAccounts);

        btnDeleteAccounts = new QPushButton(frame_2);
        btnDeleteAccounts->setObjectName("btnDeleteAccounts");
        btnDeleteAccounts->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeleteAccounts->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout_3->addWidget(btnDeleteAccounts);

        btnSubmitAccounts = new QPushButton(frame_2);
        btnSubmitAccounts->setObjectName("btnSubmitAccounts");
        btnSubmitAccounts->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout_3->addWidget(btnSubmitAccounts);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_13 = new QPushButton(frame_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout_3->addWidget(pushButton_13);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout_10->addWidget(frame_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 1, 1, 1);

        tabs->addTab(tablog, QString());
        tabUser = new QWidget();
        tabUser->setObjectName("tabUser");
        gridLayout_3 = new QGridLayout(tabUser);
        gridLayout_3->setObjectName("gridLayout_3");
        frame_5 = new QFrame(tabUser);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_12 = new QGridLayout(frame_5);
        gridLayout_12->setObjectName("gridLayout_12");
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        verticalLayout_6 = new QVBoxLayout(frame_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tableuser = new QTableView(frame_6);
        tableuser->setObjectName("tableuser");

        verticalLayout_6->addWidget(tableuser);

        textEditUser = new QTextEdit(frame_6);
        textEditUser->setObjectName("textEditUser");
        textEditUser->setMaximumSize(QSize(16777215, 30));
        textEditUser->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_6->addWidget(textEditUser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnAdduser = new QPushButton(frame_6);
        btnAdduser->setObjectName("btnAdduser");
        btnAdduser->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(btnAdduser);

        btnDeleteuser = new QPushButton(frame_6);
        btnDeleteuser->setObjectName("btnDeleteuser");
        btnDeleteuser->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btnDeleteuser->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F54000;\n"
"        color: #003153;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #FF6452;\n"
"       }"));

        horizontalLayout->addWidget(btnDeleteuser);

        btnSubmituser = new QPushButton(frame_6);
        btnSubmituser->setObjectName("btnSubmituser");
        btnSubmituser->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #60DB00;\n"
"        color: #181513;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #9BFF4D;\n"
"       }"));

        horizontalLayout->addWidget(btnSubmituser);

        pushButton_2 = new QPushButton(frame_6);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_12 = new QPushButton(frame_6);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #00D1B1;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #3DFFE1;\n"
"       }"));

        horizontalLayout->addWidget(pushButton_12);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout_12->addWidget(frame_6, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_5, 0, 1, 1, 1);

        tabs->addTab(tabUser, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_23 = new QGridLayout(tab_4);
        gridLayout_23->setObjectName("gridLayout_23");
        frame_9 = new QFrame(tab_4);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_22 = new QGridLayout(frame_9);
        gridLayout_22->setObjectName("gridLayout_22");
        frame_18 = new QFrame(frame_9);
        frame_18->setObjectName("frame_18");
        verticalLayout_11 = new QVBoxLayout(frame_18);
        verticalLayout_11->setObjectName("verticalLayout_11");
        tablelog = new QTableView(frame_18);
        tablelog->setObjectName("tablelog");

        verticalLayout_11->addWidget(tablelog);

        textEditLog = new QTextEdit(frame_18);
        textEditLog->setObjectName("textEditLog");
        textEditLog->setMaximumSize(QSize(16777215, 30));
        textEditLog->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: black;                      /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font-size: 14px;                    /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    background-color: white;           /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 */\n"
"    border: 1px solid #ccc;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    padding: 5px;                       /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    background-color: #E0E7FF;         /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270"
                        "\320\270 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #888;                        /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\270 */\n"
"    font-style: italic;                 /* \320\250\321\200\320\270\321\204\321\202 \320\272\321\203\321\200\321\201\320\270\320\262 */\n"
"}\n"
""));

        verticalLayout_11->addWidget(textEditLog);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_10 = new QPushButton(frame_18);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #BFC4BA;\n"
"        color: #000000;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #D8DDD5;\n"
"       }"));

        horizontalLayout_7->addWidget(pushButton_10);


        verticalLayout_11->addLayout(horizontalLayout_7);


        gridLayout_22->addWidget(frame_18, 0, 0, 1, 1);


        gridLayout_23->addWidget(frame_9, 0, 0, 1, 1);

        tabs->addTab(tab_4, QString());

        gridLayout->addWidget(tabs, 0, 0, 1, 1);

        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"        background-color: #F3F4F6;\n"
"        color: #1F2937;\n"
"        border-radius: 10px;\n"
"        font-size: 18px;\n"
"        padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"        background-color: #E5E7EB;\n"
"       }"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(admin);
        pushButton_11->setObjectName("pushButton_11");

        gridLayout->addWidget(pushButton_11, 2, 0, 1, 1);


        retranslateUi(admin);

        tabs->setCurrentIndex(7);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("admin", "\320\224\320\276\321\205\320\276\320\264\321\213(user)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("admin", "\320\240\320\260\321\201\321\205\320\276\320\264\321\213(user)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("admin", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        btnAddtransactions->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeletetransactions->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmittransactions->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_9->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_19->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabtransactions), QCoreApplication::translate("admin", "\320\242\321\200\320\260\320\275\320\267\320\260\320\272\321\206\320\270\320\270", nullptr));
        btnAddGoals->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeleteGoals->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmitGoals->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_8->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_18->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabincome_categories), QCoreApplication::translate("admin", "\320\246\320\265\320\273\320\270", nullptr));
        btnAddcategories->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeletecategories->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmitcategories->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_17->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabexpense_categories), QCoreApplication::translate("admin", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", nullptr));
        btnAddstatus->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeletestatus->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmitstatus->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_16->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabuser_status), QCoreApplication::translate("admin", "\320\241\321\202\320\260\321\202\321\203\321\201\321\213", nullptr));
        btnAddbudget->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeletebudget->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmitbudget->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_15->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabbudget), QCoreApplication::translate("admin", "\320\221\321\216\320\264\320\266\320\265\321\202", nullptr));
        btnAddplan->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeleteplan->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubplan->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_14->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabplanned_transactions), QCoreApplication::translate("admin", "\320\237\320\273\320\260\320\275\321\213", nullptr));
        btnAddAccounts->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeleteAccounts->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmitAccounts->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_13->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tablog), QCoreApplication::translate("admin", "\320\241\321\207\320\265\321\202\320\260", nullptr));
        btnAdduser->setText(QCoreApplication::translate("admin", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnDeleteuser->setText(QCoreApplication::translate("admin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btnSubmituser->setText(QCoreApplication::translate("admin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        pushButton_12->setText(QCoreApplication::translate("admin", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tabUser), QCoreApplication::translate("admin", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        pushButton_10->setText(QCoreApplication::translate("admin", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        tabs->setTabText(tabs->indexOf(tab_4), QCoreApplication::translate("admin", "\320\233\320\276\320\263\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton_11->setText(QCoreApplication::translate("admin", "\320\221\321\215\320\272\320\260\320\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
