#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui {
class mainMenu; }
QT_END_NAMESPACE

class mainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainMenu(QWidget *parent = nullptr);
    ~mainMenu();

private slots:

    void on_btnSignUpMM_clicked();

    void on_btnLoginMM_clicked();

    void on_btnExitMM_clicked();

private:
    Ui::mainMenu *ui;
};

#endif // MAINMENU_H
