#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QDialog>
#include <QMessageBox>
#include <QMainWindow>
#include <bankoptions.h>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>

namespace Ui {
class deposit;
}

class deposit : public QDialog
{
    Q_OBJECT

public:
    explicit deposit(QString fileName, QWidget *parent = nullptr);
    ~deposit();
    explicit deposit();

private slots:
    void on_btnArrowBackD_clicked();

    void on_btnSignUp_clicked();

private:
    Ui::deposit *ui;
    QString userFileName;
};

#endif // DEPOSIT_H
