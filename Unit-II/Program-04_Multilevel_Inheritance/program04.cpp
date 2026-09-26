#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
public:
    int id;

    void displayId() {
        cout << "Employee ID: " << id << endl;
    }
};

class Manager : public Employee {
public:
    int experience;

    void displayExperience() {
        cout << "Experience: " << experience << " years" << endl;
    }
};

int main() {
    Manager m;

    m.name = "Ravi";
    m.id = 501;
    m.experience = 8;

    m.displayName();
    m.displayId();
    m.displayExperience();

    return 0;
}
