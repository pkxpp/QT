#include "finddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindDialog w = new FindDialog;
    w.show();

    return a.exec();
}
