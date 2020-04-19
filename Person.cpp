#include <iostream>
#include "Person.h"
using namespace std;

Person::Person():Person("No name","No surname",0){}
Person::Person(string name,string surname,int year)
{
    setName(name);
    setSurname(surname);
    setYear(year);
}
Person::Person(const Person &kop):Person(kop.name,kop.surname,kop.year){}

void Person::setName(string name)
{
    this->name = name;
}
void Person::setSurname(string surname)
{
    this->surname = surname;
}
void Person::setYear(int year)
{
    this->year= year;
}

string Person::getName()const
{
    return name;
}
string Person::getSurname()const
{
    return surname;
}
int Person::getYear()const
{
    return year;
}
void Person::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Year: " << year << endl;
}




