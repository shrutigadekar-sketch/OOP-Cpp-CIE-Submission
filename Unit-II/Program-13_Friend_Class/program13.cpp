#include <iostream>
using namespace std;

class Account {
private:
    int balance = 5000;

    friend class Auditor;
};

class Auditor {
public:
    void check(Account a) {
        cout << "Account Balance: " << a.balance << endl;
    }
};

int main() {
    Account a;
    Auditor au;

    au.check(a);

    return 0;
}
