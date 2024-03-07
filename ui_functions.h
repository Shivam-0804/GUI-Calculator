/********************************************************************************
** Form generated from reading UI file 'functions.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONS_H
#define UI_FUNCTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow4
{
public:
    QAction *actionSTANDARD;
    QAction *actionCOMPLEX;
    QAction *actionQUADRATIC;
    QAction *actionLOG_TRIGO;
    QAction *actionRECORD;
    QAction *actionEXIT;
    QAction *actionABOUT;
    QAction *actionDARK;
    QAction *actionBRIGHT;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_pi;
    QPushButton *button_equal;
    QPushButton *button_8;
    QPushButton *button_pm;
    QPushButton *button_2;
    QPushButton *button_4;
    QPushButton *button_1;
    QPushButton *button_5;
    QPushButton *button_7;
    QPushButton *button_deg;
    QPushButton *button_6;
    QPushButton *button_cos;
    QPushButton *button_9;
    QPushButton *button_cosh;
    QPushButton *button_0;
    QPushButton *button_log;
    QPushButton *button_sin;
    QPushButton *button_tanh;
    QPushButton *button_nlog;
    QPushButton *button_cosin;
    QPushButton *button_sinh;
    QPushButton *button_tan;
    QPushButton *button_dot;
    QPushButton *button_sinin;
    QPushButton *button_3;
    QPushButton *button_tanin;
    QPushButton *button_expo_2;
    QPushButton *button_expo_3;
    QPushButton *button_clear_2;
    QPushButton *button_radian;
    QPushButton *button_clear;
    QPushButton *button_factorial;
    QLineEdit *lineEdit;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuCALCULATOR;
    QMenu *menuOPTIONS;
    QMenu *menuTHEME;
    QButtonGroup *buttonGroup1;

    void setupUi(QMainWindow *MainWindow4)
    {
        if (MainWindow4->objectName().isEmpty())
            MainWindow4->setObjectName("MainWindow4");
        MainWindow4->resize(361, 519);
        MainWindow4->setStyleSheet(QString::fromUtf8("background-color:rgb(32, 32, 32)"));
        actionSTANDARD = new QAction(MainWindow4);
        actionSTANDARD->setObjectName("actionSTANDARD");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/simple.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSTANDARD->setIcon(icon);
        actionCOMPLEX = new QAction(MainWindow4);
        actionCOMPLEX->setObjectName("actionCOMPLEX");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/iota.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCOMPLEX->setIcon(icon1);
        actionQUADRATIC = new QAction(MainWindow4);
        actionQUADRATIC->setObjectName("actionQUADRATIC");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/quadratic.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionQUADRATIC->setIcon(icon2);
        actionLOG_TRIGO = new QAction(MainWindow4);
        actionLOG_TRIGO->setObjectName("actionLOG_TRIGO");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/logarithm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLOG_TRIGO->setIcon(icon3);
        actionRECORD = new QAction(MainWindow4);
        actionRECORD->setObjectName("actionRECORD");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/record.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRECORD->setIcon(icon4);
        actionEXIT = new QAction(MainWindow4);
        actionEXIT->setObjectName("actionEXIT");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/reject.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEXIT->setIcon(icon5);
        actionABOUT = new QAction(MainWindow4);
        actionABOUT->setObjectName("actionABOUT");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionABOUT->setIcon(icon6);
        actionDARK = new QAction(MainWindow4);
        actionDARK->setObjectName("actionDARK");
        actionBRIGHT = new QAction(MainWindow4);
        actionBRIGHT->setObjectName("actionBRIGHT");
        centralwidget = new QWidget(MainWindow4);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 120, 341, 371));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        gridLayoutWidget->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_pi = new QPushButton(gridLayoutWidget);
        buttonGroup1 = new QButtonGroup(MainWindow4);
        buttonGroup1->setObjectName("buttonGroup1");
        buttonGroup1->setExclusive(true);
        buttonGroup1->addButton(button_pi);
        button_pi->setObjectName("button_pi");
        sizePolicy.setHeightForWidth(button_pi->sizePolicy().hasHeightForWidth());
        button_pi->setSizePolicy(sizePolicy);
        button_pi->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_pi, 6, 3, 1, 1);

        button_equal = new QPushButton(gridLayoutWidget);
        button_equal->setObjectName("button_equal");
        sizePolicy.setHeightForWidth(button_equal->sizePolicy().hasHeightForWidth());
        button_equal->setSizePolicy(sizePolicy);
        button_equal->setStyleSheet(QString::fromUtf8("font-size: 30px;\n"
"background-color:rgb(38, 186, 217);"));

        gridLayout->addWidget(button_equal, 7, 3, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        button_8->setObjectName("button_8");
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_8->setAutoDefault(false);

        gridLayout->addWidget(button_8, 4, 1, 1, 1);

        button_pm = new QPushButton(gridLayoutWidget);
        button_pm->setObjectName("button_pm");
        sizePolicy.setHeightForWidth(button_pm->sizePolicy().hasHeightForWidth());
        button_pm->setSizePolicy(sizePolicy);
        button_pm->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_pm->setAutoDefault(false);

        gridLayout->addWidget(button_pm, 7, 0, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        button_2->setObjectName("button_2");
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_2->setAutoDefault(false);

        gridLayout->addWidget(button_2, 6, 1, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        button_4->setObjectName("button_4");
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_4->setAutoDefault(false);

        gridLayout->addWidget(button_4, 5, 0, 1, 1);

        button_1 = new QPushButton(gridLayoutWidget);
        button_1->setObjectName("button_1");
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_1->setAutoDefault(false);

        gridLayout->addWidget(button_1, 6, 0, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        button_5->setObjectName("button_5");
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_5->setAutoDefault(false);

        gridLayout->addWidget(button_5, 5, 1, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        button_7->setObjectName("button_7");
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_7->setAutoDefault(false);

        gridLayout->addWidget(button_7, 4, 0, 1, 1);

        button_deg = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_deg);
        button_deg->setObjectName("button_deg");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_deg->sizePolicy().hasHeightForWidth());
        button_deg->setSizePolicy(sizePolicy1);
        button_deg->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_deg, 1, 2, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        button_6->setObjectName("button_6");
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_6->setAutoDefault(false);

        gridLayout->addWidget(button_6, 5, 2, 1, 1);

        button_cos = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_cos);
        button_cos->setObjectName("button_cos");
        sizePolicy1.setHeightForWidth(button_cos->sizePolicy().hasHeightForWidth());
        button_cos->setSizePolicy(sizePolicy1);
        button_cos->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_cos, 2, 2, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        button_9->setObjectName("button_9");
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_9->setAutoDefault(false);

        gridLayout->addWidget(button_9, 4, 2, 1, 1);

        button_cosh = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_cosh);
        button_cosh->setObjectName("button_cosh");
        sizePolicy.setHeightForWidth(button_cosh->sizePolicy().hasHeightForWidth());
        button_cosh->setSizePolicy(sizePolicy);
        button_cosh->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_cosh, 4, 3, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName("button_0");
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_0->setAutoDefault(false);

        gridLayout->addWidget(button_0, 7, 1, 1, 1);

        button_log = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_log);
        button_log->setObjectName("button_log");
        sizePolicy1.setHeightForWidth(button_log->sizePolicy().hasHeightForWidth());
        button_log->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_log, 1, 0, 1, 1);

        button_sin = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_sin);
        button_sin->setObjectName("button_sin");
        sizePolicy1.setHeightForWidth(button_sin->sizePolicy().hasHeightForWidth());
        button_sin->setSizePolicy(sizePolicy1);
        button_sin->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_sin, 2, 1, 1, 1);

        button_tanh = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_tanh);
        button_tanh->setObjectName("button_tanh");
        sizePolicy.setHeightForWidth(button_tanh->sizePolicy().hasHeightForWidth());
        button_tanh->setSizePolicy(sizePolicy);
        button_tanh->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_tanh, 5, 3, 1, 1);

        button_nlog = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_nlog);
        button_nlog->setObjectName("button_nlog");
        sizePolicy1.setHeightForWidth(button_nlog->sizePolicy().hasHeightForWidth());
        button_nlog->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_nlog, 1, 1, 1, 1);

        button_cosin = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_cosin);
        button_cosin->setObjectName("button_cosin");
        sizePolicy.setHeightForWidth(button_cosin->sizePolicy().hasHeightForWidth());
        button_cosin->setSizePolicy(sizePolicy);
        button_cosin->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_cosin, 3, 2, 1, 1);

        button_sinh = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_sinh);
        button_sinh->setObjectName("button_sinh");
        sizePolicy.setHeightForWidth(button_sinh->sizePolicy().hasHeightForWidth());
        button_sinh->setSizePolicy(sizePolicy);
        button_sinh->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_sinh, 3, 3, 1, 1);

        button_tan = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_tan);
        button_tan->setObjectName("button_tan");
        sizePolicy1.setHeightForWidth(button_tan->sizePolicy().hasHeightForWidth());
        button_tan->setSizePolicy(sizePolicy1);
        button_tan->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_tan, 2, 0, 1, 1);

        button_dot = new QPushButton(gridLayoutWidget);
        button_dot->setObjectName("button_dot");
        sizePolicy.setHeightForWidth(button_dot->sizePolicy().hasHeightForWidth());
        button_dot->setSizePolicy(sizePolicy);
        button_dot->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_dot->setAutoDefault(false);

        gridLayout->addWidget(button_dot, 7, 2, 1, 1);

        button_sinin = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_sinin);
        button_sinin->setObjectName("button_sinin");
        sizePolicy.setHeightForWidth(button_sinin->sizePolicy().hasHeightForWidth());
        button_sinin->setSizePolicy(sizePolicy);
        button_sinin->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_sinin, 3, 1, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        button_3->setObjectName("button_3");
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
""));
        button_3->setAutoDefault(false);

        gridLayout->addWidget(button_3, 6, 2, 1, 1);

        button_tanin = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_tanin);
        button_tanin->setObjectName("button_tanin");
        sizePolicy.setHeightForWidth(button_tanin->sizePolicy().hasHeightForWidth());
        button_tanin->setSizePolicy(sizePolicy);
        button_tanin->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_tanin, 3, 0, 1, 1);

        button_expo_2 = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_expo_2);
        button_expo_2->setObjectName("button_expo_2");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_expo_2->sizePolicy().hasHeightForWidth());
        button_expo_2->setSizePolicy(sizePolicy2);
        button_expo_2->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_expo_2, 0, 0, 1, 1);

        button_expo_3 = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_expo_3);
        button_expo_3->setObjectName("button_expo_3");
        sizePolicy1.setHeightForWidth(button_expo_3->sizePolicy().hasHeightForWidth());
        button_expo_3->setSizePolicy(sizePolicy1);
        button_expo_3->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_expo_3, 0, 1, 1, 1);

        button_clear_2 = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_clear_2);
        button_clear_2->setObjectName("button_clear_2");
        sizePolicy1.setHeightForWidth(button_clear_2->sizePolicy().hasHeightForWidth());
        button_clear_2->setSizePolicy(sizePolicy1);
        button_clear_2->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_clear_2, 0, 3, 1, 1);

        button_radian = new QPushButton(gridLayoutWidget);
        button_radian->setObjectName("button_radian");
        sizePolicy1.setHeightForWidth(button_radian->sizePolicy().hasHeightForWidth());
        button_radian->setSizePolicy(sizePolicy1);
        button_radian->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_radian, 1, 3, 1, 1);

        button_clear = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_clear);
        button_clear->setObjectName("button_clear");
        sizePolicy1.setHeightForWidth(button_clear->sizePolicy().hasHeightForWidth());
        button_clear->setSizePolicy(sizePolicy1);
        button_clear->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_clear, 0, 2, 1, 1);

        button_factorial = new QPushButton(gridLayoutWidget);
        buttonGroup1->addButton(button_factorial);
        button_factorial->setObjectName("button_factorial");
        sizePolicy1.setHeightForWidth(button_factorial->sizePolicy().hasHeightForWidth());
        button_factorial->setSizePolicy(sizePolicy1);
        button_factorial->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));

        gridLayout->addWidget(button_factorial, 2, 3, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 0, 341, 111));
        lineEdit->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 341, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        MainWindow4->setCentralWidget(centralwidget);
        lineEdit->raise();
        gridLayoutWidget->raise();
        label->raise();
        menubar = new QMenuBar(MainWindow4);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 361, 24));
        menuCALCULATOR = new QMenu(menubar);
        menuCALCULATOR->setObjectName("menuCALCULATOR");
        menuOPTIONS = new QMenu(menubar);
        menuOPTIONS->setObjectName("menuOPTIONS");
        menuTHEME = new QMenu(menuOPTIONS);
        menuTHEME->setObjectName("menuTHEME");
        MainWindow4->setMenuBar(menubar);

        menubar->addAction(menuCALCULATOR->menuAction());
        menubar->addAction(menuOPTIONS->menuAction());
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addAction(actionSTANDARD);
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addAction(actionCOMPLEX);
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addAction(actionLOG_TRIGO);
        menuOPTIONS->addSeparator();
        menuOPTIONS->addAction(menuTHEME->menuAction());
        menuOPTIONS->addSeparator();
        menuOPTIONS->addAction(actionRECORD);
        menuOPTIONS->addSeparator();
        menuOPTIONS->addAction(actionEXIT);
        menuOPTIONS->addSeparator();
        menuOPTIONS->addAction(actionABOUT);
        menuTHEME->addSeparator();
        menuTHEME->addAction(actionDARK);
        menuTHEME->addSeparator();
        menuTHEME->addAction(actionBRIGHT);

        retranslateUi(MainWindow4);

        QMetaObject::connectSlotsByName(MainWindow4);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow4)
    {
        MainWindow4->setWindowTitle(QCoreApplication::translate("MainWindow4", "MainWindow", nullptr));
        actionSTANDARD->setText(QCoreApplication::translate("MainWindow4", "STANDARD", nullptr));
#if QT_CONFIG(shortcut)
        actionSTANDARD->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCOMPLEX->setText(QCoreApplication::translate("MainWindow4", "COMPLEX", nullptr));
#if QT_CONFIG(shortcut)
        actionCOMPLEX->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQUADRATIC->setText(QCoreApplication::translate("MainWindow4", "QUADRATIC", nullptr));
#if QT_CONFIG(shortcut)
        actionQUADRATIC->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLOG_TRIGO->setText(QCoreApplication::translate("MainWindow4", "LOG&TRIGO", nullptr));
#if QT_CONFIG(shortcut)
        actionLOG_TRIGO->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRECORD->setText(QCoreApplication::translate("MainWindow4", "RECORD", nullptr));
#if QT_CONFIG(shortcut)
        actionRECORD->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEXIT->setText(QCoreApplication::translate("MainWindow4", "EXIT", nullptr));
#if QT_CONFIG(shortcut)
        actionEXIT->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionABOUT->setText(QCoreApplication::translate("MainWindow4", "ABOUT", nullptr));
#if QT_CONFIG(shortcut)
        actionABOUT->setShortcut(QCoreApplication::translate("MainWindow4", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDARK->setText(QCoreApplication::translate("MainWindow4", "DARK", nullptr));
#if QT_CONFIG(shortcut)
        actionDARK->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBRIGHT->setText(QCoreApplication::translate("MainWindow4", "BRIGHT", nullptr));
#if QT_CONFIG(shortcut)
        actionBRIGHT->setShortcut(QCoreApplication::translate("MainWindow4", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        button_pi->setText(QString());
        button_equal->setText(QString());
        button_8->setText(QCoreApplication::translate("MainWindow4", "8", nullptr));
        button_pm->setText(QCoreApplication::translate("MainWindow4", "+/-", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow4", "2", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow4", "4", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow4", "1", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow4", "5", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow4", "7", nullptr));
        button_deg->setText(QCoreApplication::translate("MainWindow4", "deg", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow4", "6", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow4", "cos", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow4", "9", nullptr));
        button_cosh->setText(QCoreApplication::translate("MainWindow4", "cosh", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow4", "0", nullptr));
        button_log->setStyleSheet(QCoreApplication::translate("MainWindow4", "font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
"", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow4", "log", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow4", "sin", nullptr));
        button_tanh->setText(QCoreApplication::translate("MainWindow4", "tanh", nullptr));
        button_nlog->setStyleSheet(QCoreApplication::translate("MainWindow4", "font-size: 15px;\n"
"background-color: rgb(59, 60, 63);\n"
"\n"
"", nullptr));
        button_nlog->setText(QCoreApplication::translate("MainWindow4", "ln", nullptr));
        button_cosin->setText(QCoreApplication::translate("MainWindow4", "cos-1", nullptr));
        button_sinh->setText(QCoreApplication::translate("MainWindow4", "sinh", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow4", "tan", nullptr));
        button_dot->setText(QString());
        button_sinin->setText(QCoreApplication::translate("MainWindow4", "sin-1", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow4", "3", nullptr));
        button_tanin->setText(QCoreApplication::translate("MainWindow4", "tan-1", nullptr));
        button_expo_2->setText(QCoreApplication::translate("MainWindow4", "e", nullptr));
        button_expo_3->setText(QCoreApplication::translate("MainWindow4", "e\313\243", nullptr));
        button_clear_2->setText(QString());
        button_radian->setText(QCoreApplication::translate("MainWindow4", "rad", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow4", "C", nullptr));
        button_factorial->setText(QCoreApplication::translate("MainWindow4", "x!", nullptr));
        label->setText(QString());
        menuCALCULATOR->setTitle(QCoreApplication::translate("MainWindow4", "CALCULATOR", nullptr));
        menuOPTIONS->setTitle(QCoreApplication::translate("MainWindow4", "OPTIONS", nullptr));
        menuTHEME->setTitle(QCoreApplication::translate("MainWindow4", "THEME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow4: public Ui_MainWindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONS_H
