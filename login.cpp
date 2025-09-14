#include "login.h"
#include "ui_login.h"
#include "mainmenu.h"
#include "bankoptions.h"
#include "QMainWindow"
#include "QMessageBox"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login");
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCreateAccount_clicked()
{
    hide();
    registration registration;
    registration.setModal(true);
    registration.exec();
}


void MainWindow::on_btnExit_clicked()
{
    hide();
    mainMenu mainmenu;
    mainmenu.setModal(true);
    mainmenu.exec();
}

void MainWindow::on_btnLogin_clicked()
{
    QString fullName = ui->inpUsername->text();
    QString password = ui->inpPassword->text();

    QFile file(fullName + ".txt");

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Login Failed", "<font color=\"White\">User not found. Please check your details.");
        return;
    }

    QTextStream stream(&file);
    QString savedFullName = stream.readLine(); // First line
    QString savedPassword = stream.readLine(); // Second line
    QString savedBalance = stream.readLine();  // Third line

    file.close();

    if (fullName == savedFullName && password == savedPassword) {
        QMessageBox::about(this, "Login Successful", "<font color=\"White\">Welcome, <font color=\"White\">" + fullName + "<font color=\"White\">!");

        hide();
        bankOptions bankOptionsDialog(fullName + ".txt");
        bankOptionsDialog.setModal(true);
        bankOptionsDialog.exec();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid Bank ID or Password.");
    }

}


