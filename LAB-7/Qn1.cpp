//Swap values using function template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "Swapped int: " << x << " " << y << endl;

    float f1 = 1.1, f2 = 2.2;
    swapValues(f1, f2);
    cout << "Swapped float: " << f1 << " " << f2 << endl;
    return 0;
}
