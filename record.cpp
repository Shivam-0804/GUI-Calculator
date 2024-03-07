#include "record.h"
#include "ui_record.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>

record::record(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::record)
{
    ui->setupUi(this);
    ui->textBox->setStyleSheet("border:none;font-size: 20px;");
    QFile file("C:\\Users\\shiva\\Desktop\\sdf_project\\Calculator\\calrecord.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"info",file.errorString());
    }
    else
    {
        qDebug()<<"file opened";
    }
    QTextStream in(&file);
    ui->textBox->setText(in.readAll());


    file.close();
}

record::~record()
{
    delete ui;
}


void record::on_buttonBox_rejected()
{
    QFile file("C:\\Users\\shiva\\Desktop\\sdf_project\\Calculator\\calrecord.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out<<" ";
}

