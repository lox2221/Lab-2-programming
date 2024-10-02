#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter the year: ";
    cin >> year;

     int leapYearStatus = 0; 

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        leapYearStatus = 1;
    }

    switch (leapYearStatus) {
        case 0:
            cout << year << " is'n a leap year." << endl;
            break;
        case 1:
            cout << year << " is a leap year." << endl;
            break;
        default:
            cout << "Try again." << endl;
            break;
    }

    return 0;
}
