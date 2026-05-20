//class template 


#include <iostream>
using namespace std;

template <class T>
class Box {
    T value;
public:
    void setValue(T v) { value = v; }
    T getValue() { return value; }
};

int main() {
    Box<int> intBox;
    intBox.setValue(42);
    cout << "Int value: " << intBox.getValue() << endl;

    Box<string> strBox;
    strBox.setValue("Hello");
    cout << "String value: " << strBox.getValue() << endl;
    return 0;
}
