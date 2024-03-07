#include "functions.h"
#include "ui_functions.h"
#include "standard.h"
#include "complex.h"
#include <math.h>
#include <string.h>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
using namespace std;
extern bool dark,bright;

MainWindow4::MainWindow4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow4)
{
    ui->setupUi(this);
    if(dark)
    {
        ui->lineEdit->setAlignment(Qt::AlignRight);
        ui->label->setAlignment(Qt::AlignRight);
        ui->button_equal->setIcon(QIcon(":/images/dark_icon/equal.ico"));
        ui->button_pi->setIcon(QIcon(":/images/dark_icon/pi.ico"));
        ui->button_clear_2->setIcon(QIcon(":/images/dark_icon/backspace.ico"));
        ui->actionCOMPLEX->setIcon(QIcon(":/images/dark_icon/iota.ico"));
        ui->actionSTANDARD->setIcon(QIcon(":/images/dark_icon/complex.ico"));
        ui->actionQUADRATIC->setIcon(QIcon(":/images/dark_icon/quadractic.ico"));
        ui->actionEXIT->setIcon(QIcon(":/images/dark_icon/multiplication.ico"));
        ui->actionABOUT->setIcon(QIcon(":/images/dark_icon/about.ico"));
        ui->actionLOG_TRIGO->setIcon(QIcon(":/images/dark_icon/log.ico"));
        ui->lineEdit->setStyleSheet("border:none; background-color:rgb(32, 32, 32);font-size:30px");
        ui->button_dot->setIcon(QIcon(":/images/dark_icon/dot.ico"));
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
        ui->button_dot->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_pm->setStyleSheet("background-color:rgb(50, 50, 50)");
        ui->button_clear_2->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_pi->setStyleSheet(" background-color: rgb(59, 60, 63;font-size:15px)");
        ui->button_tanin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_sinin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_cosin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_sinh->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_cosh->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_tanh->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_expo_2->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_expo_3->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_clear->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_radian->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_deg->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_tan->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_cos->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_sin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_factorial->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_log->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
        ui->button_nlog->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    }
    if(bright){
        ui->lineEdit->setAlignment(Qt::AlignRight);
        ui->label->setAlignment(Qt::AlignRight);
        ui->button_clear_2->setIcon(QIcon(":/images/icons/cancel.ico"));
        ui->button_equal->setIcon(QIcon(":/images/icons/equal.ico"));
        ui->button_dot->setIcon(QIcon(":/images/icons/full-stop.ico"));
        ui->actionCOMPLEX->setIcon(QIcon(":/images/icons/iota.ico"));
        ui->actionSTANDARD->setIcon(QIcon(":/images/icons/simple.ico"));
        ui->actionQUADRATIC->setIcon(QIcon(":/images/icons/quadratic.ico"));
        ui->actionEXIT->setIcon(QIcon(":/images/icons/multiplication.ico"));
        ui->actionABOUT->setIcon(QIcon(":/images/icons/about.ico"));
        ui->button_pi->setIcon(QIcon(":/images/icons/pi.ico"));
        ui->actionLOG_TRIGO->setIcon(QIcon(":/images/icons/logarithm.ico"));
        ui->lineEdit->setStyleSheet("border:none; background-color:rgb(243, 243, 243);font-size:30px");
        this->setStyleSheet("background-color: rgb(243, 243, 243);color: rgb(0,0,0)");
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
        ui->button_dot->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_pm->setStyleSheet("background-color: rgb(252, 252, 252)");
        ui->button_clear_2->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_pi->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_tanin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_sinin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_cosin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_sinh->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_cosh->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_tanh->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_expo_2->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_expo_3->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_clear->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_radian->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_deg->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_tan->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_cos->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_sin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_factorial->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_log->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
        ui->button_nlog->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    }

}

MainWindow4::~MainWindow4()
{
    delete ui;
}

void MainWindow4::on_actionBRIGHT_triggered()
{
    bright=true;
    ui->lineEdit->setAlignment(Qt::AlignRight);
    ui->label->setAlignment(Qt::AlignRight);
    ui->button_clear_2->setIcon(QIcon(":/images/icons/cancel.ico"));
    ui->button_equal->setIcon(QIcon(":/images/icons/equal.ico"));
    ui->button_dot->setIcon(QIcon(":/images/icons/full-stop.ico"));
    ui->actionCOMPLEX->setIcon(QIcon(":/images/icons/iota.ico"));
    ui->actionSTANDARD->setIcon(QIcon(":/images/icons/simple.ico"));
    ui->actionQUADRATIC->setIcon(QIcon(":/images/icons/quadratic.ico"));
    ui->actionEXIT->setIcon(QIcon(":/images/icons/multiplication.ico"));
    ui->actionABOUT->setIcon(QIcon(":/images/icons/about.ico"));
    ui->button_pi->setIcon(QIcon(":/images/icons/pi.ico"));
    ui->actionLOG_TRIGO->setIcon(QIcon(":/images/icons/logarithm.ico"));
    ui->lineEdit->setStyleSheet("border:none; background-color:rgb(243, 243, 243);font-size:30px");
    this->setStyleSheet("background-color: rgb(243, 243, 243);color: rgb(0,0,0)");
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
    ui->button_dot->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_pm->setStyleSheet("background-color: rgb(252, 252, 252)");
    ui->button_clear_2->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_pi->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_tanin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_sinin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_cosin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_sinh->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_cosh->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_tanh->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_expo_2->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_expo_3->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_clear->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_radian->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_deg->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_tan->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_cos->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_sin->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_factorial->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_log->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    ui->button_nlog->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px");
    dark=false;
}


void MainWindow4::on_actionDARK_triggered()
{
    dark=true;
    ui->lineEdit->setAlignment(Qt::AlignRight);
    ui->label->setAlignment(Qt::AlignRight);
    ui->button_equal->setIcon(QIcon(":/images/dark_icon/equal.ico"));
    ui->button_pi->setIcon(QIcon(":/images/dark_icon/pi.ico"));
    ui->button_clear_2->setIcon(QIcon(":/images/dark_icon/backspace.ico"));
    ui->actionCOMPLEX->setIcon(QIcon(":/images/dark_icon/iota.ico"));
    ui->actionSTANDARD->setIcon(QIcon(":/images/dark_icon/complex.ico"));
    ui->actionQUADRATIC->setIcon(QIcon(":/images/dark_icon/quadractic.ico"));
    ui->actionEXIT->setIcon(QIcon(":/images/dark_icon/multiplication.ico"));
    ui->actionABOUT->setIcon(QIcon(":/images/dark_icon/about.ico"));
    ui->actionLOG_TRIGO->setIcon(QIcon(":/images/dark_icon/log.ico"));
    ui->lineEdit->setStyleSheet("border:none; background-color:rgb(32, 32, 32);font-size:30px");
    ui->button_dot->setIcon(QIcon(":/images/dark_icon/dot.ico"));
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
    ui->button_dot->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_pm->setStyleSheet("background-color:rgb(50, 50, 50)");
    ui->button_clear_2->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_pi->setStyleSheet(" background-color: rgb(59, 60, 63;font-size:15px)");
    ui->button_tanin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_sinin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_cosin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_sinh->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_cosh->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_tanh->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_expo_2->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_expo_3->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_clear->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_radian->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_deg->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_tan->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_cos->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_sin->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_factorial->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_log->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    ui->button_nlog->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px");
    bright=false;
}

////////////////////////////////////////////
////switching between different pages...
void MainWindow4::on_actionSTANDARD_triggered()
{
    hide();
    standard= new MainWindow(this);
    standard->show();
}


void MainWindow4::on_actionCOMPLEX_triggered()
{
    hide();
    complex = new MainWindow2(this);
    complex->show();
}

void MainWindow4::on_actionABOUT_triggered()
{
    abt=new about(this);
    abt->show();
}


void MainWindow4::on_actionRECORD_triggered()
{

    rec=new record(this);
    rec->show();

}
/////////////////////////////////////////////
/// \brief MainWindow2::on_actionEXIT_triggered
///quit application////

void MainWindow4::on_actionEXIT_triggered()
{
    QApplication::quit();
}


QString value4=" ",temp4=" ";
double tempValue;
bool tanbool=false,cosbool=false,fact=false,
sinbool=false,logbool=false,inverse=false,lnbool=false,
hyperbolic=false,trigo=false,exponent=false,conversion=true;



///////////////////
/// \brief The function_class class
///class for log and trigo funtions.....
///

class function_class{
private:
    double total;
public:
    function_class(QString value,bool conversion)
    {
        if(conversion)
        total=value.toDouble();
        else if(!conversion)
        total=value.toDouble()*0.01745329;
    }
    double logfuntion();
    double lnfuntion();
    double tanFuntion();
    double sinFuntion();
    double cosFuntion();
    double tanInverse();
    double cosInverse();
    double sinInverse();
    double tanhyper();
    double sinhyper();
    double coshyper();
    double exponential();
    double factorial();
    void reset();
};
double function_class::lnfuntion()
{
    total=log(total);
    return total;
}
double function_class::logfuntion()
{
    total=log10(total);
    return total;
}
double function_class::tanFuntion()
{
    total=tan(total);
    return total;
}
double function_class:: sinFuntion()
{
    total=sin(total);
    return total;
}
double function_class::cosFuntion()
{
    total=cos(total);
    return total;
}
double function_class::cosInverse()
{
    total=acos(total);
    return total;
}
double function_class::sinInverse()
{
    total=asin(total);
    return total;
}
double function_class::tanInverse()
{
    total=atan(total);
    return total;
}
double function_class::tanhyper()
{
    total=tanh(total);
    return total;
}
double function_class::sinhyper()
{
    total=sinh(total);
    return total;
}
double function_class::coshyper()
{
    total=cosh(total);
    return total;
}
double function_class::exponential()
{
    total=exp(total);
    return total;
}
double function_class::factorial()
{
    int i;
    double factorial=1;
    if(total==1||total==0)
    {
        return 1;
    }
    for(i=1;i<=total;i++)
    {
        factorial*=i;
    }
    return factorial;
}
void function_class::reset()
{
    total=0;
}

/////////////////////////////////
///////button functionality code....


void MainWindow4::on_button_0_clicked()
{
    value4=value4+"0";
    temp4=temp4+"0";
    ui->lineEdit->setText(temp4);
}

void MainWindow4::on_button_1_clicked()
{
    value4=value4+"1";
    temp4=temp4+"1";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_2_clicked()
{
    value4=value4+"2";
    temp4=temp4+"2";
    ui->lineEdit->setText(temp4);

}


void MainWindow4::on_button_3_clicked()
{
    value4=value4+"3";
    temp4=temp4+"3";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_4_clicked()
{
    value4=value4+"4";
    temp4=temp4+"4";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_5_clicked()
{
    value4=value4+"5";
    temp4=temp4+"5";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_6_clicked()
{
    value4=value4+"6";
    temp4=temp4+"6";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_7_clicked()
{
    value4=value4+"7";
    temp4=temp4+"7";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_8_clicked()
{
    value4=value4+"8";
    temp4=temp4+"8";
    ui->lineEdit->setText(temp4);
}


void MainWindow4::on_button_9_clicked()
{
    value4=value4+"9";
    temp4=temp4+"9";
    ui->lineEdit->setText(temp4);
}

void MainWindow4::on_button_dot_clicked()
{
    value4=value4+".";
    temp4=temp4+".";
    ui->lineEdit->setText(temp4);
}

void MainWindow4::on_button_sin_clicked()
{
    temp4=temp4+"sin(";
    ui->lineEdit->setText(temp4);
    sinbool=true;
    trigo=true;
}


void MainWindow4::on_button_tan_clicked()
{
    temp4=temp4+"tan(";
    ui->lineEdit->setText(temp4);
    tanbool=true;
    trigo=true;
}


void MainWindow4::on_button_cos_clicked()
{
    temp4=temp4+"cos(";
    ui->lineEdit->setText(temp4);
    cosbool=true;
    trigo=true;
}


void MainWindow4::on_button_radian_clicked()
{
    conversion=true;
    ui->button_radian->setStyleSheet(" background-color: rgb(38, 186, 217)");
    if(dark)
    {
        ui->button_deg->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px;");
    }
    else if(bright)
    {
        ui->button_deg->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px;");
    }
}


void MainWindow4::on_button_deg_clicked()
{
    conversion=false;
    ui->button_deg->setStyleSheet(" background-color: rgb(38, 186, 217)");
    if(dark)
    {
        ui->button_radian->setStyleSheet(" background-color: rgb(59, 60, 63);font-size:15px;");
    }
    else if(bright)
    {
        ui->button_radian->setStyleSheet(" background-color: rgb(252, 252, 252);font-size:15px;");
    }
}


void MainWindow4::on_button_nlog_clicked()
{
    temp4=temp4+"ln(";
    ui->lineEdit->setText(temp4);
    lnbool=true;
}


void MainWindow4::on_button_log_clicked()
{
    temp4=temp4+"log(";
    ui->lineEdit->setText(temp4);
    logbool=true;
}


void MainWindow4::on_button_pi_clicked()
{
    if(value4==" ")
    {
        temp4=temp4+"π";
        value4+="3.141592653589793238462643";
    }
    else
    {
        temp4=temp4+"π";
        tempValue=value4.toDouble();
        tempValue*=3.141592653589793238462643;
        value4=QString::number(tempValue);
    }
    ui->lineEdit->setText(temp4);
    tempValue=0;
}


void MainWindow4::on_button_pm_clicked()
{
    tempValue=value4.toDouble();
    tempValue=-tempValue;
    temp4="-"+temp4;
    ui->lineEdit->setText(temp4);
    value4=QString::number(tempValue);
    tempValue=0;
}


void MainWindow4::on_button_expo_2_clicked()
{
    if(value4==" ")
    {
        temp4=temp4+"e";
        value4+="2.718281828459045235360";
    }
    else
    {
        temp4=temp4+"e";
        tempValue=value4.toDouble();
        tempValue*=2.718281828459045235360;
        value4=QString::number(tempValue);
    }
    ui->lineEdit->setText(temp4);
    tempValue=0;
}


void MainWindow4::on_button_tanin_clicked()
{

    temp4=temp4+"tan-1(";
    ui->lineEdit->setText(temp4);
    tanbool=true;
    inverse=true;
}


void MainWindow4::on_button_sinin_clicked()
{
    temp4=temp4+"sin-1(";
    ui->lineEdit->setText(temp4);
    sinbool=true;
    inverse=true;
}


void MainWindow4::on_button_cosin_clicked()
{
    temp4=temp4+"cos-1(";
    ui->lineEdit->setText(temp4);
    cosbool=true;
    inverse=true;
}


void MainWindow4::on_button_sinh_clicked()
{
    temp4=temp4+"sinh(";
    ui->lineEdit->setText(temp4);
    sinbool=true;
    hyperbolic=true;
}


void MainWindow4::on_button_cosh_clicked()
{

    temp4=temp4+"cosh(";
    ui->lineEdit->setText(temp4);
    cosbool=true;
    hyperbolic=true;
}


void MainWindow4::on_button_tanh_clicked()
{

    temp4=temp4+"tanh(";
    ui->lineEdit->setText(temp4);
    tanbool=true;
    hyperbolic=true;
}

void MainWindow4::on_button_expo_3_clicked()
{
    exponent=true;
    temp4=temp4+"exp(";
    ui->lineEdit->setText(temp4);
}
void MainWindow4::on_button_factorial_clicked()
{
    fact=true;
    temp4=temp4+"!";
    ui->lineEdit->setText(temp4);
}

void MainWindow4::on_button_equal_clicked()
{
    double tempNum=0;
    temp4=temp4+")=";
    ui->label->setText(temp4);
    function_class c(value4,conversion);
    if(logbool)
        tempNum=c.logfuntion();
    if(lnbool)
        tempNum=c.lnfuntion();
    if(exponent)
        tempNum=c.exponential();
    if(fact)
        tempNum=c.factorial();
     if(inverse)
        {
            if(tanbool)
                tempNum=c.tanInverse();
            if(sinbool)
                tempNum=c.sinInverse();
            if(cosbool)
                tempNum=c.cosInverse();
        }
      if(hyperbolic)
        {
            if(tanbool)
                tempNum=c.tanFuntion();
            if(sinbool)
                tempNum=c.sinFuntion();
            if(cosbool)
                tempNum=c.cosFuntion();
        }
      if(trigo)
      {
          if(tanbool)
              tempNum=c.tanFuntion();
          if(sinbool)
              tempNum=c.sinFuntion();
          if(cosbool)
              tempNum=c.cosFuntion();
      }

    c.reset();
    ui->lineEdit->setText(QString::number(tempNum));
    ///file handling
    ///
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
        out<<"\n"<<temp4<<tempNum<<"\n";

    file.flush();
    file.close();
    value4=" ";
    temp4=" ";
    tanbool=false,cosbool=false,sinbool=false,logbool=false,inverse=false,lnbool=false,hyperbolic=false,trigo=false,exponent=false,fact=false;
}

void MainWindow4::on_button_clear_2_clicked()
{
    value4=value4.remove(value4.length()-1,1);
    temp4=temp4.remove(temp4.length()-1,1);
    ui->lineEdit->setText(temp4);
}
void MainWindow4::on_button_clear_clicked()
{

    temp4=" ";
    value4=" ";
    ui->lineEdit->setText(temp4);
    ui->label->setText(temp4);
    tanbool=false,cosbool=false,sinbool=false,logbool=false,inverse=false,lnbool=false,hyperbolic=false,trigo=false,exponent=false,fact=false;
}


