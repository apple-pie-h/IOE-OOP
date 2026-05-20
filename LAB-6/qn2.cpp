//repeat qn 1 to illustrate virtual function 
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound()=0; //pure virtual
    
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
 a->makeSound();

    a = &c;
    a->makeSound();

    return 0;
}
