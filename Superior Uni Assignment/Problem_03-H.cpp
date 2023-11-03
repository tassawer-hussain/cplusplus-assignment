// problem 03:
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
    for (int i = 6; i > 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        for (int h = 1; h < o; h++) {
            cout << "*";
        }
        o = o + 2;
        cout << endl;
    }
    o = 0;
    for (int i = 1; i <= 7; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int h = 11; h > o; h--) {
            cout << "*";
        }
        o = o + 2;
        cout << endl;
    }
    return 0;
}

