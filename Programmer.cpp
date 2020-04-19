#include <iostream>
#include <string>
#include "Programmer.h"

using namespace std;

Programmer::Programmer():Programmer("No name","No surname",0,"No company","No ProjektProg"){}
Programmer::Programmer(string name,string surname,int year,string Company,string ProjektProg)
{
    setName(name);
    setSurname(surname);
    setYear(year);
    setCompany(Company);
    setProjektProg(ProjektProg);
}
Programmer::Programmer(const Programmer &kop):Programmer(kop.name,kop.surname,kop.year,kop.Company,kop.ProjektProg){}

void Programmer::setProjektProg(string ProjektProg)
{
    this->ProjektProg = ProjektProg;
}
string Programmer::getProjektProg()
{
    return ProjektProg;
}
void Programmer::print()const
{
     cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
    cout << "Company: " << Company << endl;
    cout << "Name of the programmer's project: " << ProjektProg << endl;
}

Programmer& Programmer::operator = (const Programmer &programmer)
{
    this->name = programmer.name;
    this->surname = programmer.surname;
    this->year = programmer.year;
    this->Company = programmer.Company;
    this->ProjektProg = programmer.ProjektProg;
    return *this;
}
