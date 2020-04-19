#ifndef PROGRAMMER_H_INCLUDED
#define PROGRAMMER_H_INCLUDED
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;

class Programmer : public Employee
{
private:
    string ProjektProg;
public:
    Programmer();
    Programmer(string name,string surname,int year,string Company,string ProjektProg);
    Programmer(const Programmer &kop);

    void setProjektProg(string ProjektProg);
    string getProjektProg();

    void print()const;

    Programmer& operator = (const Programmer &programmer);
};

#endif // PROGRAMMER_H_INCLUDED
