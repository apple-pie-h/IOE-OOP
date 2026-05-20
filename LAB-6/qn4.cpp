//wap using dynamic_cast and typeid operators to illustrate RTTI.

#include <iostream>
#include <typeinfo>  // for typeid

using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class\n";
    }
    virtual ~Base() {}  
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class\n";
    }

    void derived1Function() {
        cout << "Function specific to Derived1\n";
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class\n";
    }

    void derived2Function() {
        cout << "Function specific to Derived2\n";
    }
};

int main() {
    Base* basePtr;

    Derived1 d1;
    Derived2 d2;

    basePtr = &d1;  

    cout << "Using typeid:\n";
    cout << "Type of *basePtr: " << typeid(*basePtr).name() << endl;
    cout << "Type of d1: " << typeid(d1).name() << endl;

    cout << "\nUsing dynamic_cast:\n";
    if (Derived1* d1Ptr = dynamic_cast<Derived1*>(basePtr)) {
        cout << "Successfully casted to Derived1\n";
        d1Ptr->derived1Function();
    } else {
        cout << "Failed to cast to Derived1\n";
    }

    if (Derived2* d2Ptr = dynamic_cast<Derived2*>(basePtr)) {
        cout << "Successfully casted to Derived2\n";
        d2Ptr->derived2Function();
    } else {
        cout << "Failed to cast to Derived2\n";
    }

    return 0;
}

