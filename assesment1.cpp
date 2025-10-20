#include <iostream>
using namespace std;

double magnitude;

int main() {
//collect the magnitude of the earthquake from the user
    cout << "Enter the magnitude of the earthquake using the ricter scales reading: ";
    cin >> magnitude;
//determine and output the classification of the earthquake based on its magnitude
    if (magnitude < 2.0 && magnitude > 0.0) {
        cout << "Micro earthquake." << endl;
    }
    else if (magnitude > 2.0 && magnitude < 3.0) {
        cout << "Very minor earthquake." << endl;
    }
    else if (magnitude > 3.0 && magnitude < 4.0) {
        cout << "Minor earthquake." << endl;
    }
    else if (magnitude > 4.0 && magnitude < 5.0) {
        cout << "Light earthquake." << endl;
    }
    else if (magnitude > 5.0 && magnitude < 6.0) {
        cout << "Moderate earthquake." << endl;
    }
    else if (magnitude > 6.0 && magnitude < 7.0) {
        cout << "Strong earthquake." << endl;
    }
    else if (magnitude > 7.0 && magnitude < 8.0) {
        cout << "Major earthquake." << endl;
    }
    else if (magnitude > 8.0 && magnitude < 10.0) {
        cout << "Great earthquake." << endl;
    }
    else if (magnitude > 10.0) {
        cout << "Meteoric earthquake." << endl;
    }
    else if (magnitude <= 0.0) {
        cout << "Invalid magnitude entered." << endl;
    }
    else;
    return 0;
}