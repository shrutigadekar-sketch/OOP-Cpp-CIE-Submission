#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
};

class Permanent : public Employee {
public:
    void calculateSalary() override {
        cout << "Permanent Employee Salary: 48000" << endl;
    }
};

class Contract : public Employee {
public:
    void calculateSalary() override {
        cout << "Contract Employee Salary: 40000" << endl;
    }
};

int main() {
    Permanent p;
    Contract c;

    p.calculateSalary();
    c.calculateSalary();

    return 0;
}
