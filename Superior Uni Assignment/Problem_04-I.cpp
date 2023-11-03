// Problem 04:
// Pattern I

// *************
// *
// *
// *
// *
// *************
// *
// *
// *
// *
// *************



#include<iostream>

using namespace std;
int main() {
    int s = 0;
    int i = 0;
    int j;
    while (i < 11) {
        j = 0;
        while (j < 11) {
            if (i == 0 || i == 5 || i == 10 || j == 0) {
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