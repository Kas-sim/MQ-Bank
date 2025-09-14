/********************************************************************************
** Form generated from reading UI file 'bankoptions.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKOPTIONS_H
#define UI_BANKOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bankOptions
{
public:
    QLabel *txtMQBankTitle;
    QPushButton *btnCurrentBalance;
    QPushButton *btnDeposit;
    QPushButton *btnWithdraw;
    QPushButton *btnLogOut;

    void setupUi(QDialog *bankOptions)
    {
        if (bankOptions->objectName().isEmpty())
            bankOptions->setObjectName("bankOptions");
        bankOptions->resize(360, 650);
        bankOptions->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: #000000;\n"
"}\n"
""));
        txtMQBankTitle = new QLabel(bankOptions);
        txtMQBankTitle->setObjectName("txtMQBankTitle");
        txtMQBankTitle->setGeometry(QRect(110, 60, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font.setPointSize(25);
        font.setBold(true);
        txtMQBankTitle->setFont(font);
        txtMQBankTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: cyan;\n"
"}"));
        btnCurrentBalance = new QPushButton(bankOptions);
        btnCurrentBalance->setObjectName("btnCurrentBalance");
        btnCurrentBalance->setGeometry(QRect(110, 120, 141, 31));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setUnderline(false);
        btnCurrentBalance->setFont(font1);
        btnCurrentBalance->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnCurrentBalance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;\n"
"	border: none;\n"
"border-bottom: 2px solid rgb(237, 51, 59);\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"\n"
"QMessageBox {\n"
"color: white;\n"
"background-color: black;\n"
"}\n"
""));
        btnDeposit = new QPushButton(bankOptions);
        btnDeposit->setObjectName("btnDeposit");
        btnDeposit->setGeometry(QRect(40, 310, 121, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font2.setBold(true);
        font2.setUnderline(false);
        btnDeposit->setFont(font2);
        btnDeposit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnDeposit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none; /* Removes all borders */\n"
"    border-bottom: 2px solid cyan;/* Bottom border */\n"
"    border-right: 2px solid cyan; /* Right border */\n"
"    color: white; /* Text color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding: 10px 20px;\n"
"    font-size: 15px;\n"
"    border-radius: 8px; /* Optional rounded corners */\n"
"}\n"
""));
        btnWithdraw = new QPushButton(bankOptions);
        btnWithdraw->setObjectName("btnWithdraw");
        btnWithdraw->setGeometry(QRect(200, 310, 131, 41));
        btnWithdraw->setFont(font2);
        btnWithdraw->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnWithdraw->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none; /* Removes all borders */\n"
"    border-bottom: 2px solid cyan;/* Bottom border */\n"
"    border-right: 2px solid cyan; /* Right border */\n"
"    color: white; /* Text color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding: 10px 20px;\n"
"    font-size: 15px;\n"
"    border-radius: 8px; /* Optional rounded corners */\n"
"}\n"
""));
        btnLogOut = new QPushButton(bankOptions);
        btnLogOut->setObjectName("btnLogOut");
        btnLogOut->setGeometry(QRect(240, 590, 81, 21));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setUnderline(false);
        btnLogOut->setFont(font3);
        btnLogOut->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnLogOut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent;\n"
"border-top: 2px solid rgb(119, 118, 123);\n"
"border-left: 2px solid rgb(119, 118, 123);\n"
"color: white;\n"
"border-radius: 4px;\n"
"}"));

        retranslateUi(bankOptions);

        QMetaObject::connectSlotsByName(bankOptions);
    } // setupUi

    void retranslateUi(QDialog *bankOptions)
    {
        bankOptions->setWindowTitle(QCoreApplication::translate("bankOptions", "Dialog", nullptr));
        txtMQBankTitle->setText(QCoreApplication::translate("bankOptions", "MQ Bank", nullptr));
        btnCurrentBalance->setText(QCoreApplication::translate("bankOptions", "Current Balance", nullptr));
        btnDeposit->setText(QCoreApplication::translate("bankOptions", "Deposit", nullptr));
        btnWithdraw->setText(QCoreApplication::translate("bankOptions", "Withdraw", nullptr));
        btnLogOut->setText(QCoreApplication::translate("bankOptions", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bankOptions: public Ui_bankOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKOPTIONS_H
