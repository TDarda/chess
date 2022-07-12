#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

/*co jeszcze zrobic?
zamienic raw pointery na smart pointery moze share_ptr

pointer na square w klasie pieces, wydaje mi sie nie potrzebny*/
