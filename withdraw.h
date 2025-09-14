#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>
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
class withdraw;
}

class withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit withdraw(QString fileName, QWidget *parent = nullptr);
    ~withdraw();
    explicit withdraw();

private slots:
    void on_btnArrowBackW_clicked();

    void on_btnConfrimW_clicked();

private:
    Ui::withdraw *ui;
    QString userFileName;
};

#endif // WITHDRAW_H
