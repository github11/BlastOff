#include "inc/controller.h"
#include <boost/foreach.hpp>
#include <vector>
#include <string>

using namespace std;
Controller::Controller(MainWindow * w): ui_(w){
    vector<string> sourceprefs;
    sourceprefs.push_back("Apples");
    sourceprefs.push_back("Pears");
    sourceprefs.push_back("Banannas");
    sourceprefs.push_back("Pteradactyls");

    BOOST_FOREACH(string s, sourceprefs){
        prefList_.push_back(new Pref(s));
    }

    BOOST_FOREACH(Pref * p, prefList_){
        ui_->AddPref(p);
    }
}


