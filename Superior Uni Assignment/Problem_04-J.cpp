// Problem 04:
// Pattern J

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********


#include<iostream>

using namespace std;
int main() {
    int i = 0;
    int j;
    while (i < 11) {
        j = 0;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
