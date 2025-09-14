#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "registration.h"
#include "login.h"
#include <QGuiApplication>
#include <QScreen>

mainMenu::mainMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainMenu)
{
    ui->setupUi(this);

    setWindowTitle("Registration Form");

}

mainMenu::~mainMenu()
{
    delete ui;
}

void mainMenu::on_btnSignUpMM_clicked()
{
    hide();
    registration registration;
    registration.setModal(true);
    registration.exec();
}

void mainMenu::on_btnLoginMM_clicked()
{
    MainWindow *login = new MainWindow();


    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - login->width()) / 2;
    int y = (screenGeometry.height() - login->height()) / 2;
    login->move(x, y);

    login->show();
    this->close();
}



void mainMenu::on_btnExitMM_clicked()
{
    exit(0);
}


