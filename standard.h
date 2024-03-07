#ifndef STANDARD_H
#define STANDARD_H

#include <QMainWindow>
#include "complex.h"
#include "functions.h"
#include <QApplication>
#include <about.h>
#include <record.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
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

    void on_button_open_clicked();

    void on_button_close_clicked();

    void on_button_root_clicked();

    void on_button_divide_clicked();

    void on_button_mul_clicked();

    void on_button_minus_clicked();

    void on_button_plus_clicked();

    void on_button_equal_clicked();

    void on_button_decimal_clicked();

    void on_button_clear_2_clicked();

    void on_button_square_clicked();

    void on_button_dzero_clicked();

    void on_actionDARK_triggered();

    void on_actionBRIGHT_triggered();

    void on_actionCOMPLEX_triggered();

    void on_actionLOG_TRIGO_triggered();

    void on_button_croot_clicked();

    void on_button_cube_clicked();

    void on_button_clear_clicked();

    void on_button_fraction_clicked();

    void on_button_conversion_clicked();

    void on_button_power_clicked();

    void on_actionABOUT_triggered();

    void on_actionRECORD_triggered();

private:
    Ui::MainWindow *ui;
    MainWindow2 *complex;
    MainWindow4 *log;
    about *abt;
    record *rec;
};
#endif // STANDARD_H
