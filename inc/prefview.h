#ifndef PREFVIEW_H
#define PREFVIEW_H

#include <QWidget>
#include "inc/pref.h"

namespace Ui {
class PrefView;
}

class PrefView : public QWidget
{
    Q_OBJECT

public:
    explicit PrefView(QWidget * parent = 0);
    ~PrefView();
    void SetPref(Pref * p);

private:
    Ui::PrefView *ui_;
    Pref * pref_;
};

#endif // PREFVIEW_H
