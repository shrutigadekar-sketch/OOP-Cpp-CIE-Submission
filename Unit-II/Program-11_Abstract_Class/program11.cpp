#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
public:
    double area() override {
        return 15;
    }
};

class Circle : public Shape {
public:
    double area() override {
        return 3.1416 * 2 * 2;
    }
};

int main() {
    Rectangle r;
    Circle c;

    cout << r.area() << endl;
    cout << c.area() << endl;

    return 0;
}
