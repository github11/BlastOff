#include "inc/prefview.h"
#include "ui_prefview.h"

PrefView::PrefView(QWidget * parent) :
    QWidget(parent),
    ui(new Ui::PrefView) {
    ui->setupUi(this);
}

PrefView::~PrefView() {
    delete ui;
}

void PrefView::SetPref(Pref * p){
    pref = p;
}
