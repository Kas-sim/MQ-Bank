#ifndef BANKOPTIONS_H
#define BANKOPTIONS_H

#include <QDialog>
#include <registration.h>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>

namespace Ui {
class bankOptions;
}

class bankOptions : public QDialog
{
    Q_OBJECT

public:
    explicit bankOptions(QString fileName, QWidget *parent = nullptr);
    ~bankOptions();
    explicit bankOptions();

private slots:


    void on_btnLogOut_clicked();

    void on_btnDeposit_clicked();

    void on_btnWithdraw_clicked();

    void on_btnCurrentBalance_clicked();

private:
    Ui::bankOptions *ui;
    QString userFileName;

};

#endif // BANKOPTIONS_H
