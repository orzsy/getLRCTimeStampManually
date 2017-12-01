#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "help_info.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CNT_Click = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_pressed()
{
    char str[100];

    if(CNT_Click == 0)
    {
        ElapsedTimer.start();
    }
    qint64 ntamp = ElapsedTimer.elapsed();

    int nmin,nSec,nmSec;
    nmin = ntamp / (1000*60);
    nSec = (ntamp % (1000*60)) / 1000;
    nmSec = ntamp % 1000 / 10;

    sprintf(str, "[%02d:%02d.%02d]", nmin, nSec, nmSec);

    QString qstr = QString("").append(str);

    List_TImeStamp.append(qstr);
    qDebug() << "append stamp:" << qstr;
    ui->plainTextEdit->appendPlainText(QString("add Stamp:").append(qstr));
    CNT_Click ++;
}

// generate
void MainWindow::on_pushButton_2_clicked()
{
    QString fullStr;
    qDebug() << "-------------------";
    for(int i = 0; i <  List_TImeStamp.length(); i ++)
    {
        qDebug() << List_TImeStamp.at(i);
        fullStr.append(List_TImeStamp.at(i)).append("\r\n");
    }
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(fullStr);
}

// clear
void MainWindow::on_pushButton_3_clicked()
{
    CNT_Click = 0;
    ElapsedTimer.restart();
    List_TImeStamp.clear();
    ui->plainTextEdit->clear();
}

void MainWindow::on_pushButton_getHelp_clicked()
{
    ui->plainTextEdit->clear();
//    ui->plainTextEdit->setPlainText(helpInfo);
    QString html;
    html = QString("").append(HELP_INFO_HTML);
    ui->plainTextEdit->appendHtml(html);
}
