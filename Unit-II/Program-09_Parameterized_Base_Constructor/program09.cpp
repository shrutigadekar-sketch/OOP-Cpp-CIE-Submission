#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    Student(string n, int a) : Person(n, a) {
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s("Kiran", 24);
    s.display();

    return 0;
}
