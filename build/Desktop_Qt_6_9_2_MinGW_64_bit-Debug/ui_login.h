/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *txtLoginTitle;
    QLineEdit *inpUsername;
    QLabel *txtUsername;
    QLineEdit *inpPassword;
    QLabel *txtPassword;
    QLabel *txtnoAccount;
    QPushButton *btnCreateAccount;
    QPushButton *btnLogin;
    QPushButton *btnExit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(360, 650);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtLoginTitle = new QLabel(centralwidget);
        txtLoginTitle->setObjectName("txtLoginTitle");
        txtLoginTitle->setGeometry(QRect(140, 100, 91, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(false);
        txtLoginTitle->setFont(font);
        txtLoginTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: #ffffff;\n"
"}"));
        inpUsername = new QLineEdit(centralwidget);
        inpUsername->setObjectName("inpUsername");
        inpUsername->setGeometry(QRect(53, 239, 271, 24));
        inpUsername->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        txtUsername = new QLabel(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(53, 219, 69, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        txtUsername->setFont(font1);
        txtUsername->setStyleSheet(QString::fromUtf8("QLabel {\n"
"\n"
"color: rgb(204, 204, 204);\n"
"}"));
        inpPassword = new QLineEdit(centralwidget);
        inpPassword->setObjectName("inpPassword");
        inpPassword->setGeometry(QRect(53, 299, 271, 24));
        inpPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        inpPassword->setEchoMode(QLineEdit::EchoMode::Password);
        txtPassword = new QLabel(centralwidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setGeometry(QRect(53, 279, 69, 20));
        txtPassword->setFont(font1);
        txtPassword->setStyleSheet(QString::fromUtf8("QLabel {\n"
"\n"
"color: rgb(172, 172, 172);\n"
"}"));
        txtnoAccount = new QLabel(centralwidget);
        txtnoAccount->setObjectName("txtnoAccount");
        txtnoAccount->setGeometry(QRect(70, 340, 111, 20));
        QFont font2;
        font2.setPointSize(8);
        txtnoAccount->setFont(font2);
        txtnoAccount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"\n"
"color: rgb(172, 172, 172);\n"
"}"));
        btnCreateAccount = new QPushButton(centralwidget);
        btnCreateAccount->setObjectName("btnCreateAccount");
        btnCreateAccount->setGeometry(QRect(179, 341, 107, 16));
        QFont font3;
        font3.setPointSize(10);
        font3.setUnderline(true);
        btnCreateAccount->setFont(font3);
        btnCreateAccount->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnCreateAccount->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba( 255, 255, 255, 0% );\n"
"border: none;\n"
"color: cyan;\n"
"}"));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(140, 420, 80, 21));
        btnLogin->setFont(font1);
        btnLogin->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(10, 10, 41, 24));
        btnExit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnExit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"color: white;\n"
"\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditUndo));
        btnExit->setIcon(icon);
        MainWindow->setCentralWidget(centralwidget);
        txtLoginTitle->raise();
        inpUsername->raise();
        txtUsername->raise();
        inpPassword->raise();
        txtPassword->raise();
        btnCreateAccount->raise();
        btnLogin->raise();
        txtnoAccount->raise();
        btnExit->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        txtLoginTitle->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        txtUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        inpPassword->setText(QString());
        txtPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txtnoAccount->setText(QCoreApplication::translate("MainWindow", "Don't have account?", nullptr));
        btnCreateAccount->setText(QCoreApplication::translate("MainWindow", "Create an account", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnExit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
