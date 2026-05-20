// illustrate overloading of a function template with an ordinary function

#include <iostream>
using namespace std;

// Ordinary function
void display(int x) {
    cout << "Ordinary function called with int: " << x << endl;
}

// Function template
template <typename T>
void display(T x) {
    cout << "Template function called with generic type: " << x << endl;
}

int main() {
    display(5);        // Will call the ordinary function (exact match for int)
    display(5.5);      // Will call the template function (no exact match for double)
    display('A');      // Will call the template function (no exact match for char)
    return 0;
}
