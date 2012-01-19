#include "inc/prefview.h"
#include "ui_prefview.h"

PrefView::PrefView(QWidget * parent) :
    QWidget(parent),
    _ui(new Ui::PrefView) {
    _ui->setupUi(this);
}

PrefView::~PrefView() {
    delete _ui;
}

void PrefView::SetPref(Pref * p){
    _pref = p;
}
