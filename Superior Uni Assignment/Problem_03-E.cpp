// Problem 03:
// Pattern E

// *          *
// **         *
// * *        *
// *  *       *
// *   *      *
// *    *     *
// *     *    *
// *      *   *
// *       *  *
// *        * *
// *         ** 
// *          *

#include<iostream>

using namespace std;
int main() {
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            if (j == 0 || j == 10) {
                cout << "*";
            } else {
                if (j == i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
