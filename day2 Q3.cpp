#include <iostream>
using namespace std;

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    int monthNumber;
    cout << "Enter a number: ";
    cin >> monthNumber;

    switch (monthNumber) {
        case January:
            cout << "The month is: January" << endl;
            break;
        case February:
            cout << "The month is: February" << endl;
            break;
        case March:
            cout << "The month is: March" << endl;
            break;
        case April:
            cout << "The month is: April" << endl;
            break;
        case May:
            cout << "The month is: May" << endl;
            break;
        case June:
            cout << "The month is: June" << endl;
            break;
        case July:
            cout << "The month is: July" << endl;
            break;
        case August:
            cout << "The month is: August" << endl;
            break;
        case September:
            cout << "The month is: September" << endl;
            break;
        case October:
            cout << "The month is: October" << endl;
            break;
        case November:
            cout << "The month is: November" << endl;
            break;
        case December:
            cout << "The month is: December" << endl;
            break;
        default:
            cout << "Invalid month number" << endl;
    }

    return 0;
}
