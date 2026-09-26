#include <iostream>
using namespace std;

class Academic {
public:
    int marks = 80;
};

class Sports {
public:
    int score = 15;
};

class Student : public Academic, public Sports {
public:
    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total: " << marks + score << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}
