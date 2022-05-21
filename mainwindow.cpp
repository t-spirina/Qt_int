#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmath.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calcBtn_clicked()
{
    qint32 valA = 0;
    qint32 valB = 0;
    qint32 valC = 0;

    valA = ui->aValue->text().toInt();
    valB = ui->bValue->text().toInt();
    valC = ui->cValue->text().toInt();
    if ((valA == 0) && (valB != 0)){
        ui->ResultLable->setText( "x = "+ QString::number((-valC*1.0)/valB));
    }
    else{
        qint32 D = pow(valB,2)-4*valA*valC;
        if (D < 0){
            ui->ResultLable->setText(" no solutions");
        }
        else if(D==0)
        {
            ui->ResultLable->setText("x= "+ QString::number(-valB/(2*valA)));
        }
        else
            ui->ResultLable->setText("x1 = " + QString::number((-valB+sqrt(D))/(2*valA))+
                                    ", x2 = "+ QString::number((-valB-sqrt(D))/(2*valA)));
    }
    return;
}



void MainWindow::on_clearBtn_clicked()
{
    ui->aValue->clear();
    ui->bValue->clear();
    ui->cValue->clear();
    ui->ResultLable->clear();
}

void MainWindow::on_CalcBtnTask2_clicked()
{
    qint32 valA = 0;
    qint32 valB = 0;
    qint32 valC = 0;
    qint32 valAngl = 0;
    valA = ui->aSideValue->text().toInt();
    valB = ui->bSideValue->text().toInt();
    valAngl = ui->AngleValue->text().toInt();
    if(ui->DegreeRdBtn->isChecked())
        valC = sqrt(pow(valA,2) + pow(valB,2) - 2*valA*valB*cos(valAngl));
    else if(ui->RadianRdBtn->isChecked())
        valC = sqrt(pow(valA,2) + pow(valB,2) - 2*valA*valB*cos((valAngl*180)/M_PI));
    ui->resultLableTask2->setText(QString::number(valC));
}

void MainWindow::on_ClearBtnTask2_clicked()
{
    ui->aSideValue->clear();
    ui->bSideValue->clear();
    ui->AngleValue->clear();
    ui->resultLableTask2->clear();
    ui->RadianRdBtn->setChecked(false);
    ui->DegreeRdBtn->setChecked(true);

}

void MainWindow::on_DegreeRdBtn_clicked()
{
    ui->RadianRdBtn->setChecked(false);
    ui->DegreeRdBtn->setChecked(true);
}

void MainWindow::on_RadianRdBtn_clicked()
{
    ui->DegreeRdBtn->setChecked(false);
    ui->RadianRdBtn->setChecked(true);
}

void MainWindow::on_AddBtn_clicked()
{
   ui->ScndPlainTxtEd->appendPlainText(ui->FrstPlainTxtEd->toPlainText());
}

void MainWindow::on_ChngBtn_clicked()
{
    ui->FrstPlainTxtEd->setPlainText(ui->ScndPlainTxtEd->toPlainText());
}

void MainWindow::on_pushButton_clicked()
{
    ui->FrstPlainTxtEd->clear();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->ScndPlainTxtEd->clear();
}

void MainWindow::on_HtmlBtn_clicked()
{
    //добавит текст красного цвета
    ui->ScndPlainTxtEd->appendHtml("<font color='red'>Hello</font>");
    //добавит код html
    //ui->ScndPlainTxtEd->setPlainText("<font color='red'>Hello</font>");
}
