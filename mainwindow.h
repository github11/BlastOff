#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVBoxLayout>
#include "inc/pref.h"
#include "inc/prefview.h"
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void AddPref(Pref * p);
    
private:
    Ui::MainWindow * ui;
    vector<QWidget *> prefsViewVec;
    QVBoxLayout * prefsLay;
};

#endif // MAINWINDOW_H
