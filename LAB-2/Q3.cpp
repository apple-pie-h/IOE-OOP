//Distance class

#include <iostream>
using namespace std;

class Distance {
private:
    int meter, centimeter;

public:
    void read() {
        cout << "Enter meters and centimeters: ";
        cin >> meter >> centimeter;
    }

    void display() {
        cout << meter << " meters and " << centimeter << " centimeters" << endl;
    }

    void add(Distance d1, Distance d2) {
        centimeter = d1.centimeter + d2.centimeter;
        meter = d1.meter + d2.meter + (centimeter / 100);
        centimeter = centimeter % 100;
    }
};

int main() {
    Distance d1, d2, d3;
    cout << "Enter first distance:\n";
    d1.read();

    cout << "Enter second distance:\n";
    d2.read();

    d3.add(d1, d2);

    cout << "Resultant Distance: ";
    d3.display();

    return 0;
}
