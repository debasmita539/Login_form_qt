#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString name[]={"Debasmita","Asmita","Gyanasmita"};
    QString password[]={"Debasmita@23","Asmita@45","Gyanasmita@56"};
    QString uName=ui->lineEdit->text();
    QString uPassword=ui->lineEdit_2->text();
    bool found=false;

    for(int i=0;i<name->length();i++)
    {
        if(uName==name[i] && uPassword==password[i])
        {
    QMessageBox::information(this,"welcome","user:"+name[i]+"\n""welcome");

    bool found =true;
    break;
    }
  }
    if(!found)
    {
        QMessageBox::information(this,"error","invalid");
    }



}

void MainWindow::on_checkBox_toggled(bool checked)
{
    if (checked)
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);  // Show password
    else
        ui->lineEdit_2->setEchoMode(QLineEdit::Password); // Hide password
}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(this,"check","Male");
    }
    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(this,"check","Female");
    }
    else
    {
        QMessageBox::information(this,"check","please fill the checkbox");
    }
}

