//Single Catch for Multiple Exceptions

#include <iostream>
using namespace std;

int main() {
    try {
        int x = -5;
        if (x < 0)
            throw runtime_error("Negative value not allowed");
    } catch (exception &e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}
