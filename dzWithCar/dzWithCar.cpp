#include<iostream>

#include<Windows.h>
#include <cstring>

using namespace std;

class Student

{

    char* name;
    char* surname;
    int age;

public:

    Student() // construct by default

    {

        name = nullptr;
        surname = nullptr;
        age = 0;

    }

    Student(const char* Name, const char* Surname, int Age) // construct by 2 param

    {

        name = new char[strlen(Name) + 1];
        surname = new char[strlen(Surname) + 1];
        strcpy_s(surname, strlen(Surname) + 1, Surname);
        strcpy_s(name, strlen(Name) + 1, Name);

        age = Age;

    }

    void Output()

    {

        cout << "Name: " << name << endl
            << "Age: " << age << endl << "Surname:" << surname << endl;

    }

    ~Student()

    {
        delete[] surname;
        delete[] name;

        cout << "Destruct\n";

    }

};

class Car
{
    char* model;
    char* country;
    int yearOfCreation;
    int price;
public:
    Car() {
        model = nullptr;
        country = nullptr;
        yearOfCreation = 0;
        price = 0;
    }
    Car(const char* Model, const char* Country, int YearOfCreation, double Price) {
        model = new char[strlen(Model) + 1];
        country = new char[strlen(Country) + 1];
        strcpy_s(model, strlen(Model) + 1, Model);
        strcpy_s(country, strlen(Country) + 1, Country);
        yearOfCreation = YearOfCreation;
        price = Price;
    }

    ~Car() {
        delete[] model;
        delete[] country;

        cout << "\nDestructor\n";
    }

    int GetYear() {
        return yearOfCreation;
    }

    int GetPrice() {
        return price;
    }

    void SetYear(int a) {
        yearOfCreation = a;
    }
    void SetPrice(double a) {
        price = a;
    }

    void Print() {
        cout << "Model:" << model << "\nCountry:" << country << "\nYear:" << yearOfCreation << "\nPrice:" << price << "$";
    }

    void Input() {
        char arr[100];
        cout << "\nEnter Model ->";
        cin.getline(arr, 100);
        model = new char[strlen(arr) + 1];
        strcpy_s(model, strlen(arr) + 1, arr);
        cout << "Enter Country ->";
        cin.getline(arr, 100);
        country = new char[strlen(arr) + 1];
        strcpy_s(country, strlen(arr) + 1, arr);
        cout << "Enter Year Of Creation ->";
        cin >> yearOfCreation;
        cout << "Enter Price ->";
        cin >> price;
    }
};

int main()

{
    Car a("S class", "Italy", 2010, 21000);
    a.Print();

    /*cout<<"\n" << a.GetPrice();*/

    Car b;
    b.Input();
    b.Print();



    /*Student obj1("Oleg","Popov", 21);

    obj1.Output();*/


}

