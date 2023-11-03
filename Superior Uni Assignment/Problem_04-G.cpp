// Problem 04:
// Pattern G

//            *
//           **
//          ***
//         ****
//        *****
//       ******
//      *******
//     ********
//    *********
//   **********
//  ***********
// ************

#include<iostream>

using namespace std;
int main() {
    int i = 1;
    int k;
    int j;
    while (i <= 11) {
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
        i++;
    }
    return 0;
}

