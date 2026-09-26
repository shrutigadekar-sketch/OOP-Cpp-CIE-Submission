#include <iostream>
using namespace std;

class Person {
public:
    string name = "Riya";
};

class Student : virtual public Person {
};

class Employee : virtual public Person {
};

class TeachingAssistant : public Student, public Employee {
public:
    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    TeachingAssistant t;
    t.display();

    return 0;
}
