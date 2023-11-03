// Problem No 9:

// Write a program to display the following output.
//          1
//         1 1
//        1 2 1
//       1 3 3 1
//      1 4 6 4 1

#include<iostream>

using namespace std;
int main() {
    int o = 1;
    for (int i = 6; i > 2; i--) {
        if (i & 2 == 0) {
            for (int j = 0; j <= i - 3; j++) {
                cout << "   ";
            }
        } else {
            for (int j = 0; j <= i - 3; j++) {
                cout << "*  ";
            }
        }
        for (int h = 1; h <= o; h++) {
            if (h == 1 || h == o) {
                cout << " 1 ";
            } else if (h == 2 && i == 5) {
                cout << " 2 ";
            } else if ((h == 2 || h == 3) && i == 4) {
                cout << " 3 ";
            } else if ((h == 2 || h == 4) && i == 3) {
                cout << " 4 ";
            } else if (h == 3 && i == 3) {
                cout << " 6 ";
            } else {
                cout << " ";
            }
        }
        o = o + 2;
        cout << endl;
    }
    return 0;
}
