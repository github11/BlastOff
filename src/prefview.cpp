#include "inc/prefview.h"
#include "ui_prefview.h"

PrefView::PrefView(QWidget * parent) :
    QWidget(parent),
    ui_(new Ui::PrefView) {
    ui_->setupUi(this);
}

PrefView::~PrefView() {
    delete ui_;
}

void PrefView::SetPref(Pref * p){
    pref_ = p;
}
