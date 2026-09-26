#include <iostream>
using namespace std;

class Vehicle {
protected:
    int rent;

public:
    virtual void calculateRent(int days) = 0;
};

class Car : public Vehicle {
public:
    void calculateRent(int days) override {
        rent = days * 2000;
        cout << "Car Rent: " << rent << endl;
    }
};

class Bike : public Vehicle {
public:
    void calculateRent(int days) override {
        rent = days * 720;
        cout << "Bike Rent: " << rent << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.calculateRent(3);
    b.calculateRent(3);

    return 0;
}
