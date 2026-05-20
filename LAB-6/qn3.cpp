//WAP to illustrate concept of base class pointer and derived class pointers 

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    Base* basePtr;
    Derived* derivedPtr;

    basePtr = &b;
    basePtr->show();    

    basePtr = &d;
    basePtr->show();     

    derivedPtr = &d;
    derivedPtr->show(); 

    return 0;
}

