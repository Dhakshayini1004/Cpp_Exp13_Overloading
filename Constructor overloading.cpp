/*
Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std;

class fetch {
public:
    int a, b;

    // Default Constructor
    fetch() {
        a = 0;
        b = 0;
    }

    // Parameterized Constructor (1 argument)
    fetch(int m) {
        a = m;
        b = 0;
    }

    // Parameterized Constructor (2 arguments)
    fetch(int m, int n) {
        a = m;
        b = n;
    }

    // Display Function
    void disp() {
        cout << "a is " << a << "\n";
        cout << "b is " << b << "\n";
    }
};

int main() {
    // Constructor overloading demonstration
    fetch f1;         // Calls default constructor
    fetch f2(5);      // Calls constructor with 1 parameter
    fetch f3(2, 3);   // Calls constructor with 2 parameters

    cout << "---Object f1 : Default Constructor---\n";
    f1.disp();
    cout << "---Object f2 : Constructor with 1 parameter---\n";
    f2.disp();
    cout << "---Object f3 : Constructor with 2 parameters---\n";
    f3.disp();

    return 0;
}

/*
Sample Output:
---Object f1 : Default Constructor---
a is 0
b is 0
---Object f2 : Constructor with 1 parameter---
a is 5
b is 0
---Object f3 : Constructor with 2 parameters---
a is 2
b is 3
*/
