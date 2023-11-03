// Problem 03:
// Pattern K

// *********
//  ********
//   *******
//    ******
//     *****
//      ****
//       ***
//        **
//         *


#include<iostream>

using namespace std;
int main() {
    for (int i = 11; i > 0; i--) {
        for (int k = 1; k <= 11 - i; k++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

