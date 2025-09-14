#include "deposit.h"
#include "ui_deposit.h"
#include "bankoptions.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

deposit::deposit(QString fileName, QWidget *parent)
    : QDialog(parent), ui(new Ui::deposit), userFileName(fileName)
{
    ui->setupUi(this);
    setWindowTitle("Deposit");
}

deposit::deposit()
    : QDialog(nullptr)
{
    ui->setupUi(this);
}

deposit::~deposit()
{
    delete ui;
}

void deposit::on_btnArrowBackD_clicked()
{
    hide();
    bankOptions bankoptions(userFileName);
    bankoptions.setModal(true);
    bankoptions.exec();
}

void deposit::on_btnSignUp_clicked()
{
    QString depositAmount = ui->inpDeposit->text();

    QMessageBox msg(this);
    msg.setStyleSheet("background-color: white");

    QFile file(userFileName);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);

        QString fullName = stream.readLine();
        QString password = stream.readLine();
        QString balance = stream.readLine();

        file.close();

        bool balanceOk, depositOk;
        int currentBalance = balance.toInt(&balanceOk);
        int deposit = depositAmount.toInt(&depositOk);

        if (!balanceOk || !depositOk) {
            msg.warning(this, "Error", "<font color=\"White\">Invalid balance or deposit amount!");
            // QMessageBox::warning(this, "Error", "Invalid balance or deposit amount!");
            return;
        }

        int newBalance = currentBalance + deposit;

        if (file.open(QIODevice::WriteOnly)) {
            QTextStream writeStream(&file);

            writeStream << fullName << "\n";
            writeStream << password << "\n";
            writeStream << QString::number(newBalance) << "\n";

            file.close();

            // msg.about(this, "Current Balance", "<font color=\"White\">" + fullName + "<font color=\"White\">, your current balance \nis $ " + balance + "<font color=\"White\">");
            msg.about(this, "After Deposit", "<font color=\"White\">" + fullName + "<font color=\"White\">, you deposited $" + "<font color=\"White\">" + depositAmount + "\n""Your current balance is $" + "<font color=\"White\">" + QString::number(newBalance));

        } else {
            msg.warning(this, "Error", "<font color=\"White\">Unable to update file.");
        }
    } else {
        // QMessageBox::warning(this, "Error", "<font color=\"White\">Unable to open user file.");
        msg.warning(this, "Error", "<font color=\"White\">Unable to open user file.");
    }

    ui->inpDeposit->clear();
}
