#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    ui->textBrowser->setStyleSheet("border:none");
}

about::~about()
{
    delete ui;
}
