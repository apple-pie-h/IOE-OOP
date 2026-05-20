//constructors and destructors
//multiple inheritance

#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor called." << endl;
    }
    ~Base1() {
        cout << "Base1 destructor called." << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor called." << endl;
    }
    ~Base2() {
        cout << "Base2 destructor called." << endl;
    }
};

class DerivedMulti : public Base1, public Base2 {
public:
    DerivedMulti() {
        cout << "DerivedMulti constructor called." << endl;
    }
    ~DerivedMulti() {
        cout << "DerivedMulti destructor called." << endl;
    }
};

int main() {
    cout << "\nMultiple Inheritance:" << endl;
    DerivedMulti dm;
    return 0;
}

