#include<iostream>
using namespace std;

int main()
{
    double current_cgpa;
    double desired_cgpa;
    double needed_sgpa;
    
    cout << "Welcome to the CGPA Calculator!" << endl;
    
    // Input current CGPA
    cout << "Enter your current CGPA: ";
    while (!(cin >> current_cgpa) || current_cgpa < 0 || current_cgpa > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid CGPA (0-10): ";
    }
    
    // Input desired CGPA
    cout << "Enter your desired CGPA: ";
    while (!(cin >> desired_cgpa) || desired_cgpa < 0 || desired_cgpa > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid CGPA (0-10): ";
    }
    needed_sgpa = ((desired_cgpa * 232) - (112 * current_cgpa)) / 120;
    if (desired_cgpa > 10) {
        cout << "NOT POSSIBLE! AUKAAT ME REH DALLE\n";
    } else if (desired_cgpa < current_cgpa) {
        cout << "PADHAI CHOD DE!\n";
    } else {
        cout << "SGPA needed for next 4 semesters: " << needed_sgpa << endl;
    }

    cout << "Thank you for using the CGPA Calculator!" << endl;
    
    return 0;
}
