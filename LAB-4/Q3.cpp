//Repeat program 1 using friend function.

#include <iostream>
using namespace std;
class Counter {
int count;
public:
Counter() : count(0) {}
void display() {
cout << "Count: " << count << endl;
}
friend Counter operator++(Counter &c);
};
Counter operator++(Counter &c) {
++c.count;
return c;
}
int main() {
Counter c;
++c;
c.display();
return 0;
}

