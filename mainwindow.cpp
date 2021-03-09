#include "mainwindow.h"
    #include "ui_mainwindow.h"
    #include<QMessageBox>
    #include<QDebug>
    #include<QtCore>
    #include<QtGui>

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

void MainWindow::on_pushButton_clicked()
{
    QMessageBox :: information(this,"Ramya","This is the information box");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox:: StandardButton reply;

            reply=QMessageBox:: question(this,"Ramya","Do you like cats?",
                                   QMessageBox::Yes | QMessageBox::No);
            if(reply==QMessageBox::Yes)
               {
                QMessageBox::information(this,"Ramya","You love cats");
            }
            else
            {
                QMessageBox::information(this,"Ramya","You don't love cats");
            }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::warning(this,"Ramya","This is a warning message");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox:: StandardButton reply;

            reply=QMessageBox:: question(this,"Ramya","Do you like cats?",
                                   QMessageBox::Yes | QMessageBox::No |QMessageBox::YesToAll|QMessageBox::NoToAll);
            if(reply==QMessageBox::Yes)
               {
                QMessageBox::information(this,"Ramya","You love cats");
            }
            if(reply==QMessageBox::YesToAll)
            {
                QMessageBox::information(this,"Ramya","Yeah i love them all");
            }
            else
            {
                QMessageBox::information(this,"Ramya","You don't love cats");
            }
}
