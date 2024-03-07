#include "standard.h"
#include "ui_standard.h"
#include <string.h>
#include <stack>
#include <QApplication>
#include <math.h>
#include <QFile>
#include <QTextStream>
#include <QDebug>

using namespace std;
extern bool dark,bright;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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
        ui->button_croot->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_square->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_open->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_close->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_cube->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_fraction->setStyleSheet(("background-color: rgb(59, 60, 63)"));
        ui->button_conversion->setStyleSheet(("background-color: rgb(59, 60, 63)"));
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
        ui->button_croot->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_square->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_root->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_open->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_close->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_cube->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_clear->setStyleSheet("background-color: rgb(246, 246, 246)");
        ui->button_power->setStyleSheet("background-color: rgb(246, 246, 246)");
        ui->button_conversion->setStyleSheet("background-color: rgb(246, 246, 246)");
}
}

MainWindow::~MainWindow()
{
    delete ui;
}


/////////////////////////////////////////////
/// \brief MainWindow::on_actionDARK_triggered
///dark theme ........///
void MainWindow::on_actionDARK_triggered()
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
    ui->button_minus->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_plus->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_divide->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_mul->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_clear->setStyleSheet("background-color: rgb(59, 60, 63)");
    ui->button_power->setStyleSheet("background-color: rgb(59, 60, 63)");
    ui->button_croot->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_square->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_root->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_open->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_close->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_cube->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_fraction->setStyleSheet(("background-color: rgb(59, 60, 63)"));
    ui->button_conversion->setStyleSheet(("background-color: rgb(59, 60, 63)"));
   bright=false;
}

////////////////////////////////////////////////////////////////////////
/// \brief MainWindow::on_actionBRIGHT_triggered
///stylesheet for bright theme......................
void MainWindow::on_actionBRIGHT_triggered()
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
        ui->button_croot->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_square->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_root->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_open->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_close->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_cube->setStyleSheet(("background-color:rgb(246, 246, 246)"));
        ui->button_clear->setStyleSheet("background-color: rgb(246, 246, 246)");
        ui->button_power->setStyleSheet("background-color: rgb(246, 246, 246)");
        ui->button_fraction->setStyleSheet(("background-color: rgb(246, 246, 246)"));
        ui->button_conversion->setStyleSheet("background-color: rgb(246, 246, 246)");
dark =false;
}

////////////////////////////////////////////
////switching between different pages...

void MainWindow::on_actionCOMPLEX_triggered()
{
    hide();
    complex= new MainWindow2(this);
    complex->show();
}

void MainWindow::on_actionLOG_TRIGO_triggered()
{
    hide();
    log=new MainWindow4(this);
    log->show();
}

void MainWindow::on_actionABOUT_triggered()
{
    abt=new about(this);
    abt->show();
}

void MainWindow::on_actionRECORD_triggered()
{
    rec=new record(this);
    rec->show();

}

///////////////////////////////////////////
//variable declaration../////////
QString value=" ",temp=" ";
bool simple=true,sroot=false,croot=false,cube=false,square=false,power=false;

void MainWindow::on_actionEXIT_triggered()
{
    QApplication::quit();
}
////////////////////////////////////////////////
//standard calculator code//
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

float applyOp(float a, float b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0;
    }
}
float evaluate(string tokens)
{
    int i;

    stack<float> values;

    stack<char> ops;
    for (i = 0; i < tokens.length(); i++)
    {

        if (tokens[i] == ' ')
            continue;
        else if (tokens[i] == '(')
        {
            ops.push(tokens[i]);
        }

        else if (isdigit(tokens[i]))
        {
            float val = 0;
            while (i < tokens.length() &&
                   isdigit(tokens[i]))
            {
                val = (val * 10) + (tokens[i] - '0');
                i++;
            }
            if(tokens[i]=='.'){
                            i++;
                            int power=-1;

                            while (i < tokens.length() &&
                                   isdigit(tokens[i]))
                            {
                                val = (val) + (tokens[i] - '0')*pow(10,power);
                                power--;
                                i++;
                            }
                        }
            values.push(val);

            i--;
        }

        else if (tokens[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                float val2 = values.top();
                values.pop();

                float val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            if (!ops.empty())
                ops.pop();
        }

        else
        {

            while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i]))
            {
                float val2 = values.top();
                values.pop();

                float val1 = values.top();
                values.pop();

                float op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            ops.push(tokens[i]);
        }
    }

    while (!ops.empty())
    {
        float val2 = values.top();
        values.pop();

        float val1 = values.top();
        values.pop();

        float op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }
    return values.top();
}
float squareNum(QString value)
{
    float temp;
    temp=value.toFloat();
    temp=temp*temp;
    return temp;
}

float cubeRoot(QString value)
{
    float temp;
    temp=value.toFloat();
    temp=cbrt(temp);
    return temp;
}

float squareRoot(QString value)
{
    float temp;
    temp=value.toFloat();
    temp=sqrt(temp);
    return temp;
}
float cubeNum(QString value)
{
    float temp;
    temp=value.toFloat();
    temp=temp*temp*temp;
    return temp;
}


class Power
{
private:
    float base;
    float exponent;

public:
    void Read(string str)
    {
        int i = 0;
        stack<float> values;
        int decimal_places = 0;
        while (i < str.length())
        {
            if (isdigit(str[i]) || (str[i] == '.'))
            {
                float val = 0;
                while (i < str.length() && (isdigit(str[i]) || str[i] == '.'))
                {
                    if (str[i] == '.')
                    {
                        decimal_places++;
                        i++;
                    }
                    else
                    {
                        val = (val * 10) + (str[i] - '0');
                        i++;
                    }
                }
                values.push(val / pow(10, decimal_places));
            }
            else if (str[i] == '^')
            {
                i++;
                decimal_places=0;
            }
            else
            {
                i++;
            }
        }
        exponent = values.top();
        values.pop();
        base = values.top();
    }

    float PowerNum()
    {
        return pow(base, exponent);
    }
};
///////////////////////////////////////////////
/// decimal to fraction conversion
///

class fraction{
private:
    double input;
    long numerator,denominator;
public:
    fraction(QString fvalue)
    {
        input = fvalue.toDouble();
    }
    long gcd(long a, long b)
    {
        if (a == 0)
            return b;
        else if (b == 0)
            return a;

        if (a < b)
            return gcd(a, b % a);
        else
            return gcd(b, a % b);
    }
    void conversion()
    {
        double integral = floor(input);
        double frac = input - integral;

        const long precision = 1000000000;

        long gcd_ = gcd(round(frac * precision), precision);
        denominator = precision / gcd_;
        numerator = round(frac * precision) / gcd_;
    }
    QString display()
    {
        QString tempString= QString::number(numerator)+"/"+QString::number(denominator);
        return tempString;
    }
};




////////////////////////////////////////
//button functionality//////////


void MainWindow::on_button_0_clicked()
{
    value=value+"0";
    temp=temp+"0";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_dzero_clicked()
{
    value=value+"00";
    temp=temp+"00";
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_1_clicked()
{
    value=value+"1";
    temp=temp+"1";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_2_clicked()
{
    value=value+"2";
    temp=temp+"2";
    ui->lineEdit->setText(temp);

}


void MainWindow::on_button_3_clicked()
{
    value=value+"3";
    temp=temp+"3";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_4_clicked()
{
    value=value+"4";
    temp=temp+"4";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_5_clicked()
{
    value=value+"5";
    temp=temp+"5";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_6_clicked()
{
    value=value+"6";
    temp=temp+"6";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_7_clicked()
{
    value=value+"7";
    temp=temp+"7";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_8_clicked()
{
    value=value+"8";
    temp=temp+"8";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_9_clicked()
{
    value=value+"9";
    temp=temp+"9";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_open_clicked()
{
    value=value+"(";
    temp=temp+"(";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_close_clicked()
{
    value=value+")";
    temp=temp+")";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_divide_clicked()
{
    value=value+"/";
    temp=temp+"/";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_mul_clicked()
{
    value=value+"*";
    temp=temp+"*";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_minus_clicked()
{
    value=value+"-";
    temp=temp+"-";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_plus_clicked()
{
    value=value+"+";
    temp=temp+"+";
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_decimal_clicked()
{
    value=value+".";
    temp=temp+".";
    ui->lineEdit->setText(temp);
}


void MainWindow::on_button_clear_2_clicked()
{
    value=value.remove(value.length()-1,1);
    temp=temp.remove(temp.length()-1,1);
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_square_clicked()
{
    temp=temp+"*"+temp;
    simple=false;
    square=true;
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_croot_clicked()
{
    temp="∛"+temp;
    simple=false;
    croot=true;
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_root_clicked()
{
    temp="√"+temp;
    simple=false;
    sroot=true;
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_cube_clicked()
{
    temp=temp+"*"+temp+"*"+temp;
    simple=false;
    cube=true;
    ui->lineEdit->setText(temp);
}
void MainWindow::on_button_clear_clicked()
{
    temp=" ";
    value=" ";
    ui->lineEdit->setText(temp);
    ui->label->setText(temp);
}


void MainWindow::on_button_fraction_clicked()
{
    value=value+"1/";
    temp=temp+"1/";
    ui->lineEdit->setText(temp);
}

void MainWindow::on_button_equal_clicked()
{
    temp=temp+"=";
    if(simple)
    {
        float total;
        QString fvalue;
        fvalue=ui->lineEdit->text();
        total=evaluate(fvalue.toStdString());
        ui->lineEdit->setText(QString::number(total));
        value=QString::number(total);
    }
    if(sroot)
    {
        ui->lineEdit->setText(QString::number(squareRoot(value)));
        value=QString::number(squareRoot(value));
    }
    if(croot)
    {
        ui->lineEdit->setText(QString::number(cubeRoot(value)));
        value=QString::number(cubeRoot(value));
    }
    if(square)
    {
        ui->lineEdit->setText(QString::number(squareNum(value)));
        value=QString::number(squareNum(value));
    }
    if(cube)
    {
        ui->lineEdit->setText(QString::number(cubeNum(value)));
        value=QString::number(cubeNum(value));
    }
    if(power)
    {
        Power p;
        p.Read(temp.toStdString());
        ui->lineEdit->setText(QString::number(p.PowerNum()));
        value=QString::number(p.PowerNum());
    }

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
        out<<"\n"<<temp<<value<<"\n";

    file.flush();
    file.close();
    ui->label->setText(temp);
    simple=true;
    temp=" ";
    temp=value;
}


void MainWindow::on_button_conversion_clicked()
{
    fraction f(temp);
    f.conversion();
    ui->lineEdit->setText(f.display());
}


void MainWindow::on_button_power_clicked()
{
    temp=temp+"^";
    value=value+"^";
    power=true;
    ui->lineEdit->setText(temp);
}





