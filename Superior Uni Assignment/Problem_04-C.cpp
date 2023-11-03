// Problem 04:
// Pattern C

// ********
// *******
// ******
// *****
// ****
// ***
// **
// *


#include<iostream>

using namespace std;
int main() {
    int i = 11;
    int j;
    while (i > 0) {
        j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }
    return 0;
}

