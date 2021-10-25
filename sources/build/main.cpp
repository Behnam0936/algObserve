#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //what the application will do =>
    /*w.addColumn(3);
    w.addColumn(7);
    w.addColumn(5);
    w.addColumn(9);
    w.addColumn(20);
    w.addColumn(1);
    w.addColumn(13);*/

    w.drawColumns();

    return a.exec();
}


