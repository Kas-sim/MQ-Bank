/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
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
        MainWindow->resize(544, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtLoginTitle = new QLabel(centralwidget);
        txtLoginTitle->setObjectName("txtLoginTitle");
        txtLoginTitle->setGeometry(QRect(220, 110, 91, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Display")});
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(false);
        txtLoginTitle->setFont(font);
        txtLoginTitle->setStyleSheet(QString::fromUtf8(""));
        inpUsername = new QLineEdit(centralwidget);
        inpUsername->setObjectName("inpUsername");
        inpUsername->setGeometry(QRect(130, 240, 271, 24));
        inpUsername->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        txtUsername = new QLabel(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(130, 220, 69, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        txtUsername->setFont(font1);
        inpPassword = new QLineEdit(centralwidget);
        inpPassword->setObjectName("inpPassword");
        inpPassword->setGeometry(QRect(130, 300, 271, 24));
        inpPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        txtPassword = new QLabel(centralwidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setGeometry(QRect(130, 280, 69, 20));
        txtPassword->setFont(font1);
        txtnoAccount = new QLabel(centralwidget);
        txtnoAccount->setObjectName("txtnoAccount");
        txtnoAccount->setGeometry(QRect(152, 342, 98, 16));
        QFont font2;
        font2.setPointSize(8);
        txtnoAccount->setFont(font2);
        btnCreateAccount = new QPushButton(centralwidget);
        btnCreateAccount->setObjectName("btnCreateAccount");
        btnCreateAccount->setGeometry(QRect(256, 342, 107, 16));
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
        btnLogin->setGeometry(QRect(231, 421, 80, 19));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(317, 421, 80, 19));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        txtLoginTitle->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        txtUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        txtPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txtnoAccount->setText(QCoreApplication::translate("MainWindow", "Don't have account?", nullptr));
        btnCreateAccount->setText(QCoreApplication::translate("MainWindow", "Create an account", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
