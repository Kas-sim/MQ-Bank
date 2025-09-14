#include "mainmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    a.setStyleSheet("QMessageBox { background-color: white; color: black; }");
    mainMenu w;
    w.show();
    return a.exec();
}
