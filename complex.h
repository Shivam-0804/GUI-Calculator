#ifndef COMPLEX_H
#define COMPLEX_H

#include "record.h"
#include <QMainWindow>
#include <QApplication>
#include <about.h>
#include <record.h>
class MainWindow;
class MainWindow4;
namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:


    void on_actionSTANDARD_triggered();

    void on_actionLOG_TRIGO_triggered();

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

    void on_button_iota_clicked();

    void on_button_plus_clicked();

    void on_button_equal_clicked();
    void on_button_minus_clicked();

    void on_button_mul_clicked();

    void on_button_clear_2_clicked();

    void on_button_clear_clicked();

    void on_button_divide_clicked();

    void on_button_conjugate_clicked();

    void on_button_root_clicked();

    void on_button_power_clicked();

    void on_button_dzero_clicked();

    void on_button_decimal_clicked();

    void on_button_log_clicked();

    void on_actionABOUT_triggered();

    void on_button_argument_clicked();

    void on_actionBRIGHT_triggered();

    void on_actionDARK_triggered();

    void on_button_absolute_clicked();

    void on_button_normal_clicked();

    void on_button_exp_clicked();

    void fileEdit(QString a,QString b);

    void on_actionRECORD_triggered();

private:
    Ui::MainWindow2 *ui;
    MainWindow *standard;
    MainWindow4 *log;
    about *abt;
    record *rec;
};

#endif // COMPLEX_H
