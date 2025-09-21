#include <iostream>
using namespace std;

class Purchase {
public:
    string productName;
    int unit_price;
    int quantity;

    // Constructor
    Purchase(string name, int price, int qty) {
        productName = name;
        unit_price = price;
        quantity = qty;
    }

    int totalPrice() const {
        return unit_price * quantity;
    }

    int operator+(const Purchase &p) {
        return this->totalPrice() + p.totalPrice();
    }

    friend ostream& operator<<(ostream &out, const Purchase &p) {
        out << "Product Name : " << p.productName << "\n";
        out << "Quantity : " << p.quantity << "\n";
        out << "Unit Price : " << p.unit_price << "\n";
        out << "Total Price : " << p.totalPrice() << "\n";
        return out;
    }
};

int main() {
    Purchase p1("Shoes", 500, 2);  // 500 * 2 = 1000
    Purchase p2("Pen", 20, 5);     // 20 * 5 = 100

    cout << p1 << endl;  // prints details of p1
    cout << p2 << endl;  // prints details of p2

    int combined = p1 + p2;  // uses overloaded + operator
    cout << "Combined Total: " << combined << endl;

    return 0;
}

/*
Sample Output : 
Product Name : Shoes
Quantity : 2
Unit Price : 500
Total Price : 1000

Product Name : Pen
Quantity : 5
Unit Price : 20
Total Price : 100

Combined Total: 1100

*/
