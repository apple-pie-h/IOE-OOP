//Rethrowing an Exception

#include <iostream>
using namespace std;

void check(int x) {
    try {
        if (x < 0)
            throw x;
    } catch (int e) {
        cout << "Caught in function, rethrowing..." << endl;
        throw;
    }
}

int main() {
    try {
        check(-1);
    } catch (int e) {
        cout << "Caught in main: " << e << endl;
    }
    return 0;
}
