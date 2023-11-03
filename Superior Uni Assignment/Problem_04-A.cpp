// Problem 04:
// Pattern A

// * * * * * * * * * *
// *                 *
// *                 *
// *                 *
// *                 *
// *                 *
// *                 *
// * * * * * * * * * *


#include<iostream>

using namespace std;
int main() {
    int i = 0;
    while (i < 11) {
        int j = 0;
        while (j < 11) {
            if (i == 0 || i == 10 || j == 0 || j == 10) {
                cout << "*";
            } else {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
