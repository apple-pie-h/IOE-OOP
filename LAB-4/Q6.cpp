//Create two classes: Distance1 with data members feet and inch and Distance2 with data members m and cm. 
//WAP to convert object of Distance1 to Distance2. (1m = 3.28 feet)


#include <iostream>
using namespace std;
class Distance2;
class Distance1 {
int feet;
float inch;
public:
Distance1(int f = 0, float i = 0.0) : feet(f), inch(i) {}
friend class Distance2;
};
class Distance2 {
int meters;
float cm;
public:
Distance2() : meters(0), cm(0.0) {}
Distance2(Distance1 d1) {
float totalFeet = d1.feet + d1.inch / 12;
float totalMeters = totalFeet / 3.28;
meters = (int)totalMeters;
cm = (totalMeters - meters) * 100;
}
void display() {
cout << meters << " meters " << cm << " centimeters\n";
}
};
int main() {
Distance1 d1(6, 6);
Distance2 d2 = d1;
d2.display();
return 0;
}
