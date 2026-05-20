//WAP using class and objects, use the member functions to initialize the class data members.

#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    void initialize(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.initialize(1, "Hari");
    s.display();
    return 0;
}
