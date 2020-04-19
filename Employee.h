#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
#include "Person.h"

using namespace std;

class Employee : public Person
{
protected:
    string Company;
public:
    Employee();
    Employee(string name,string surname,int year,string Company);
    Employee(const Employee &kop);

    void setCompany(string Company);

    string getCompany()const;

    virtual void print()const = 0;
};

#endif // EMPLOYEE_H_INCLUDED
