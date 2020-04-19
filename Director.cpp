#include <iostream>
#include <string>
#include "Director.h"

using namespace std;

Director::Director():Director("No name","No surname",0,"No company",0){}
Director::Director(string name,string surname,int year,string Company,int Kol)
{
    setName(name);
    setSurname(surname);
    setYear(year);
    setCompany(Company);
    setKol(Kol);
}
Director::Director(const Director &kop):Director(kop.name,kop.surname,kop.year,kop.Company,kop.Kol){}

void Director::setKol(int Kol)
{
    this->Kol = Kol;
}
int Director::getKol()const
{
    return Kol;
}
void Director::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
    cout << "Company: " << Company << endl;
    cout << "Number of employees: " << Kol << endl;
}

Director& Director::operator = (const Director &director)
{
    this->name = director.name;
    this->surname = director.surname;
    this->year = director.year;
    this->Company = director.Company;
    this->Kol = director.Kol;
    return *this;
}






