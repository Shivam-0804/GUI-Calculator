#include "standard.h"
#include <QApplication>

bool dark=true,bright=false;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setWindowIcon(QIcon(":/images/icons/calculator.ico"));
    a.setApplicationDisplayName("Calculator");
    w.show();
    return a.exec();
}
