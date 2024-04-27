#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BFS.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/R.jpg"));
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ModifyText(const char* s){
    ui->label->setText(s);
}

void MainWindow::ModifyLength(const int len){
    ui->scrollAreaWidgetContents->setMaximumHeight(len);
    ui->scrollAreaWidgetContents->setMinimumHeight(len);
}

void MainWindow::ModifySearchTime(const char *s){
    ui->label_time->setText(s);
}

void MainWindow::on_pushButton_clicked()
{
    start(this, ui->st_edit->text().toStdString(), ui->ed_edit->text().toStdString(),
          ui->checkBox_tongcheng->isChecked(), !ui->checkBox_yeche->isChecked(),
          ui->spinBox_stt1->value(), ui->spinBox_stm1->value(), ui->spinBox_stt2->value(),
          ui->spinBox_stm2->value(), ui->spinBox_edt1->value(), ui->spinBox_edm1->value(),
          ui->spinBox_edt2->value(), ui->spinBox_edm2->value(), ui->spinBox_transt->value(),
          ui->checkBox_jingt->isChecked(), ui->checkBox_onlygt->isChecked(),
          !ui->checkBox_lingchen->isChecked());
}

void MainWindow::on_checkBox_xfzz_stateChanged(int arg1)
{
    if(arg1){
        ui->spinBox_stt1->setValue(18);
        ui->spinBox_stm1->setValue(0);
        ui->spinBox_stt2->setValue(23);
        ui->spinBox_stm2->setValue(59);
        ui->spinBox_edt1->setValue(0);
        ui->spinBox_edm1->setValue(0);
        ui->spinBox_edt2->setValue(18);
        ui->spinBox_edm2->setValue(0);

        ui->spinBox_stt1->setEnabled(false);
        ui->spinBox_stm1->setEnabled(false);
        ui->spinBox_stt2->setEnabled(false);
        ui->spinBox_stm2->setEnabled(false);
        ui->spinBox_edt1->setEnabled(false);
        ui->spinBox_edm1->setEnabled(false);
        ui->spinBox_edt2->setEnabled(false);
        ui->spinBox_edm2->setEnabled(false);
    }
    else{
        ui->spinBox_stt1->setValue(0);
        ui->spinBox_stm1->setValue(0);
        ui->spinBox_stt2->setValue(23);
        ui->spinBox_stm2->setValue(59);
        ui->spinBox_edt1->setValue(0);
        ui->spinBox_edm1->setValue(0);
        ui->spinBox_edt2->setValue(23);
        ui->spinBox_edm2->setValue(59);

        ui->spinBox_stt1->setEnabled(true);
        ui->spinBox_stm1->setEnabled(true);
        ui->spinBox_stt2->setEnabled(true);
        ui->spinBox_stm2->setEnabled(true);
        ui->spinBox_edt1->setEnabled(true);
        ui->spinBox_edm1->setEnabled(true);
        ui->spinBox_edt2->setEnabled(true);
        ui->spinBox_edm2->setEnabled(true);
    }
}
