#include "inc/controller.h"
#include <boost/foreach.hpp>
#include <vector>
#include <string>

using namespace std;
Controller::Controller(MainWindow * w): _ui(w){
    vector<string> sourceprefs;
    sourceprefs.push_back("Apples");
    sourceprefs.push_back("Pears");
    sourceprefs.push_back("Banannas");
    sourceprefs.push_back("Pteradactyls");

    BOOST_FOREACH(string s, sourceprefs){
        _prefList.push_back(new Pref(s));
    }

    BOOST_FOREACH(Pref * p, _prefList){
        _ui->AddPref(p);
    }
}


