#ifndef BFS_H
#define BFS_H

#include <QMainWindow>
#include "mainwindow.h"
void init();
void start(MainWindow* W, std::string ST, std::string ED, bool Ttag, bool Ytag, int stt1, int stm1,
           int stt2, int stm2, int edt1, int edm1, int edt2, int edm2, int transt, bool Gban, bool Gonly, bool lingchen);
#endif // BFS_H
