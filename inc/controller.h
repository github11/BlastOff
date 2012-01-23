#ifndef Controller_H
#define Controller_H

#include "mainwindow.h"
#include "inc/pref.h"
#include <vector>

class Controller
{
public:
    Controller(MainWindow * w);

private:
    // Member variables:
    MainWindow * ui_;
    vector<Pref *> prefList_;
};

#endif // Controller_H
