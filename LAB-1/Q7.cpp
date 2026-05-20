/*Create a class customer with attributes customer name, product bought and
and paid amount. Create suitable methods to take and display the information
with a clause that if amount paid is greater than 20000 then a discount of
5% given else no discount is granted */

#include <iostream>
using namespace std;

class Customer {
    string name;
    string product;
    float paidAmount;

public:
    void getData(string n, string p, float amount) {
        name = n;
        product = p;
        paidAmount = amount;
    }

    void display() {
        cout << "Customer Name: " << name << endl;
        cout << "Product: " << product << endl;
        cout << "Amount Paid: " << paidAmount << endl;

        if (paidAmount > 20000) {
            float discount = paidAmount * 0.05;
            cout << "Discount: " << discount << endl;
            cout << "Final Amount: " << paidAmount - discount << endl;
        } else {
            cout << "No discount granted." << endl;
        }
    }
};

int main() {
    Customer c;
    c.getData("John", "Laptop", 25000);
    c.display();
    return 0;
}
