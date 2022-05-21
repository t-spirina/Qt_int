#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calcBtn_clicked();



    void on_clearBtn_clicked();

    void on_CalcBtnTask2_clicked();

    void on_ClearBtnTask2_clicked();

    void on_DegreeRdBtn_clicked();

    void on_RadianRdBtn_clicked();

    void on_AddBtn_clicked();

    void on_ChngBtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_HtmlBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
