/********************************************************************************
** Form generated from reading UI file 'standard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARD_H
#define UI_STANDARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSTANDARD;
    QAction *actionCOMPLEX;
    QAction *actionQUADRATIC;
    QAction *actionRECORD;
    QAction *actionEXIT;
    QAction *actionABOUT;
    QAction *actionDARK;
    QAction *actionBRIGHT;
    QAction *actionLOG_TRIGO;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_1;
    QPushButton *button_9;
    QPushButton *button_2;
    QPushButton *button_cube;
    QPushButton *button_minus;
    QPushButton *button_open;
    QPushButton *button_3;
    QPushButton *button_divide;
    QPushButton *button_close;
    QPushButton *button_dzero;
    QPushButton *button_decimal;
    QPushButton *button_8;
    QPushButton *button_7;
    QPushButton *button_equal;
    QPushButton *button_croot;
    QPushButton *button_plus;
    QPushButton *button_0;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_square;
    QPushButton *button_mul;
    QPushButton *button_root;
    QPushButton *button_6;
    QPushButton *button_fraction;
    QPushButton *button_conversion;
    QPushButton *button_clear;
    QPushButton *button_clear_2;
    QPushButton *button_power;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuCALCULATOR;
    QMenu *menuOPTIONS;
    QMenu *menuTHEME;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(361, 519);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:rgb(32, 32, 32);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(97, 255, 137);\n"
"}\n"
"\n"
""));
        actionSTANDARD = new QAction(MainWindow);
        actionSTANDARD->setObjectName("actionSTANDARD");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/simple.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSTANDARD->setIcon(icon);
        actionCOMPLEX = new QAction(MainWindow);
        actionCOMPLEX->setObjectName("actionCOMPLEX");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/iota.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCOMPLEX->setIcon(icon1);
        actionQUADRATIC = new QAction(MainWindow);
        actionQUADRATIC->setObjectName("actionQUADRATIC");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/quadratic.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionQUADRATIC->setIcon(icon2);
        actionRECORD = new QAction(MainWindow);
        actionRECORD->setObjectName("actionRECORD");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/record.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRECORD->setIcon(icon3);
        actionEXIT = new QAction(MainWindow);
        actionEXIT->setObjectName("actionEXIT");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/reject.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEXIT->setIcon(icon4);
        actionABOUT = new QAction(MainWindow);
        actionABOUT->setObjectName("actionABOUT");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionABOUT->setIcon(icon5);
        actionDARK = new QAction(MainWindow);
        actionDARK->setObjectName("actionDARK");
        actionBRIGHT = new QAction(MainWindow);
        actionBRIGHT->setObjectName("actionBRIGHT");
        actionLOG_TRIGO = new QAction(MainWindow);
        actionLOG_TRIGO->setObjectName("actionLOG_TRIGO");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/logarithm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLOG_TRIGO->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 321, 101));
        lineEdit->setStyleSheet(QString::fromUtf8("font-size: 30px;\n"
"border: none;\n"
""));
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
        button_1 = new QPushButton(gridLayoutWidget);
        button_1->setObjectName("button_1");
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_1, 5, 0, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        button_9->setObjectName("button_9");
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_9, 3, 2, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        button_2->setObjectName("button_2");
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"background-color:rgb(50, 50, 50);\n"
"\n"
""));

        gridLayout->addWidget(button_2, 5, 1, 1, 1);

        button_cube = new QPushButton(gridLayoutWidget);
        button_cube->setObjectName("button_cube");
        sizePolicy.setHeightForWidth(button_cube->sizePolicy().hasHeightForWidth());
        button_cube->setSizePolicy(sizePolicy);
        button_cube->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_cube, 1, 2, 1, 1);

        button_minus = new QPushButton(gridLayoutWidget);
        button_minus->setObjectName("button_minus");
        sizePolicy.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy);
        button_minus->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_minus, 4, 3, 1, 1);

        button_open = new QPushButton(gridLayoutWidget);
        button_open->setObjectName("button_open");
        sizePolicy.setHeightForWidth(button_open->sizePolicy().hasHeightForWidth());
        button_open->setSizePolicy(sizePolicy);
        button_open->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_open, 2, 0, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        button_3->setObjectName("button_3");
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_3, 5, 2, 1, 1);

        button_divide = new QPushButton(gridLayoutWidget);
        button_divide->setObjectName("button_divide");
        sizePolicy.setHeightForWidth(button_divide->sizePolicy().hasHeightForWidth());
        button_divide->setSizePolicy(sizePolicy);
        button_divide->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_divide, 2, 3, 1, 1);

        button_close = new QPushButton(gridLayoutWidget);
        button_close->setObjectName("button_close");
        sizePolicy.setHeightForWidth(button_close->sizePolicy().hasHeightForWidth());
        button_close->setSizePolicy(sizePolicy);
        button_close->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_close, 2, 1, 1, 1);

        button_dzero = new QPushButton(gridLayoutWidget);
        button_dzero->setObjectName("button_dzero");
        sizePolicy.setHeightForWidth(button_dzero->sizePolicy().hasHeightForWidth());
        button_dzero->setSizePolicy(sizePolicy);
        button_dzero->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_dzero, 6, 0, 1, 1);

        button_decimal = new QPushButton(gridLayoutWidget);
        button_decimal->setObjectName("button_decimal");
        sizePolicy.setHeightForWidth(button_decimal->sizePolicy().hasHeightForWidth());
        button_decimal->setSizePolicy(sizePolicy);
        button_decimal->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_decimal, 6, 2, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        button_8->setObjectName("button_8");
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_8, 3, 1, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        button_7->setObjectName("button_7");
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_7, 3, 0, 1, 1);

        button_equal = new QPushButton(gridLayoutWidget);
        button_equal->setObjectName("button_equal");
        sizePolicy.setHeightForWidth(button_equal->sizePolicy().hasHeightForWidth());
        button_equal->setSizePolicy(sizePolicy);
        button_equal->setStyleSheet(QString::fromUtf8("font-size: 30px;\n"
"background-color:rgb(38, 186, 217);"));

        gridLayout->addWidget(button_equal, 6, 3, 1, 1);

        button_croot = new QPushButton(gridLayoutWidget);
        button_croot->setObjectName("button_croot");
        sizePolicy.setHeightForWidth(button_croot->sizePolicy().hasHeightForWidth());
        button_croot->setSizePolicy(sizePolicy);
        button_croot->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_croot, 1, 1, 1, 1);

        button_plus = new QPushButton(gridLayoutWidget);
        button_plus->setObjectName("button_plus");
        sizePolicy.setHeightForWidth(button_plus->sizePolicy().hasHeightForWidth());
        button_plus->setSizePolicy(sizePolicy);
        button_plus->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_plus, 5, 3, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName("button_0");
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_0, 6, 1, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        button_4->setObjectName("button_4");
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_4, 4, 0, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        button_5->setObjectName("button_5");
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_5, 4, 1, 1, 1);

        button_square = new QPushButton(gridLayoutWidget);
        button_square->setObjectName("button_square");
        sizePolicy.setHeightForWidth(button_square->sizePolicy().hasHeightForWidth());
        button_square->setSizePolicy(sizePolicy);
        button_square->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_square, 1, 0, 1, 1);

        button_mul = new QPushButton(gridLayoutWidget);
        button_mul->setObjectName("button_mul");
        sizePolicy.setHeightForWidth(button_mul->sizePolicy().hasHeightForWidth());
        button_mul->setSizePolicy(sizePolicy);
        button_mul->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_mul, 3, 3, 1, 1);

        button_root = new QPushButton(gridLayoutWidget);
        button_root->setObjectName("button_root");
        sizePolicy.setHeightForWidth(button_root->sizePolicy().hasHeightForWidth());
        button_root->setSizePolicy(sizePolicy);
        button_root->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);"));

        gridLayout->addWidget(button_root, 2, 2, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        button_6->setObjectName("button_6");
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color:rgb(50, 50, 50);"));

        gridLayout->addWidget(button_6, 4, 2, 1, 1);

        button_fraction = new QPushButton(gridLayoutWidget);
        button_fraction->setObjectName("button_fraction");
        sizePolicy.setHeightForWidth(button_fraction->sizePolicy().hasHeightForWidth());
        button_fraction->setSizePolicy(sizePolicy);
        button_fraction->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        gridLayout->addWidget(button_fraction, 0, 0, 1, 1);

        button_conversion = new QPushButton(gridLayoutWidget);
        button_conversion->setObjectName("button_conversion");
        sizePolicy.setHeightForWidth(button_conversion->sizePolicy().hasHeightForWidth());
        button_conversion->setSizePolicy(sizePolicy);
        button_conversion->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        gridLayout->addWidget(button_conversion, 0, 1, 1, 1);

        button_clear = new QPushButton(gridLayoutWidget);
        button_clear->setObjectName("button_clear");
        sizePolicy.setHeightForWidth(button_clear->sizePolicy().hasHeightForWidth());
        button_clear->setSizePolicy(sizePolicy);
        button_clear->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        gridLayout->addWidget(button_clear, 0, 2, 1, 1);

        button_clear_2 = new QPushButton(gridLayoutWidget);
        button_clear_2->setObjectName("button_clear_2");
        sizePolicy.setHeightForWidth(button_clear_2->sizePolicy().hasHeightForWidth());
        button_clear_2->setSizePolicy(sizePolicy);
        button_clear_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"\n"
"background-color: rgb(59, 60, 63);\n"
""));

        gridLayout->addWidget(button_clear_2, 0, 3, 1, 1);

        button_power = new QPushButton(gridLayoutWidget);
        button_power->setObjectName("button_power");
        sizePolicy.setHeightForWidth(button_power->sizePolicy().hasHeightForWidth());
        button_power->setSizePolicy(sizePolicy);
        button_power->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        gridLayout->addWidget(button_power, 1, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 321, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 361, 24));
        menubar->setStyleSheet(QString::fromUtf8(""));
        menuCALCULATOR = new QMenu(menubar);
        menuCALCULATOR->setObjectName("menuCALCULATOR");
        menuCALCULATOR->setStyleSheet(QString::fromUtf8(""));
        menuOPTIONS = new QMenu(menubar);
        menuOPTIONS->setObjectName("menuOPTIONS");
        menuTHEME = new QMenu(menuOPTIONS);
        menuTHEME->setObjectName("menuTHEME");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuCALCULATOR->menuAction());
        menubar->addAction(menuOPTIONS->menuAction());
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addAction(actionSTANDARD);
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addAction(actionCOMPLEX);
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addSeparator();
        menuCALCULATOR->addAction(actionLOG_TRIGO);
        menuOPTIONS->addAction(menuTHEME->menuAction());
        menuOPTIONS->addAction(actionRECORD);
        menuOPTIONS->addAction(actionEXIT);
        menuOPTIONS->addAction(actionABOUT);
        menuTHEME->addAction(actionDARK);
        menuTHEME->addAction(actionBRIGHT);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSTANDARD->setText(QCoreApplication::translate("MainWindow", "STANDARD", nullptr));
#if QT_CONFIG(shortcut)
        actionSTANDARD->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCOMPLEX->setText(QCoreApplication::translate("MainWindow", "COMPLEX", nullptr));
#if QT_CONFIG(shortcut)
        actionCOMPLEX->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQUADRATIC->setText(QCoreApplication::translate("MainWindow", "QUADRATIC", nullptr));
#if QT_CONFIG(shortcut)
        actionQUADRATIC->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRECORD->setText(QCoreApplication::translate("MainWindow", "RECORD", nullptr));
#if QT_CONFIG(shortcut)
        actionRECORD->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEXIT->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
#if QT_CONFIG(shortcut)
        actionEXIT->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionABOUT->setText(QCoreApplication::translate("MainWindow", "ABOUT", nullptr));
#if QT_CONFIG(shortcut)
        actionABOUT->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDARK->setText(QCoreApplication::translate("MainWindow", "DARK", nullptr));
#if QT_CONFIG(shortcut)
        actionDARK->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBRIGHT->setText(QCoreApplication::translate("MainWindow", "BRIGHT", nullptr));
#if QT_CONFIG(shortcut)
        actionBRIGHT->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLOG_TRIGO->setText(QCoreApplication::translate("MainWindow", "LOG & TRIGO", nullptr));
#if QT_CONFIG(shortcut)
        actionLOG_TRIGO->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_cube->setText(QCoreApplication::translate("MainWindow", "x\302\263", nullptr));
        button_minus->setText(QString());
        button_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_divide->setText(QString());
        button_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        button_dzero->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        button_decimal->setText(QString());
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_equal->setText(QString());
        button_croot->setText(QCoreApplication::translate("MainWindow", "\342\210\233x", nullptr));
        button_plus->setText(QString());
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_square->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        button_mul->setText(QString());
        button_root->setText(QString());
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_fraction->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        button_conversion->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_clear_2->setText(QString());
        button_power->setText(QCoreApplication::translate("MainWindow", "x^", nullptr));
        label->setText(QString());
        menuCALCULATOR->setTitle(QCoreApplication::translate("MainWindow", "CALCULATOR", nullptr));
        menuOPTIONS->setTitle(QCoreApplication::translate("MainWindow", "OPTIONS", nullptr));
        menuTHEME->setTitle(QCoreApplication::translate("MainWindow", "THEME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARD_H
