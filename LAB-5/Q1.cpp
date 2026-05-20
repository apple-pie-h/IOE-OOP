//multilevel inheritance

#include <iostream>
using namespace std;

// Base class
class Parent1 {
protected:
    string name;
    string address;

public:
    void getdata() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
    }

    void outdata() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

// First derived class
class Child1 : public Parent1 {
protected:
    int roll;
    long long phone;

public:
    void get() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter phone number: ";
        cin >> phone;
        cin.ignore(); // Clear newline left by cin
    }

    void put() {
        cout << "Roll Number: " << roll << endl;
        cout << "Phone Number: " << phone << endl;
    }
};

// Second derived class (from Child1)
class Child2 : public Child1 {
private:
    int age;
    float price;

public:
    void takedata() {
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "Age: " << age << endl;
        cout << "Price: " << price << endl;
    }
};

// Main function
int main() {
    Child2 obj;

    // Call all input methods
    obj.getdata();    // From Parent1
    obj.get();        // From Child1
    obj.takedata();   // From Child2

    cout << "\n--- Displaying Data ---\n";
    obj.outdata();    // From Parent1
    obj.put();        // From Child1
    obj.display();    // From Child2

    return 0;
}

