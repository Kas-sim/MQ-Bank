#include "bankoptions.h"
#include "ui_bankoptions.h"
#include "mainmenu.h"
#include "withdraw.h"
#include "deposit.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

bankOptions::bankOptions(QString fileName, QWidget *parent)
    : QDialog(parent), ui(new Ui::bankOptions), userFileName(fileName)
{
    ui->setupUi(this);
    setWindowTitle("MQ Bank");

}

bankOptions::bankOptions()
    : QDialog(nullptr)
{
    ui->setupUi(this);

}

bankOptions::~bankOptions()
{
    delete ui;
}


void bankOptions::on_btnLogOut_clicked()
{
    hide();
    mainMenu mainmenu;
    mainmenu.setModal(true);
    mainmenu.exec();
}

void bankOptions::on_btnDeposit_clicked()
{
    hide();
    deposit deposit(userFileName);
    deposit.setModal(true);
    deposit.exec();

}


void bankOptions::on_btnWithdraw_clicked()
{
    hide();
    withdraw withdraw(userFileName);
    withdraw.setModal(true);
    withdraw.exec();
}


void bankOptions::on_btnCurrentBalance_clicked()
{

    QMessageBox msg(this);
    msg.setStyleSheet("background-color: white");


    QFile file(userFileName);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);

        QString fullName = stream.readLine();
        QString password = stream.readLine();
        QString balance = stream.readLine();

        file.close();

        // QMessageBox::about(this, "Current Balance", fullName + ", your current balance \nis $" + balance);
        msg.about(this, "Current Balance", "<font color=\"White\">" + fullName + "<font color=\"White\">, your current balance \nis $ " + balance + "<font color=\"White\">");
    } else {
        // QMessageBox::warning(this, "Error", "<font color=\"White\">Unable to open user file.");

        msg.warning(this, "Error", "<font color=\"White\">Unable to open user file.");
    }

    /*         msg.critical(this, "Connection warning", "<font color=\"White\">The remote is not connected to the amplifiers <br>Please check connection");

*/

}

