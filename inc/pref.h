#ifndef PREF_H
#define PREF_H
//////////////////
#include <string>

using namespace std;
class Pref
{
public:
    Pref();
    Pref(string n, string v="");
    ~Pref();
    void SetName(string n);
    void SetValue(string v);
    string GetName();
    string GetValue();
    string GetBatchFormat();
private:
    // Member Variables:
    string name;
    string value;
};

#endif
