// Problem 04:
// pattern F

// *         *
// **       **
// * *     * *
// *  *   *  *
// *   * *   *
// *    *    *
// *   * *   *
// *  *   *  *
// * *     * *
// **       **
// *         *



#include<iostream>

using namespace std;
int main() {
    int i = 0;
    int j;
    while (i < 11) {
        j = 0;
        while (j < 11) {
            if (j == 0 || j == 10) {
                cout << "*";
            } else {
                if (i == j) {
                    cout << "*";
                } else {
                    if (i == 1 && j == 9) {
                        cout << "*";
                    } else if (i == 2 && j == 8) {
                        cout << "*";
                    } else if (i == 3 && j == 7) {
                        cout << "*";
                    } else if (i == 4 && j == 6) {
                        cout << "*";
                    } else if (i == 6 && j == 4) {
                        cout << "*";
                    } else if (i == 7 && j == 3) {
                        cout << "*";
                    } else if (i == 8 && j == 2) {
                        cout << "*";
                    } else if (i == 9 && j == 1) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }

            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

