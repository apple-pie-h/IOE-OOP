//WAP to find area of a square, rectangle and triangle with function overloading
//without using class

#include <iostream>
using namespace std;

float area(float side) {
    return side * side;
}

float area(float length, float breadth) {
    return length * breadth;
}

float area(float base, float height, int) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of square: " << area(5.0f) << endl;
    cout << "Area of rectangle: " << area(5.0f, 3.0f) << endl;
    cout << "Area of triangle: " << area(4.0f, 6.0f, 0) << endl;
    return 0;
}
