#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText(tr("窗口")); //将界面上按钮的显示文本改为"新窗口"
}

MainWindow::~MainWindow()
{
    delete ui;
}
