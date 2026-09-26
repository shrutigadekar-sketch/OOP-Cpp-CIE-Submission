#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is moving" << endl;
    }
};

class Boat : public Vehicle {
public:
    void move() override {
        cout << "Boat is moving" << endl;
    }
};

int main() {
    Car c;
    Boat b;

    c.move();
    b.move();

    return 0;
}
