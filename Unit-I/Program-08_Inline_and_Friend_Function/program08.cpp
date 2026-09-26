#include <iostream>
using namespace std;

class Test
{
    int value;

public:
    Test()
    {
        value = 50;
    }

    inline int getValue()
    {
        return value;
    }

    friend void display(Test t);
};

void display(Test t)
{
    cout << "Value = " << t.value << endl;
}

int main()
{
    Test t;

    cout << "Inline Function: " << t.getValue() << endl;
    display(t);

    return 0;
}
