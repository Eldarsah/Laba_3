#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;

class Customer : public Employee
{
private:
    string Projekt;
public:
    Customer();
    Customer(string name,string surname,int year,string Company,string Projekt);
    Customer(const Customer &kop);

    void setProjekt(string Projekt);
    string getProjekt()const;

    void print()const;

    Customer& operator = (const Customer &customer);
};

#endif // CUSTOMER_H_INCLUDED
