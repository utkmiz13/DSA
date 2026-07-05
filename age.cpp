#include <bits/stdc++.h>
using namespace std;

int main() {
    int birthYear, currentYear;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter current year: ";
    cin >> currentYear;

    int age = currentYear - birthYear;

    cout << "\nYour age is: " << age << " years\n";

    cout << "\nAge till now:\n";

    // For loop
    for (int i = 1; i <= age; i++) {
        cout << "Year " << i << endl;
    }

    cout << "\nYou have completed " << age << " years of life.";

    return 0;
}