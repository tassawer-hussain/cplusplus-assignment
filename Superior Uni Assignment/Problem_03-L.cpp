// Problem 03:
// Pattern L

// ***********
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
// ***********

#include <iostream>

using namespace std;
int main() {
    int o = 0;
    for (int i = 6; i > 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int h = 1; h < o; h++) {
            cout << " ";
        }
        o = o + 2;
        if (i == 6) {
            for (int k = 0; k <= i - 1; k++) {
                cout << "*";
            }
        } else {
            for (int k = 0; k <= i; k++) {
                cout << "*";
            }
        }
        cout << endl;
    }
    o = 0;
    for (int i = 1; i <= 7; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        for (int h = 11; h > o; h--) {
            cout << " ";
        }
        o = o + 2;
        if (i == 7) {
            for (int k = 0; k <= i - 2; k++) {
                cout << "*";
            }
        } else {
            for (int k = 0; k <= i - 1; k++) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}