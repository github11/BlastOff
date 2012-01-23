#include "../inc/pref.h"

Pref::Pref(){
}

Pref::Pref(string n, string v):name_(n), value_(v){
}

void Pref::SetName(string n){
    name_=n;
}

void Pref::SetValue(string v){
    value_=v;
}

string Pref::GetName(){
    return name_;
}

string Pref::GetValue(){
    return value_;
}

string Pref::GetBatchFormat(){
    return name_;
}
