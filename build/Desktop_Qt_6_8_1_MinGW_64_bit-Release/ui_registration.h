/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *txtSignupTitle;
    QLineEdit *inpFullName;
    QLineEdit *inpAge;
    QLineEdit *inpPasswordR;
    QLabel *txtBankID;
    QLabel *txtPasswordR;
    QLineEdit *inpBankId;
    QLabel *txtAge;
    QLabel *txtFullName;
    QPushButton *btnBackR;
    QPushButton *btnConfirm;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(360, 650);
        registration->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QMainWindow{\n"
"background-color: rgb(0,0,0);\n"
"}"));
        txtSignupTitle = new QLabel(registration);
        txtSignupTitle->setObjectName("txtSignupTitle");
        txtSignupTitle->setGeometry(QRect(120, 90, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Naskh Arabic Semi Bold")});
        font.setPointSize(20);
        font.setBold(true);
        txtSignupTitle->setFont(font);
        txtSignupTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: #ffffff;\n"
"}"));
        inpFullName = new QLineEdit(registration);
        inpFullName->setObjectName("inpFullName");
        inpFullName->setGeometry(QRect(33, 241, 301, 18));
        QFont font1;
        font1.setPointSize(10);
        inpFullName->setFont(font1);
        inpFullName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        inpAge = new QLineEdit(registration);
        inpAge->setObjectName("inpAge");
        inpAge->setGeometry(QRect(33, 287, 301, 18));
        inpAge->setFont(font1);
        inpAge->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        inpPasswordR = new QLineEdit(registration);
        inpPasswordR->setObjectName("inpPasswordR");
        inpPasswordR->setGeometry(QRect(33, 379, 301, 18));
        inpPasswordR->setFont(font1);
        inpPasswordR->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        txtBankID = new QLabel(registration);
        txtBankID->setObjectName("txtBankID");
        txtBankID->setGeometry(QRect(40, 316, 90, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        txtBankID->setFont(font2);
        txtBankID->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: rgb(195, 195, 195);\n"
"}"));
        txtPasswordR = new QLabel(registration);
        txtPasswordR->setObjectName("txtPasswordR");
        txtPasswordR->setGeometry(QRect(40, 362, 104, 16));
        txtPasswordR->setFont(font2);
        txtPasswordR->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(195, 195, 195);\n"
"background-color: none;\n"
"}"));
        inpBankId = new QLineEdit(registration);
        inpBankId->setObjectName("inpBankId");
        inpBankId->setGeometry(QRect(33, 333, 301, 18));
        inpBankId->setFont(font1);
        inpBankId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        txtAge = new QLabel(registration);
        txtAge->setObjectName("txtAge");
        txtAge->setGeometry(QRect(40, 270, 61, 16));
        txtAge->setFont(font2);
        txtAge->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: rgb(195, 195, 195);\n"
"}"));
        txtFullName = new QLabel(registration);
        txtFullName->setObjectName("txtFullName");
        txtFullName->setGeometry(QRect(40, 224, 100, 16));
        txtFullName->setFont(font2);
        txtFullName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: rgb(195, 195, 195);\n"
"}"));
        btnBackR = new QPushButton(registration);
        btnBackR->setObjectName("btnBackR");
        btnBackR->setGeometry(QRect(10, 20, 41, 21));
        QFont font3;
        font3.setPointSize(15);
        btnBackR->setFont(font3);
        btnBackR->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnBackR->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        btnConfirm = new QPushButton(registration);
        btnConfirm->setObjectName("btnConfirm");
        btnConfirm->setGeometry(QRect(140, 440, 80, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(9);
        font4.setBold(true);
        btnConfirm->setFont(font4);
        btnConfirm->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnConfirm->setMouseTracking(true);
        btnConfirm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;\n"
"	border: none;\n"
"border-bottom: 2px solid cyan;\n"
"border-right: 2px solid cyan;\n"
"border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"QMessageBox {\n"
"color: white;\n"
"background-color: black;\n"
"}"));

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "Dialog", nullptr));
        txtSignupTitle->setText(QCoreApplication::translate("registration", "SIGN UP", nullptr));
        inpAge->setText(QString());
        inpPasswordR->setText(QString());
        txtBankID->setText(QCoreApplication::translate("registration", "Create Bank ID", nullptr));
        txtPasswordR->setText(QCoreApplication::translate("registration", "Create Password:", nullptr));
        inpBankId->setText(QString());
        txtAge->setText(QCoreApplication::translate("registration", "Enter Age", nullptr));
        txtFullName->setText(QCoreApplication::translate("registration", "Enter Full name", nullptr));
        btnBackR->setText(QCoreApplication::translate("registration", "<-", nullptr));
        btnConfirm->setText(QCoreApplication::translate("registration", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
