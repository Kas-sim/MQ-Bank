/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QLabel *txtWelcomeTitle;
    QPushButton *btnLoginMM;
    QPushButton *btnSignUpMM;
    QLabel *txtMQBankTitle;
    QPushButton *btnExitMM;

    void setupUi(QDialog *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName("mainMenu");
        mainMenu->resize(360, 650);
        mainMenu->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"color: black;\n"
""));
        txtWelcomeTitle = new QLabel(mainMenu);
        txtWelcomeTitle->setObjectName("txtWelcomeTitle");
        txtWelcomeTitle->setGeometry(QRect(120, 30, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font.setPointSize(11);
        font.setBold(true);
        txtWelcomeTitle->setFont(font);
        txtWelcomeTitle->setStyleSheet(QString::fromUtf8("\n"
"	color: #ffffff;\n"
""));
        btnLoginMM = new QPushButton(mainMenu);
        btnLoginMM->setObjectName("btnLoginMM");
        btnLoginMM->setGeometry(QRect(49, 313, 101, 40));
        QFont font1;
        font1.setUnderline(false);
        btnLoginMM->setFont(font1);
        btnLoginMM->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnLoginMM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none; /* Removes all borders */\n"
"    border-bottom: 2px solid cyan; /* Bottom border */\n"
"    border-right: 2px solid cyan; /* Right border */\n"
"    color: white; /* Text color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    border-radius: 8px; /* Optional rounded corners */\n"
"}\n"
""));
        btnSignUpMM = new QPushButton(mainMenu);
        btnSignUpMM->setObjectName("btnSignUpMM");
        btnSignUpMM->setGeometry(QRect(180, 311, 106, 41));
        btnSignUpMM->setFont(font1);
        btnSignUpMM->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnSignUpMM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none; /* Removes all borders */\n"
"    border-bottom: 2px solid cyan; /* Bottom border */\n"
"    border-left: 2px solid cyan; /* Right border */\n"
"    color: white; /* Text color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    border-radius: 8px; /* Optional rounded corners */\n"
"}\n"
""));
        txtMQBankTitle = new QLabel(mainMenu);
        txtMQBankTitle->setObjectName("txtMQBankTitle");
        txtMQBankTitle->setGeometry(QRect(110, 60, 171, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font2.setPointSize(25);
        font2.setBold(true);
        txtMQBankTitle->setFont(font2);
        txtMQBankTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: cyan;\n"
"}"));
        btnExitMM = new QPushButton(mainMenu);
        btnExitMM->setObjectName("btnExitMM");
        btnExitMM->setGeometry(QRect(250, 600, 71, 21));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setUnderline(false);
        btnExitMM->setFont(font3);
        btnExitMM->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnExitMM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent;\n"
"border-top: 2px solid rgb(119, 118, 123);\n"
"border-left: 2px solid rgb(119, 118, 123);\n"
"color: white;\n"
"border-radius: 4px;\n"
"}"));

        retranslateUi(mainMenu);

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QDialog *mainMenu)
    {
        mainMenu->setWindowTitle(QCoreApplication::translate("mainMenu", "Dialog", nullptr));
        txtWelcomeTitle->setText(QCoreApplication::translate("mainMenu", "Welcome to", nullptr));
        btnLoginMM->setText(QCoreApplication::translate("mainMenu", "LOGIN", nullptr));
        btnSignUpMM->setText(QCoreApplication::translate("mainMenu", "SIGN UP", nullptr));
        txtMQBankTitle->setText(QCoreApplication::translate("mainMenu", "MQ BANK", nullptr));
        btnExitMM->setText(QCoreApplication::translate("mainMenu", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
