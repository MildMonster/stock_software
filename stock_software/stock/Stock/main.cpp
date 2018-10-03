#include "stockdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StockDialog w;
    w.show();

    return a.exec();
}
