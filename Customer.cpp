#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

Customer::Customer():Customer("No name","No surname",0,"No company","No Projekt"){}
Customer::Customer(string name,string surname,int year,string Company,string Projekt)
{
    setName(name);
    setSurname(surname);
    setYear(year);
    setCompany(Company);
    setProjekt(Projekt);
}
Customer::Customer(const Customer &kop):Customer(kop.name,kop.surname,kop.year,kop.Company,kop.Projekt){}

void Customer::setProjekt(string Projekt)
{
    this->Projekt = Projekt;
}
string Customer::getProjekt()const
{
    return Projekt;
}
void Customer::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
    cout << "Company: " << Company << endl;
    cout << "Project title: " << Projekt << endl;
}

Customer& Customer::operator = (const Customer &customer)
{
    this->name = customer.name;
    this->surname = customer.surname;
    this->year = customer.year;
    this->Company = customer.Company;
    this->Projekt = customer.Projekt;
    return *this;
}





