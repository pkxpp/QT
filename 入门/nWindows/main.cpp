#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "logindlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
    MainWindow w;
    LoginDlg dlg;
    if (dlg.exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    else
        return 0;
}
