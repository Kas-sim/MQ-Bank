/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deposit
{
public:
    QLabel *txtDepositTitle;
    QPushButton *btnArrowBackD;
    QLabel *txtAmountWithdraw;
    QLineEdit *inpDeposit;
    QPushButton *btnSignUp;

    void setupUi(QDialog *deposit)
    {
        if (deposit->objectName().isEmpty())
            deposit->setObjectName("deposit");
        deposit->resize(360, 650);
        deposit->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"\n"
""));
        txtDepositTitle = new QLabel(deposit);
        txtDepositTitle->setObjectName("txtDepositTitle");
        txtDepositTitle->setGeometry(QRect(80, 70, 231, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font.setPointSize(20);
        font.setBold(true);
        txtDepositTitle->setFont(font);
        txtDepositTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: #ffffff;\n"
"}"));
        btnArrowBackD = new QPushButton(deposit);
        btnArrowBackD->setObjectName("btnArrowBackD");
        btnArrowBackD->setGeometry(QRect(10, 20, 41, 21));
        QFont font1;
        font1.setPointSize(15);
        btnArrowBackD->setFont(font1);
        btnArrowBackD->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba( 255, 255, 255, 0% );\n"
"border: none;\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        btnArrowBackD->setIcon(icon);
        txtAmountWithdraw = new QLabel(deposit);
        txtAmountWithdraw->setObjectName("txtAmountWithdraw");
        txtAmountWithdraw->setGeometry(QRect(80, 310, 201, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FontAwesome")});
        font2.setPointSize(9);
        font2.setBold(true);
        txtAmountWithdraw->setFont(font2);
        txtAmountWithdraw->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        inpDeposit = new QLineEdit(deposit);
        inpDeposit->setObjectName("inpDeposit");
        inpDeposit->setGeometry(QRect(20, 340, 321, 21));
        inpDeposit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        btnSignUp = new QPushButton(deposit);
        btnSignUp->setObjectName("btnSignUp");
        btnSignUp->setGeometry(QRect(140, 390, 80, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cantarell")});
        font3.setPointSize(9);
        btnSignUp->setFont(font3);
        btnSignUp->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnSignUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;\n"
"	border: none;\n"
"border-bottom: 2px solid cyan;\n"
"border-right: 2px solid cyan;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
""));

        retranslateUi(deposit);

        QMetaObject::connectSlotsByName(deposit);
    } // setupUi

    void retranslateUi(QDialog *deposit)
    {
        deposit->setWindowTitle(QCoreApplication::translate("deposit", "Dialog", nullptr));
        txtDepositTitle->setText(QCoreApplication::translate("deposit", "DEPOSIT MONEY", nullptr));
        btnArrowBackD->setText(QString());
        txtAmountWithdraw->setText(QCoreApplication::translate("deposit", "Enter amount you want to Deposit", nullptr));
        btnSignUp->setText(QCoreApplication::translate("deposit", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deposit: public Ui_deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
