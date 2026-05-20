//WAP to add 3 integers using function and illustrating the concept of default arguments

#include <iostream>
using namespace std;

int add(int a, int b = 0, int c = 0) {
    return a + b + c;
}

int main() {
    cout << "Sum (1 arg): " << add(5) << endl;
    cout << "Sum (2 args): " << add(5, 10) << endl;
    cout << "Sum (3 args): " << add(5, 10, 15) << endl;
    return 0;
}
