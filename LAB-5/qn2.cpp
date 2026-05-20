//single inheritance


#include <iostream>
using namespace std;

// Base class
class Cricketer {
protected:
    string name;
    int age;
    int matches;

public:
    void getdata() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of matches played: ";
        cin >> matches;
        cin.ignore(); // Clear newline
    }

    void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matches << endl;
    }
};

// Derived class - Bowler
class Bowler : public Cricketer {
private:
    int wickets;

public:
    void getBowlerData() {
        getdata();
        cout << "Enter number of wickets taken: ";
        cin >> wickets;
        cin.ignore(); // Clear newline
    }

    void displayBowlerData() {
        displaydata();
        cout << "Wickets Taken: " << wickets << endl;
    }
};

// Derived class - Batsman
class Batsman : public Cricketer {
private:
    int runs;
    int centuries;

public:
    void getBatsmanData() {
        getdata();
        cout << "Enter total runs scored: ";
        cin >> runs;
        cout << "Enter number of centuries: ";
        cin >> centuries;
        cin.ignore(); // Clear newline
    }

    void displayBatsmanData() {
        displaydata();
        cout << "Runs Scored: " << runs << endl;
        cout << "Centuries: " << centuries << endl;
    }
};

// Main function
int main() {
    Bowler bowler;
    Batsman batsman;

    cout << "\n--- Enter Bowler Data ---\n";
    bowler.getBowlerData();

    cout << "\n--- Enter Batsman Data ---\n";
    batsman.getBatsmanData();

    cout << "\n--- Bowler Information ---\n";
    bowler.displayBowlerData();

    cout << "\n--- Batsman Information ---\n";
    batsman.displayBatsmanData();

    return 0;
}

