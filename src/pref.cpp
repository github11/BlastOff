#include "../inc/pref.h"

Pref::Pref(){
}

Pref::Pref(string n, string v):name(n), value(v){
}

void Pref::SetName(string n){
    name=n;
}

void Pref::SetValue(string v){
    value=v;
}

string Pref::GetName(){
    return name;
}

string Pref::GetValue(){
    return value;
}

string Pref::GetBatchFormat(){
    return name;
}
