//---------------------------------------------------------------------------------------------------------
//Developed by Mo Chabuk                                                                                  -
//This code is not final and was created in a short period of time. still needs more optimization and work-
//For any suggestions please don't hesitate to contact me dev@nulltechs.com                               -
//---------------------------------------------------------------------------------------------------------
#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
