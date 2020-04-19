#include <iostream>
#include <string>
#include "Programmer.h"
#include "Person.h"
#include "Employee.h"
#include "Customer.h"
#include "Director.h"

using namespace std;

int main()
{
    setlocale(0, "");
    string name;
    string surname;
    int year;
    string Company;
    int Kol;
    string Projekt;
    string ProjektProg;

    Customer a;
    Director b;
    Programmer c;

    cout << "0 = exit" << endl;
    cout << "Экземпляр заказчика 1" << endl;
    cout << "Экземпляр руководителя 2" << endl;
    cout << "Экземпляр программиста 3" << endl;
    cout << "Копирование заказчика 4" << endl;
    cout << "Копирование руководителя 5" << endl;
    cout << "Копирование программиста 6" << endl;
    short k;
    while(true)
    {
        cout << "\n";
        cin >> k;
        switch(k)
            {
            case 1:
                {
                    cout << "Введите name: ";
                    cin >> name;
                    a.setName(name);
                    cout << "Введите surname: ";
                    cin >> surname;
                    a.setSurname(surname);
                    cout << "Введите year: ";
                    cin >> year;
                    a.setYear(year);
                    cout << "Введите Company: ";
                    cin >> Company;
                    a.setCompany(Company);
                    cout << "Введите Projekt: ";
                    cin >> Projekt;
                    a.setProjekt(Projekt);
                    cout << "\n";
                    a.print();
                    break;
                }
            case 2:
                {
                    cout << "Введите name: ";
                    cin >> name;
                    b.setName(name);
                    cout << "Введите surname: ";
                    cin >> surname;
                    b.setSurname(surname);
                    cout << "Введите year: ";
                    cin >> year;
                    b.setYear(year);
                    cout << "Введите Company: ";
                    cin >> Company;
                    b.setCompany(Company);
                    cout << "Введите Kol: ";
                    cin >> Kol;
                    b.setKol(Kol);
                    cout << "\n";
                    b.print();
                    break;
                }
            case 3:
                {
                    cout << "Введите name: ";
                    cin >> name;
                    c.setName(name);
                    cout << "Введите surname: ";
                    cin >> surname;
                    c.setSurname(surname);
                    cout << "Введите year: ";
                    cin >> year;
                    c.setYear(year);
                    cout << "Введите Company: ";
                    cin >> Company;
                    c.setCompany(Company);
                    cout << "Введите ProjektProg: ";
                    cin >> ProjektProg;
                    c.setProjektProg(ProjektProg);
                    cout << "\n";
                    c.print();
                    break;
                }
            case 4:
                {
                    Customer a1(a);
                    cout << "\n";
                    a1.print();
                    break;
                }
            case 5:
                {
                    Director b1(b);
                    cout << "\n";
                    b1.print();
                    break;
                }
            case 6:
                {
                    Programmer c1(c);
                    cout << "\n";
                    c1.print();
                    break;
                }
            default:
            break;
            }
        if(k==0)
            break;
    }


    return 0;
}
