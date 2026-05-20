//WAP using constant qulifier.

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    const int x = 10;
    //x = 20; // Error: x is constant
    cout << "Constant value: " << x << endl;
    getch();
    return 0;
}
