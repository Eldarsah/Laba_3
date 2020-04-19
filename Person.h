#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string surname;
    int year;
public:
    Person();
    Person(string name,string surname,int year);
    Person(const Person &kop);

    void setName(string name);
    void setSurname(string surname);
    void setYear(int year);

    string getName()const;
    string getSurname()const;
    int getYear()const;

    virtual void print()const = 0;
};

#endif // PERSON_H_INCLUDED
