#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("myApp.ico"));

    MainWindow w;
    w.setWindowTitle("LRCʱ����ֶ�ץȡ����");
    w.show();

    return a.exec();
}
