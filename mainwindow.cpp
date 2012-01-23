#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow),
    prefsLay_(new QVBoxLayout)
{
    ui_->setupUi(this);
    ui_->WigList->setLayout(prefsLay_);
    prefsLay_->setSpacing(0);
    prefsLay_->setContentsMargins(0, 0, 0, 0);
    prefsLay_->addStretch();
}

MainWindow::~MainWindow()
{
    // TODO add functionality to clean up all UI elements
    // generated with code. Also, delete the layout object.
    delete ui_;
}

void MainWindow::AddPref(Pref * p){
    QWidget * wptr = new PrefView;
    prefsViewVec_.push_back(wptr);
    ((PrefView*)wptr)->SetPref(p);

    prefsLay_->insertWidget(0, wptr);
}
