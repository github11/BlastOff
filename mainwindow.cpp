#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    prefsLay(new QVBoxLayout)
{
    ui->setupUi(this);
    ui->WigList->setLayout(prefsLay);
    prefsLay->setSpacing(0);
    prefsLay->setContentsMargins(0, 0, 0, 0);
    prefsLay->addStretch();
}

MainWindow::~MainWindow()
{
    // TODO add functionality to clean up all UI elements
    // generated with code. Also, delete the layout object.
    delete ui;
}

void MainWindow::AddPref(Pref * p){
    QWidget * wptr = new PrefView;
    prefsViewVec.push_back(wptr);
    ((PrefView*)wptr)->SetPref(p);

    prefsLay->insertWidget(0, wptr);
}
