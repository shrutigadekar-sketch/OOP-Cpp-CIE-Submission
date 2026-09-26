#include <iostream>
using namespace std;

class Student
{
public:
    static int count;
};

int Student::count = 3;

int main()
{
    cout << "Number of Students: " << Student::count << endl;

    return 0;
}
