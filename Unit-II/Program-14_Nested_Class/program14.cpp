#include <iostream>
using namespace std;

class University {
public:
    class Department {
    public:
        void display() {
            cout << "Department: AI and DS" << endl;
        }
    };
};

int main() {
    University::Department d;
    d.display();

    return 0;
}
