#include "../inc/pref.h"

Pref::Pref(){
}

Pref::Pref(string n, string v):_name(n), _value(v){
}

void Pref::SetName(string n){
    _name=n;
}

void Pref::SetValue(string v){
    _value=v;
}

string Pref::GetName(){
    return _name;
}

string Pref::GetValue(){
    return _value;
}

string Pref::GetBatchFormat(){
    return _name;
}
