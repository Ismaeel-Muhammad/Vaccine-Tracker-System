#include "Screen.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Screen w;
    w.show();
    return a.exec();
}
