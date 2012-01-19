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
    MainWindow * _ui;
    vector<Pref *> _prefList;
};

#endif // Controller_H
