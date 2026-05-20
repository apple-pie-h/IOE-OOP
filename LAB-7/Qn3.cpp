//Template Function Overloading

#include <iostream>
using namespace std;

template <typename T>
void print(T a) {
    cout << "Template: " << a << endl;
}

void print(int a) {
    cout << "Ordinary: " << a << endl;
}

int main() {
    print(5);         // Calls ordinary function
    print(5.5);       // Calls template
    print("Test");    // Calls template
    return 0;
}
