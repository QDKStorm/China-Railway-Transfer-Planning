#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BFS.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("");
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ModifyText(const char* s){
    ui->label->setText(s);
}

void MainWindow::on_pushButton_clicked()
{
    start(this, ui->st_edit->text().toStdString(), ui->ed_edit->text().toStdString(), ui->checkBox_tongcheng->isChecked(), !ui->checkBox_yeche->isChecked());
}

