/*
Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/

#include <iostream>
#include <cstring>
using namespace std; 

void purchase(string productName, int quantity){
    cout << "CART\n";
    cout << "Product Name : " << productName << "\n";
    cout << "Quantity : " << quantity << "\n";
    cout << "-----------------------------\n";

}

void purchase(string productName, int unit_price, int quantity){
    int price = unit_price * quantity;

    cout << "CHECKOUT\n";
    cout << "Product Name : " << productName << "\n";
    cout << "Quantity : " << quantity << "\n";
    cout << "Unit Price : " << unit_price << "\n";
    cout << "Total Price : " << price << "\n";
    cout << "-----------------------------\n";

}

int main(){
    string productName;
    int unit_price, quantity;

    cout << "Enter the Name of product, Quantity and Unit price : ";
    cin >> productName >> quantity >> unit_price;

    purchase(productName, quantity);
    purchase(productName, unit_price, quantity);

    // Hardcoded calls
    purchase("Pen", 5);        
    purchase("Notebook", 50, 2);

    return 0;
}

/*
Sample Output: 
Shoes 3 500

🛒 CART VIEW
Product Name : Shoes
Quantity : 3
-----------------------------
💳 CHECKOUT VIEW
Product Name : Shoes
Quantity : 3
Unit Price : 500
Total Price : 1500
-----------------------------
🛒 CART VIEW
Product Name : Pen
Quantity : 5
-----------------------------
💳 CHECKOUT VIEW
Product Name : Notebook
Quantity : 2
Unit Price : 50
Total Price : 100
-----------------------------
*/
