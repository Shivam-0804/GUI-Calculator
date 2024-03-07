#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "record.h"
#include <QMainWindow>
#include <about.h>
#include <QApplication>
#include <record.h>
class MainWindow;
class MainWindow2;
class MainWindow3;
namespace Ui {
class MainWindow4;
}

class MainWindow4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow4(QWidget *parent = nullptr);
    ~MainWindow4();

private slots:
    void on_actionSTANDARD_triggered();

    void on_actionCOMPLEX_triggered();

    void on_actionEXIT_triggered();

    void on_button_0_clicked();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_equal_clicked();

    void on_button_dot_clicked();

    void on_button_sin_clicked();

    void on_button_tan_clicked();

    void on_button_cos_clicked();

    void on_button_radian_clicked();

    void on_button_deg_clicked();

    void on_button_nlog_clicked();

    void on_button_log_clicked();

    void on_button_pi_clicked();

    void on_button_clear_2_clicked();

    void on_actionBRIGHT_triggered();

    void on_actionDARK_triggered();

    void on_button_pm_clicked();

    void on_button_expo_2_clicked();

    void on_button_tanin_clicked();

    void on_button_sinin_clicked();

    void on_button_cosin_clicked();

    void on_button_sinh_clicked();

    void on_button_cosh_clicked();

    void on_button_tanh_clicked();

    void on_button_expo_3_clicked();

    void on_button_factorial_clicked();


    void on_button_clear_clicked();

    void on_actionABOUT_triggered();

    void on_actionRECORD_triggered();

private:
    Ui::MainWindow4 *ui;
    MainWindow *standard;
    MainWindow2 *complex;
    MainWindow3 *quadratic;
    about *abt;
    record *rec;
};

#endif // FUNCTIONS_H
