//Define a class Distance with data members meters and centimeters and appropriate function members.
//Overload binary plus operator to use for addition of two objects of the class using member function.


#include <iostream>
using namespace std;
class Distance {
int meters, centimeters;
public:
Distance(int m = 0, int cm = 0) {
meters = m;
centimeters = cm;
}
Distance operator+(Distance d) {
int total_cm = centimeters + d.centimeters;
int m = meters + d.meters + total_cm / 100;
int cm = total_cm % 100;
return Distance(m, cm);
}
void display() {
cout << meters << " meters " << centimeters << " centimeters\n";
}
};
int main() {
Distance d1(2, 80), d2(1, 50), d3;
d3 = d1 + d2;
d3.display();
return 0;
}
