//WAP to convert meter into a type of class Distance with data members feet and inches.
//(Meter to feet formula: feet = m × 3.280833)


#include <iostream>
using namespace std;
class Distance {
int feet;
float inches;
public:
Distance() : feet(0), inches(0.0) {}
Distance(float meters) {
float totalFeet = meters * 3.280833;
feet = (int)totalFeet;
inches = (totalFeet - feet) * 12;
}
void display() {
cout << feet << " feet " << inches << " inches\n";
}
};
int main() {
float meters = 3;
Distance d = meters; // Implicit conversion
d.display();
return 0;
}
