#include "mainwindow.h"
#include <QApplication>
#include "QTextCodec"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("myApp.ico"));
//    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec *codec = QTextCodec::codecForName("GB2312");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);

    MainWindow w;
    w.setWindowTitle("LRCʱ����ֶ�ץȡ����");
    w.show();

    return a.exec();
}
