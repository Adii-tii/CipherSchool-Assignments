#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    char grade;

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    cout << "Grade: " << grade << endl;

    return 0;
}
