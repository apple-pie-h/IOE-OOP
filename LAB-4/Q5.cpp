//WAP to convert object of class with data members feet and inches to meter.


#include <iostream>
using namespace std;
class Distance {
int feet;
float inches;
public:
Distance(int f, float i) : feet(f), inches(i) {}
operator float() {
float totalFeet = feet + (inches / 12);
return totalFeet / 3.280833;
}
};
int main() {
Distance d(3, 6);
float meters = d; // Conversion to float
cout << "Meters = " << meters << endl;
return 0;
}
