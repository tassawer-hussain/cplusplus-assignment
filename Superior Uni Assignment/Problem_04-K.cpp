// Problem 04:
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
    int i = 11;
    int k, j;
    while (i > 0) {
        k = 1;
        while (k <= 11 - i) {
            cout << " ";
            k++;
        }
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

