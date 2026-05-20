//repeat Q3 using concept of class and objects

#include <iostream>
using namespace std;

class Shape {
public:
    float area(float side) {
        return side * side;
    }

    float area(float length, float breadth) {
        return length * breadth;
    }

    float area(float base, float height, int) {
        return 0.5 * base * height;
    }
};

int main() {
    Shape s;
    cout << "Area of square: " << s.area(5.0f) << endl;
    cout << "Area of rectangle: " << s.area(5.0f, 3.0f) << endl;
    cout << "Area of triangle: " << s.area(4.0f, 6.0f, 0) << endl;
    return 0;
}
