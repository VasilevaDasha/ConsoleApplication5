// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
using namespace std;
/*
class Employee
{
public:
    string fio;
    int age;
    double salary;

public:
    Employee() {
        cout << endl << "Object create without param";
    };

    Employee(string fio) {
        this->fio = fio;
        cout << endl << "Object create with 1 param";
    };

    Employee(string fio, int age, double salary) {
        this->fio = fio;
        this->age = age;
        this->salary = salary;
        cout << endl << "Object create";
    };
    ~Employee() { cout << " Bye" << endl; };
    void show_emp_details();
};

void Employee::show_emp_details()
{
    cout << "\n\n**** Details of  Employee ****";
    cout << "\nEmployee Name      :  " << fio;
    cout << "\nEmployee salary    :  " << salary;
    cout << "\nEmployee age       :  " << age;
    cout << "\n-------------------------------\n\n";
}

int main()
{
    Employee emp1("Tom Smith", 23, 1000.50);
    emp1.show_emp_details();

    Employee emp2("Petr Tomson", 33, 2000.50);
    emp2.show_emp_details();

    Employee emp3;
    emp3.fio = "Petr";
    emp3.age = 18;
    emp3.salary = 100;
    emp3.show_emp_details();
    

    Employee emp4("XXX");
    emp4.age = 5l;
    emp4.salary = 200;
    emp4.show_emp_details();
    return 0;
}
*/




/*
#include <fstream>
#include <iostream>
using namespace std;

class Student
{
public:
    string fio;
    int ID;
    double number;

public:

    void show_emp_details() {
        cout << "\n\n**** Details of  Student ****";
        cout << "\nStudent Name      :  " << fio;
        cout << "\nStudent ID    :  " << ID;
        cout << "\nStudent Number       :  " << number;
        cout << "\n-------------------------------\n\n";
    }

};

int main()
{
    Student emp;
    emp.fio = "Petr";
    emp.ID = 185678;
    emp.number = 4.5;
    emp.show_emp_details();


    ofstream file("student.txt");
    file << "Student Name    :   " << emp.fio << "\n";
    file << "Student ID    :  " << emp.ID << "\n";
    file << "Student Number    :  " << emp.number << "\n";

    return 0;
}
*/


#include <iostream>
using namespace std;

class Dog
{
public:
    string breed;
    string size;
    int age;
    string color;

public:

    void show_emp_details() {
        cout << "\n\n**** Details of  Dog****";
        cout << "\nDog breed      :  " << breed;
        cout << "\nDog size    :  " << size;
        cout << "\nDog age       :  " << age;
        cout << "\nDog color     :  " << color;
        cout << "\n-------------------------------\n\n";
    }
};

int main()
{
    Dog emp;
    emp.breed = "Neapolitan Mastiff";
    emp.size = Large;
    emp.age = 5 years;
    emp.color = Black;
    emp.show_emp_details();

    return 0;
}
