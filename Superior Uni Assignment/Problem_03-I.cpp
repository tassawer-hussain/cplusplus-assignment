// Problem 03:
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
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            if (i == 0 || i == 5 || i == 10 || j == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
