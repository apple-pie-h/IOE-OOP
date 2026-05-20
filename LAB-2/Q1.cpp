// Box Class: Constructor and Volume Calculation


#include <iostream>
using namespace std;

class Box {
private:
    float length, breadth, height;

public:
    // Constructor
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Function to calculate volume
    float volume() {
        return length * breadth * height;
    }
};

int main() {
    Box b(2.3f, 4.5f, 6.7f);
    cout << "Volume of box: " << b.volume() << endl;
    return 0;
}

