#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee():Employee("No name","No surname",0,"No company"){}
Employee::Employee(string name,string surname,int year,string Company)
{
    setName(name);
    setSurname(surname);
    setYear(year);
    setCompany(Company);
}
Employee::Employee(const Employee &kop):Employee(kop.name,kop.surname,kop.year,kop.Company){}

void Employee::setCompany(string Company)
{
    this->Company = Company;
}
string Employee::getCompany()const
{
    return Company;
}
void Employee::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
    cout << "Company: " << Company << endl;
}



