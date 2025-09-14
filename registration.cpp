#include "registration.h"
#include "ui_registration.h"
#include "mainmenu.h"
#include "QString"
#include "login.h"
#include <QScreen>


registration::registration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registration)
{
    ui->setupUi(this);
    setWindowTitle("Registration");
}

registration::~registration()
{
    delete ui;
}

void registration::on_btnBackR_clicked()
{
    hide();
    mainMenu mainmenu;
    mainmenu.setModal(true);
    mainmenu.exec();
}


void registration::on_btnConfirm_clicked()
{

    MainWindow *login = new MainWindow();  // Create MainWindow object

    // Center the window on the screen
    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - login->width()) / 2;
    int y = (screenGeometry.height() - login->height()) / 2;
    login->move(x, y);  // Move the login window to the center

    login->show();  // Show MainWindow normally
    this->close();  // Close the main menu dialog

    QString fullName = ui->inpFullName->text();
    QString age = ui->inpAge->text();
    float balance = 0;
    QString bankID = ui->inpBankId->text();
    QString createPass = ui->inpPasswordR->text();

    QFile file(fullName +".txt");
    if (file.open(QIODevice::Truncate | QIODevice::ReadWrite)) {

        QTextStream stream(&file);
        stream << fullName + "\n";
        stream <<createPass + "\n";
        stream << balance << Qt::endl;
        stream << age + "\n";
        stream << bankID + "\n";

    }
    file.close();

}

