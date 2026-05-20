//function overriding 

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal speaks." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Function overriding
    void speak() {
        cout << "Dog barks." << endl;
    }
};

// Main function
int main() {
    Animal a;
    Dog d;

    cout << "--- Base Class Call ---" << endl;
    a.speak();  // Calls Animal's speak()

    cout << "--- Derived Class Call ---" << endl;
    d.speak();  // Calls Dog's overridden speak()

    return 0;
}

