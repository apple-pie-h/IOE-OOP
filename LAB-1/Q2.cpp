/*WAP to define enumerator with your choice. Instead of default value assign your own integer value*/

#include <iostream>
#include<conio.h>
using namespace std;

enum Days { MON = 1, TUE, WED = 5, THU, FRI };

int main() {
    Days today = WED;
    cout << "The value of WED is: " << today << endl;
    return 0;
}
