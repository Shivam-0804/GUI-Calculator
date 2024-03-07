#include "complex.h"
#include "ui_complex.h"
#include "standard.h"
#include "functions.h"
#include <QApplication>
#include <stack>
#include<complex>
#include<cmath>
#include <QFile>
#include <QTextStream>
#include <QDebug>
using namespace std;

extern bool dark,bright;
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    if(dark)
    {

        ui->lineEdit->setAlignment(Qt::AlignRight);
        ui->label->setAlignment(Qt::AlignRight);
        ui->button_minus->setIcon(QIcon(":/images/dark_icon/minus.ico"));
        ui->button_plus->setIcon(QIcon(":/images/dark_icon/plus.ico"));
        ui->button_mul->setIcon(QIcon(":/images/dark_icon/multiplication.ico"));
        ui->button_root->setIcon(QIcon(":/images/dark_icon/root.ico"));
        ui->button_divide->setIcon(QIcon(":/images/dark_icon/divide.ico"));
        ui->button_clear_2->setIcon(QIcon(":/images/dark_icon/backspace.ico"));
        ui->button_equal->setIcon(QIcon(":/images/dark_icon/equal.ico"));
        ui->button_decimal->setIcon(QIcon(":/images/dark_icon/dot.ico"));
        ui->actionCOMPLEX->setIcon(QIcon(":/images/dark_icon/iota.ico"));
        ui->actionSTANDARD->setIcon(QIcon(":/images/dark_icon/complex.ico"));
        ui->actionQUADRATIC->setIcon(QIcon(":/images/dark_icon/quadractic.ico"));
        ui->actionEXIT->setIcon(QIcon(":/images/dark_icon/multiplication.ico"));
        ui->actionABOUT->setIcon(QIcon(":/images/dark_icon/about.ico"));
        ui->actionLOG_TRIGO->setIcon(QIcon(":/images/dark_icon/log.ico"));
        this->setStyleSheet("background-color:rgb(32, 32, 32);color: rgb(255,255,255);");
        ui->button_0->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_1->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_2->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_3->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_4->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_5->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_6->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_7->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_8->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_9->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_decimal->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_dzero->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_clear_2->setStyleSheet("background-color: rgb(59, 60, 63)");
        ui->button_clear->setStyleSheet("background-color: rgb(59, 60, 63)");
        ui->button_power->setStyleSheet("background-color: rgb(59, 60, 63)");
        ui->button_minus->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_plus->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_divide->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_mul->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_exp->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_log->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_iota->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_conjugate->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_normal->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_absolute->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_argument->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    }
    if(bright)
    {
        ui->lineEdit->setAlignment(Qt::AlignRight);
        ui->label->setAlignment(Qt::AlignRight);
        this->setStyleSheet("background-color: rgb(243, 243, 243);color: rgb(0,0,0)");
        ui->button_minus->setIcon(QIcon(":/images/icons/minus.ico"));
        ui->button_plus->setIcon(QIcon(":/images/icons/plus.ico"));
        ui->button_mul->setIcon(QIcon(":/images/icons/multiplication.ico"));
        ui->button_root->setIcon(QIcon(":/images/icons/root.ico"));
        ui->button_divide->setIcon(QIcon(":/images/icons/divided.ico"));
        ui->button_clear_2->setIcon(QIcon(":/images/icons/cancel.ico"));
        ui->button_equal->setIcon(QIcon(":/images/icons/equal.ico"));
        ui->button_decimal->setIcon(QIcon(":/images/icons/full-stop.ico"));
        ui->actionCOMPLEX->setIcon(QIcon(":/images/icons/iota.ico"));
        ui->actionSTANDARD->setIcon(QIcon(":/images/icons/simple.ico"));
        ui->actionQUADRATIC->setIcon(QIcon(":/images/icons/quadratic.ico"));
        ui->actionEXIT->setIcon(QIcon(":/images/icons/multiplication.ico"));
        ui->actionABOUT->setIcon(QIcon(":/images/icons/about.ico"));
        ui->actionLOG_TRIGO->setIcon(QIcon(":/images/icons/logarithm.ico"));
        ui->button_0->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_1->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_2->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_3->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_4->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_5->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_6->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_7->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_8->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_9->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_decimal->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_dzero->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_clear_2->setStyleSheet("background-color:rgb(246, 246, 246)");
        ui->button_minus->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_plus->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_root->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_divide->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_mul->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_exp->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_log->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_root->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_iota->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_conjugate->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_normal->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_clear->setStyleSheet("background-color: rgb(246, 246, 246)");
        ui->button_power->setStyleSheet("background-color: rgb(246, 246, 246)");
        ui->button_argument->setStyleSheet("background-color: rgb(246, 246, 246)");
}
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_actionBRIGHT_triggered()
{
    bright=true;
    ui->lineEdit->setAlignment(Qt::AlignRight);
    ui->label->setAlignment(Qt::AlignRight);
    this->setStyleSheet("background-color: rgb(243, 243, 243);color: rgb(0,0,0)");
    ui->button_minus->setIcon(QIcon(":/images/icons/minus.ico"));
    ui->button_plus->setIcon(QIcon(":/images/icons/plus.ico"));
    ui->button_mul->setIcon(QIcon(":/images/icons/multiplication.ico"));
    ui->button_root->setIcon(QIcon(":/images/icons/root.ico"));
    ui->button_divide->setIcon(QIcon(":/images/icons/divided.ico"));
    ui->button_clear_2->setIcon(QIcon(":/images/icons/cancel.ico"));
    ui->button_equal->setIcon(QIcon(":/images/icons/equal.ico"));
    ui->button_decimal->setIcon(QIcon(":/images/icons/full-stop.ico"));
    ui->actionCOMPLEX->setIcon(QIcon(":/images/icons/iota.ico"));
    ui->actionSTANDARD->setIcon(QIcon(":/images/icons/simple.ico"));
    ui->actionQUADRATIC->setIcon(QIcon(":/images/icons/quadratic.ico"));
    ui->actionEXIT->setIcon(QIcon(":/images/icons/multiplication.ico"));
    ui->actionABOUT->setIcon(QIcon(":/images/icons/about.ico"));
    ui->actionLOG_TRIGO->setIcon(QIcon(":/images/icons/logarithm.ico"));
    ui->button_0->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_1->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_2->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_3->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_4->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_5->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_6->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_7->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_8->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_9->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_decimal->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_dzero->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_clear_2->setStyleSheet("background-color:rgb(246, 246, 246)");
    ui->button_minus->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_plus->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_root->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_divide->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_mul->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_exp->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_log->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_root->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_iota->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_conjugate->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_normal->setStyleSheet(("background-color:rgb(246, 246, 246)"));
    ui->button_clear->setStyleSheet("background-color: rgb(246, 246, 246)");
    ui->button_power->setStyleSheet("background-color: rgb(246, 246, 246)");
    ui->button_absolute->setStyleSheet(("background-color: rgb(246, 246, 246)"));
    ui->button_argument->setStyleSheet("background-color: rgb(246, 246, 246)");
    dark=false;
}

void MainWindow2::on_actionDARK_triggered()
{
    dark=true;
    ui->lineEdit->setAlignment(Qt::AlignRight);
    ui->label->setAlignment(Qt::AlignRight);
    ui->button_minus->setIcon(QIcon(":/images/dark_icon/minus.ico"));
    ui->button_plus->setIcon(QIcon(":/images/dark_icon/plus.ico"));
    ui->button_mul->setIcon(QIcon(":/images/dark_icon/multiplication.ico"));
    ui->button_root->setIcon(QIcon(":/images/dark_icon/root.ico"));
    ui->button_divide->setIcon(QIcon(":/images/dark_icon/divide.ico"));
    ui->button_clear_2->setIcon(QIcon(":/images/dark_icon/backspace.ico"));
    ui->button_equal->setIcon(QIcon(":/images/dark_icon/equal.ico"));
    ui->button_decimal->setIcon(QIcon(":/images/dark_icon/dot.ico"));
    ui->actionCOMPLEX->setIcon(QIcon(":/images/dark_icon/iota.ico"));
    ui->actionSTANDARD->setIcon(QIcon(":/images/dark_icon/complex.ico"));
    ui->actionQUADRATIC->setIcon(QIcon(":/images/dark_icon/quadractic.ico"));
    ui->actionEXIT->setIcon(QIcon(":/images/dark_icon/multiplication.ico"));
    ui->actionABOUT->setIcon(QIcon(":/images/dark_icon/about.ico"));
    ui->actionLOG_TRIGO->setIcon(QIcon(":/images/dark_icon/log.ico"));
    this->setStyleSheet("background-color:rgb(32, 32, 32);color: rgb(255,255,255);");
    ui->button_0->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_1->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_2->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_3->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_4->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_5->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_6->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_7->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_8->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_9->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_decimal->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_dzero->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_clear_2->setStyleSheet("background-color: rgb(59, 60, 63)");
    ui->button_clear->setStyleSheet("background-color: rgb(59, 60, 63)");
    ui->button_power->setStyleSheet("background-color: rgb(59, 60, 63)");
    ui->button_minus->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_plus->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_divide->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_mul->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_exp->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_log->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_iota->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_conjugate->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_normal->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_absolute->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_argument->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    bright=false;
}


////////////////////////////////////////////
////switching between different pages...
QString value2=" ",temp2=" ";
string num1,num2;
bool imaginary=false,sum=false,sub=false,mul=false,division=false,
npower=false,ln=false,arg_value=false,exp_bool=false,absolute=false,norm_bool=false;

void MainWindow2::on_actionSTANDARD_triggered()
{
    hide();
    standard = new MainWindow(this);
    standard->show();
}



void MainWindow2::on_actionLOG_TRIGO_triggered()
{
    hide();
    log=new MainWindow4(this);
    log->show();
}


void MainWindow2::on_actionABOUT_triggered()
{
    abt=new about(this);
    abt->show();
}

void MainWindow2::on_actionRECORD_triggered()
{
    rec=new record(this);
    rec->show();
}

///file handling
///
void MainWindow2::fileEdit(QString a, QString b)
{
    QFile file("C:\\Users\\shiva\\Desktop\\sdf_project\\Calculator\\calrecord.txt");
    if(!file.open(QIODevice::Append))
    {
        qDebug()<<"File open Failed";
    }
    else
    {
        qDebug()<<"file opened";
    }
    QTextStream out(&file);
    out<<"\n"<<a<<b<<"\n";

    file.flush();
    file.close();
}
/////////////////////////////////////////////
/// \brief MainWindow2::on_actionEXIT_triggered
///quit application////
void MainWindow2::on_actionEXIT_triggered()
{
    QApplication::quit();
}

void MainWindow2::on_button_0_clicked()
{
    value2=value2+"0";
    temp2=temp2+"0";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_1_clicked()
{
    value2=value2+"1";
    temp2=temp2+"1";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_2_clicked()
{
    value2=value2+"2";
    temp2=temp2+"2";
    ui->lineEdit->setText(temp2);

}


void MainWindow2::on_button_3_clicked()
{
    value2=value2+"3";
    temp2=temp2+"3";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_4_clicked()
{
    value2=value2+"4";
    temp2=temp2+"4";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_5_clicked()
{
    value2=value2+"5";
    temp2=temp2+"5";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_6_clicked()
{
    value2=value2+"6";
    temp2=temp2+"6";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_7_clicked()
{
    value2=value2+"7";
    temp2=temp2+"7";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_8_clicked()
{
    value2=value2+"8";
    temp2=temp2+"8";
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_9_clicked()
{
    value2=value2+"9";
    temp2=temp2+"9";
    ui->lineEdit->setText(temp2);
}

void MainWindow2::on_button_decimal_clicked()
{
    temp2=temp2+".";
    value2=value2+".";
    ui->lineEdit->setText(temp2);
}
void MainWindow2::on_button_dzero_clicked()
{
    temp2=temp2+"00";
    value2=value2+"00";
    ui->lineEdit->setText(temp2);
}
/////complex class function
///
///
class complexCal
{
protected:
    stack<float> values;
    float reall, img;

public:
    void Read(string str)
    {
        int i = 0, sign = 1;
        while (i < str.length() )
        {
            float val1 = 0;
            if (str[i] == '-')
            {
                sign = -1;
                i++;
            }
            if (isdigit(str[i]))
            {
                while (i < str.length() && isdigit(str[i]))
                {
                    val1 = (val1 * 10) + (str[i] - '0');
                    i++;
                }
                if (i < str.length() && str[i] == '.')
                {
                    i++;
                    float decimal = 0.1;
                    while (i < str.length() && isdigit(str[i]))
                    {
                        val1 += decimal * (str[i] - '0');
                        decimal *= 0.1;
                        i++;
                    }
                }
                values.push(val1 * sign);
            }
            else
            {
                i++;
            }
        }
        img = values.top();
        values.pop();
        reall = values.top();
        values.pop();
    }
    complexCal operator+(complexCal other)
    {
        complexCal temp;
        temp.reall=reall+other.reall;
        temp.img=img+other.img;
        return temp;
    }
    complexCal operator-(complexCal other)
    {
        complexCal temp;
        temp.reall=reall-other.reall;
        temp.img=img-other.img;
        return temp;
    }
    complexCal operator*(complexCal other)
    {
        complexCal temp;
        temp.reall=(reall*other.reall)+(-1*(img*other.img));
        temp.img=(img*other.reall)+(reall*other.img);
         return temp;
    }
    complexCal operator~()
    {
        complexCal temp;
        temp.reall=reall;
        temp.img=-1*img;
        return temp;
    }
    complexCal operator /(complexCal other)
    {
        complexCal obj,temp,num,deno;
        obj= ~other;
        num=(*this)*obj;
        deno=other * obj;
        temp.reall=num.reall/deno.reall;
        temp.img=num.img/deno.reall;
        return temp;
    }
    complexCal root()
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=sqrt(in);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    complexCal power(int n)
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=pow(in,n);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    complexCal log_value()
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=log(in);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    complexCal argument()
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=arg(in);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    complexCal exp_value()
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=exp(in);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    complexCal normal()
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=norm(in);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    complexCal absolute()
    {
        complexCal temp;
        complex <float>in((*this).reall,(*this).img);
        complex<float> ans;
        ans=abs(in);
        temp.reall=real(ans);
        temp.img=imag(ans);
        return temp;
    }
    QString display()
    {
        QString str;
        if(img>=0)
        str=QString::number(reall)+'+'+QString::number(img)+'i';
        else if(img<0)
        str=QString::number(reall)+QString::number(img)+'i';
        return str;
    }

}c1,c2,temp;

void MainWindow2::on_button_iota_clicked()
{
    imaginary=true;
    temp2=temp2+'i';
    value2=value2+'i';
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_plus_clicked()
{
    if(imaginary)
    {
        sum=true;
        num1=value2.toStdString();
        value2=" ";
    }
    else
    value2=value2+'+';
    temp2+='+';
    imaginary=false;
    ui->lineEdit->setText(temp2);
}

void MainWindow2::on_button_minus_clicked()
{
    if(imaginary)
    {
        sub=true;
        num1=value2.toStdString();
        value2=" ";
    }
    else
    value2=value2+'-';
    temp2+='-';
    imaginary=false;
    ui->lineEdit->setText(temp2);
}
void MainWindow2::on_button_mul_clicked()
{
    if(imaginary)
    {
        mul=true;
        num1=value2.toStdString();
        value2=" ";
    }
    else
    value2=value2+'*';
    temp2+='*';
    imaginary=false;
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_clear_2_clicked()
{
    value2=value2.remove(value2.length()-1,1);
    temp2=temp2.remove(temp2.length()-1,1);
    ui->lineEdit->setText(temp2);
}

void MainWindow2::on_button_clear_clicked()
{
    value2=" ";
    temp2=" ";
    ui->lineEdit->setText(temp2);
    imaginary=false;
    sum=false,sub=false,mul=false,division=false,npower=false,ln=false,arg_value=false;
}
void MainWindow2::on_button_divide_clicked()
{
    if(imaginary)
    {
        mul=true;
        num1=value2.toStdString();
        value2=" ";
    }
    else
    value2=value2+'/';
    temp2+='/';
    imaginary=false;
    ui->lineEdit->setText(temp2);
}
void MainWindow2::on_button_conjugate_clicked()
{
    c1.Read(value2.toStdString());
    temp=~c1;
    temp2=temp2+"=";
    ui->lineEdit->setText(temp.display());
    fileEdit(temp2,temp.display());
    temp2=temp.display();
    imaginary=true;
}


void MainWindow2::on_button_root_clicked()
{
    c1.Read(value2.toStdString());
    temp=c1.root();
    temp2=temp2+"=";
    ui->lineEdit->setText(temp.display());
    fileEdit(temp2,temp.display());
    temp2=temp.display();
    value2=temp.display();
    imaginary=true;
}


void MainWindow2::on_button_power_clicked()
{
    temp2=temp2+"^";
    if(imaginary)
    {
        npower=true;
        num1=value2.toStdString();
        value2=" ";
    }
    ui->lineEdit->setText(temp2);
    imaginary=false;
}

void MainWindow2::on_button_log_clicked()
{
    temp2=temp2+"log(";
    ln=true;
    ui->lineEdit->setText(temp2);
    num1=" ";
}

void MainWindow2::on_button_argument_clicked()
{
    temp2=temp2+"arg(";
    arg_value=true;
    ui->lineEdit->setText(temp2);
}
void MainWindow2::on_button_absolute_clicked()
{
    temp2=temp2+"abs(";
    absolute=true;
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_normal_clicked()
{
    temp2=temp2+"norm(";
    norm_bool=true;
    ui->lineEdit->setText(temp2);
}


void MainWindow2::on_button_exp_clicked()
{
    temp2=temp2+"exp(";
    exp_bool=true;
    ui->lineEdit->setText(temp2);
}

void MainWindow2::on_button_equal_clicked()
{
    temp2=temp2+")=";
    num2=value2.toStdString();
    if(sum)
    {
        c1.Read(num1);
        c2.Read(num2);
        temp=c1+c2;

    }
    if(sub)
    {
        c1.Read(num1);
        c2.Read(num2);
        temp=c1-c2;

    }
    if(mul)
    {
        c1.Read(num1);
        c2.Read(num2);
        temp=c1*c2;

    }
    if(division)
    {
        c1.Read(num1);
        c2.Read(num2);
        temp=c1/c2;

    }
    if(npower)
    {
        c1.Read(num1);
        int val=value2.toInt();
        temp=c1.power(val);

    }
    if(ln)
    {
        c2.Read(num2);
        temp=c2.log_value();
    }
    if(arg_value)
    {
        c2.Read(num2);
        temp=c2.argument();
    }
    if(exp_bool)
    {
        c2.Read(num2);
        temp=c2.exp_value();
    }
    if(absolute)
    {
        c2.Read(num2);
        temp=c2.absolute();
    }
    if(norm_bool)
    {
        c2.Read(num2);
        temp=c2.normal();
    }

    fileEdit(temp2,temp.display());
    ui->lineEdit->setText(temp.display());
    temp2=temp.display();
    value2=temp.display();
    imaginary=true;
    sum=false,sub=false,mul=false,division=false,npower=false,ln=false,arg_value=false,exp_bool=false,absolute=false,norm_bool=false;
}



