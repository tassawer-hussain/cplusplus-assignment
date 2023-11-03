// Problem 04:
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
    int i = 0;
    int j;
    while (i < 11) {
        j = 0;
        while (j < 11) {
            if (j == 0 || j == 10) {
                cout << "*";
            } else {
                if (j == i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}