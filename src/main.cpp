#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("myApp.ico"));

    MainWindow w;
    w.setWindowTitle("LRC时间戳手动抓取工具");
    w.show();

    return a.exec();
}
