/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_H
#define UI_WITHDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_withdraw
{
public:
    QLabel *txtAmountWithdraw;
    QLabel *txtWithdrawTitle;
    QLineEdit *inpWithdraw;
    QPushButton *btnArrowBackW;
    QPushButton *btnConfrimW;

    void setupUi(QDialog *withdraw)
    {
        if (withdraw->objectName().isEmpty())
            withdraw->setObjectName("withdraw");
        withdraw->resize(360, 650);
        withdraw->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
""));
        txtAmountWithdraw = new QLabel(withdraw);
        txtAmountWithdraw->setObjectName("txtAmountWithdraw");
        txtAmountWithdraw->setGeometry(QRect(60, 300, 241, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("FontAwesome")});
        font.setPointSize(9);
        font.setBold(true);
        txtAmountWithdraw->setFont(font);
        txtAmountWithdraw->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        txtWithdrawTitle = new QLabel(withdraw);
        txtWithdrawTitle->setObjectName("txtWithdrawTitle");
        txtWithdrawTitle->setGeometry(QRect(60, 80, 261, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font1.setPointSize(19);
        font1.setBold(true);
        txtWithdrawTitle->setFont(font1);
        txtWithdrawTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: #ffffff;\n"
"}"));
        inpWithdraw = new QLineEdit(withdraw);
        inpWithdraw->setObjectName("inpWithdraw");
        inpWithdraw->setGeometry(QRect(30, 330, 311, 21));
        inpWithdraw->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        btnArrowBackW = new QPushButton(withdraw);
        btnArrowBackW->setObjectName("btnArrowBackW");
        btnArrowBackW->setGeometry(QRect(10, 10, 41, 26));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(false);
        btnArrowBackW->setFont(font2);
        btnArrowBackW->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnArrowBackW->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
""));
        btnConfrimW = new QPushButton(withdraw);
        btnConfrimW->setObjectName("btnConfrimW");
        btnConfrimW->setGeometry(QRect(139, 400, 81, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(9);
        font3.setBold(true);
        btnConfrimW->setFont(font3);
        btnConfrimW->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnConfrimW->setMouseTracking(true);
        btnConfrimW->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;\n"
"	border: none;\n"
"border-bottom: 2px solid cyan;\n"
"border-right: 2px solid cyan;\n"
"border-radius: 5px;\n"
"\n"
"}\n"
"\n"
"QMessageBox {\n"
"color: white;\n"
"background-color: black;\n"
"}\n"
""));

        retranslateUi(withdraw);

        QMetaObject::connectSlotsByName(withdraw);
    } // setupUi

    void retranslateUi(QDialog *withdraw)
    {
        withdraw->setWindowTitle(QCoreApplication::translate("withdraw", "Dialog", nullptr));
        txtAmountWithdraw->setText(QCoreApplication::translate("withdraw", "Enter amount you want to Withdraw", nullptr));
        txtWithdrawTitle->setText(QCoreApplication::translate("withdraw", "WITHDRAW MONEY", nullptr));
        btnArrowBackW->setText(QCoreApplication::translate("withdraw", "<-", nullptr));
        btnConfrimW->setText(QCoreApplication::translate("withdraw", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class withdraw: public Ui_withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_H
