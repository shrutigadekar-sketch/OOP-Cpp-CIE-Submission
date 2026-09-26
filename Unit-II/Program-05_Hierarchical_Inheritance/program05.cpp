#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void openBoot() {
        cout << "Boot opened" << endl;
    }
};

class Bike : public Vehicle {
public:
    void helmetReminder() {
        cout << "Helmet reminder" << endl;
    }
};

int main() {
    Car c;
    c.start();
    c.openBoot();

    Bike b;
    b.start();
    b.helmetReminder();

    return 0;
}
