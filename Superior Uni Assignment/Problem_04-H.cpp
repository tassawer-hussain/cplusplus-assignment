// problem 04:
// Pattern H

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *


#include<iostream>

using namespace std;
int main() {
    int o = 0;
    int i = 6;
    int h;
    int j;
    while (i > 0) {
        j = 0;
        while (j <= i) {
            cout << " ";
            j++;
        }
        h = 1;
        while (h < o) {
            cout << "*";
            h++;
        }
        o = o + 2;
        cout << endl;
        i--;
    }
    o = 0;
    i = 1;
    while (i <= 7) {
        j = 0;
        while (j < i) {
            cout << " ";
            j++;
        }
        h = 11;
        while (h > o) {
            cout << "*";
            h--;
        }
        o = o + 2;
        cout << endl;
        i++;
    }
    return 0;
}