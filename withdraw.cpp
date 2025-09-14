#include "withdraw.h"
#include "ui_withdraw.h"
#include "bankoptions.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

withdraw::withdraw(QString fileName, QWidget *parent)
    : QDialog(parent), ui(new Ui::withdraw), userFileName(fileName)
{
    ui->setupUi(this);
    setWindowTitle("Withdraw");
}

withdraw::withdraw()
    : QDialog(nullptr)
{
    ui->setupUi(this);
}


withdraw::~withdraw()
{
    delete ui;
}

void withdraw::on_btnArrowBackW_clicked()
{
    hide();
    bankOptions bankoptions(userFileName);
    bankoptions.setModal(true);
    bankoptions.exec();
}

void withdraw::on_btnConfrimW_clicked()
{
    QString withdrawAmount = ui->inpWithdraw->text();

    QMessageBox msg(this);
    msg.setStyleSheet("background-color: white");


    QFile file(userFileName);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);

        QString fullName = stream.readLine();
        QString password = stream.readLine();
        QString balance = stream.readLine();

        file.close();

        bool balanceOk, withdrawOk;
        int currentBalance = balance.toInt(&balanceOk);
        int withdraw = withdrawAmount.toInt(&withdrawOk);

        if (!balanceOk || !withdrawOk) {
            QMessageBox::warning(this, "Error", "I<font color=\"White\">nvalid balance or withdraw amount!");
            return;
        }

        int newBalance = currentBalance - withdraw;

        if (file.open(QIODevice::WriteOnly)) {
            QTextStream writeStream(&file);

            writeStream << fullName << "\n";
            writeStream << password << "\n";
            writeStream << QString::number(newBalance) << "\n";

            file.close();

            msg.about(this, "After Withdrawal", "<font color=\"White\">" + fullName + "<font color=\"White\">, you withdrawed $" + "<font color=\"White\">" + withdrawAmount + "\n""Your current balance is $" + "<font color=\"White\">" + QString::number(newBalance));
            // QMessageBox::information(this, "After Withdrawal", fullName + "<font color=\"White\">, your current balance \nis $" + QString::number(newBalance));
        } else {
            // QMessageBox::warning(this, "Error", "<font color=\"White\">Unable to update file.");
            msg.warning(this, "Error", "<font color=\"White\">Unable to update file.");
        }
    } else {
        // QMessageBox::warning(this, "Error", "<font color=\"White\">Unable to open user file.");
        msg.warning(this, "Error", "<font color=\"White\">Unable to open user file.");
    }

}

