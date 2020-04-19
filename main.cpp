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
    cout << "��������� ��������� 1" << endl;
    cout << "��������� ������������ 2" << endl;
    cout << "��������� ������������ 3" << endl;
    cout << "����������� ��������� 4" << endl;
    cout << "����������� ������������ 5" << endl;
    cout << "����������� ������������ 6" << endl;
    short k;
    while(true)
    {
        cout << "\n";
        cin >> k;
        switch(k)
            {
            case 1:
                {
                    cout << "������� name: ";
                    cin >> name;
                    a.setName(name);
                    cout << "������� surname: ";
                    cin >> surname;
                    a.setSurname(surname);
                    cout << "������� year: ";
                    cin >> year;
                    a.setYear(year);
                    cout << "������� Company: ";
                    cin >> Company;
                    a.setCompany(Company);
                    cout << "������� Projekt: ";
                    cin >> Projekt;
                    a.setProjekt(Projekt);
                    cout << "\n";
                    a.print();
                    break;
                }
            case 2:
                {
                    cout << "������� name: ";
                    cin >> name;
                    b.setName(name);
                    cout << "������� surname: ";
                    cin >> surname;
                    b.setSurname(surname);
                    cout << "������� year: ";
                    cin >> year;
                    b.setYear(year);
                    cout << "������� Company: ";
                    cin >> Company;
                    b.setCompany(Company);
                    cout << "������� Kol: ";
                    cin >> Kol;
                    b.setKol(Kol);
                    cout << "\n";
                    b.print();
                    break;
                }
            case 3:
                {
                    cout << "������� name: ";
                    cin >> name;
                    c.setName(name);
                    cout << "������� surname: ";
                    cin >> surname;
                    c.setSurname(surname);
                    cout << "������� year: ";
                    cin >> year;
                    c.setYear(year);
                    cout << "������� Company: ";
                    cin >> Company;
                    c.setCompany(Company);
                    cout << "������� ProjektProg: ";
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
