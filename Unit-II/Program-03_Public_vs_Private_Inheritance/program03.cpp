#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

class PublicDerived : public Base {
};

class PrivateDerived : private Base {
public:
    void display() {
        show();
    }
};

int main() {
    PublicDerived p;
    p.show();

    PrivateDerived q;
    q.display();

    return 0;
}
