#include <iostream>
using namespace std;

class Person {
protected:
    string language;

public:
    void setLanguage(string l) {
        language = l;
    }
};

class Developer : public Person {
public:
    void display() {
        cout << "Developer: Neha" << endl;
        cout << "Language: " << language << endl;
    }
};

int main() {
    Developer d;
    d.setLanguage("C++");
    d.display();

    return 0;
}
