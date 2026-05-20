//multiple and multilevel

#include <iostream>
using namespace std;

// Base Class
class Students {
protected:
    int roll;

public:
    void sgets() {
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void sdisplay() {
        cout << "Roll Number: " << roll << endl;
    }
};

// Derived Class 1 using virtual inheritance
class Test : virtual public Students {
protected:
    string name;

public:
    void tget() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
    }

    void tdisplay() {
        cout << "Name: " << name << endl;
    }
};

// Derived Class 2 using virtual inheritance
class Sports : virtual public Students {
protected:
    float price;

public:
    void ssgets() {
        cout << "Enter sports fees: ";
        cin >> price;
    }

    void ssdisplay() {
        cout << "Sports Fees: " << price << endl;
    }
};

// Result inherits from both Test and Sports
class Result : public Test, public Sports {
private:
    float fee;

public:
    void rget() {
        cout << "Enter total fee: ";
        cin >> fee;
    }

    void rdisplay() {
        cout << "--- Student Result ---" << endl;
        sdisplay();       // from Students
        tdisplay();       // from Test
        ssdisplay();      // from Sports
        cout << "Total Fee: " << fee << endl;
    }
};

// Main function
int main() {
    Result r;

    r.sgets();      // From Students
    r.tget();       // From Test
    r.ssgets();     // From Sports
    r.rget();       // From Result

    cout << "\nDisplaying All Information:\n";
    r.rdisplay();

    return 0;
}


