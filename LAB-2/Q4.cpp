//employee class: array of objects


#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string address;
    int age;
    float salary;

public:
    void read() {
        cout << "Enter Name, Address, Age and Salary:\n";
        cin >> ws;  // clear input buffer
        getline(cin, name);
        getline(cin, address);
        cin >> age >> salary;
    }

    void display() {
        cout << "Name: " << name << ", Address: " << address
             << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp[10];

    cout << "Enter details of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].read();
    }

    cout << "\nDetails of Employees:\n";
    for (int i = 0; i < 10; i++) {
        emp[i].display();
    }

    return 0;
}

