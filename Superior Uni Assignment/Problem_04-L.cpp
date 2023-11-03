// Problem 04:
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
    int i = 6;
    int j, h, k;
    while (i > 0) {
        j = 0;
        while (j <= i) {
            cout << "*";
            j++;
        }
        h = 1;
        while (h < o) {
            cout << " ";
            h++;
        }
        o = o + 2;
        if (i == 6) {
            k = 0;
            while (k <= i - 1) {
                cout << "*";
                k++;
            }
        } else {
            k = 0;
            while (k <= i) {
                cout << "*";
                k++;
            }
        }
        cout << endl;
        i--;
    }
    o = 0;
    i = 1;
    while (i <= 7) {
        j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        h = 11;
        while (h > o) {
            cout << " ";
            h--;
        }
        o = o + 2;
        if (i == 7) {
            k = 0;
            while (k <= i - 2) {
                cout << "*";
                k++;
            }
        } else {
            k = 0;
            while (k <= i - 1) {
                cout << "*";
                k++;
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}

