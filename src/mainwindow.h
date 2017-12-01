#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#pragma execution_character_set("utf-8")
#include <QMainWindow>
#include <QElapsedTimer>
#include <QList>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_pressed();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_getHelp_clicked();

private:
    Ui::MainWindow *ui;
    QElapsedTimer ElapsedTimer;
    QList<QString> List_TImeStamp;
    int CNT_Click;
};

#endif // MAINWINDOW_H
