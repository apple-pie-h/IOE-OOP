//Multiple Exception Handling

#include <iostream>
using namespace std;

int main() {
    try {
        int age = -1;
        if (age < 0)
            throw age;
        else if (age < 18)
            throw string("Underage");
    } catch (int e) {
        cout << "Negative age: " << e << endl;
    } catch (string s) {
        cout << "Error: " << s << endl;
    }
    return 0;
}
