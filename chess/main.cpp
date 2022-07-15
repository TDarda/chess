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
dlaczego co kttoras kompilacja znika mi pionek albo kilka pionkow?*/
