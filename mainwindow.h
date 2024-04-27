#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void ModifyText(const char* s);
    void ModifyLength(const int len);
    void ModifySearchTime(const char *s);
private:
    Ui::MainWindow *ui;
private slots:
    void on_pushButton_clicked();
    void on_checkBox_xfzz_stateChanged(int arg1);
};
#endif // MAINWINDOW_H
