#ifndef DIRECTOR_H_INCLUDED
#define DIRECTOR_H_INCLUDED

#include <string>
#include "Person.h"
#include "Employee.h"

using namespace std;

class Director : public Employee
{
protected:
    int Kol;
public:
    Director();
    Director(string name,string surname,int year,string Company,int Kol);
    Director(const Director &kop);

    void setKol(int Kol);
    int getKol()const;

    void print()const;

    Director& operator = (const Director &director);
};

#endif // DIRECTOR_H_INCLUDED
