//Constructor and Destructor Demonstration

#include <iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor is called." << endl;
    }

    ~Sample() {
        cout << "Destructor is called." << endl;
    }
};

int main() {
    cout << "Main starts" << endl;
    Sample obj;
    cout << "Inside main function." << endl;
    return 0;
}
