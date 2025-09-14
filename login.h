#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_btnCreateAccount_clicked();

    void on_btnExit_clicked();

    void on_btnLogin_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // LOGIN_H
