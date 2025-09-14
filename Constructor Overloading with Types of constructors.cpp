/*
Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std;

class fetch{
  public : 
  int a,b;
  // Default Constructor
  fetch(void){
      a = 3;
      b = 4;
  }
  // Parameterised Constructor
  fetch(int m, int n){
      a = m;
      b = n;
  }
  // Copy Constructor
  fetch(fetch &obj){
      a = obj.a;
      b = obj.b;
  }
  // Same function name but parameters are different - Method Overloading 
  // Display FUnction - Class Method
  void disp(void){
      cout<<"a is "<<a<<"\n";
      cout<<"b is "<<b<<"\n";
  }
};

int main(void){
    // Defining objects
    fetch f1;
    fetch f2(2,3);
    fetch f3(f2);
    fetch f4(f1);
    
    // Calling Display function
    cout<<"---Object f1 : Default Constructor---"<<"\n";
    f1.disp();
    cout<<"---Object f2 : Parameterised Constructor---"<<"\n";
    f2.disp();
    cout<<"---Object f3 : Copy Constructor of 2---"<<"\n";
    f3.disp();
    cout<<"---Object f4 : Copy Constructor of 1---"<<"\n";
    f4.disp();
    
    return 0;
}

/*
Sample Output :
---Object f1 : Default Constructor---
a is 3
b is 4
---Object f2 : Parameterised Constructor---
a is 2
b is 3
---Object f3 : Copy Constructor of 2---
a is 2
b is 3
---Object f4 : Copy Constructor of 1---
a is 3
b is 4
*/
