// Problem 04:
// Pattern D

//           *
//         *   *
//       *       *
//     *           *
//   *               *
//     *           *
//       *       *
//         *   *
//           *


#include<iostream>

using namespace std;

int main() {
    const int n = 11;

    int i = 1;
    while (i <= n) {
        if (i == 1 || i == 11) {
            int j = 1;
            while (j <= n) {
                if (j == 6)
                    cout << "*";
                else
                    cout << "  ";
                j++;
            }
            cout << endl;
        } else if (i == 2 || i == 10) {
            int j = 1;
            while (j <= n) {
                if (j == 5 || j == 7)
                    cout << "*";
                else
                    cout << "  ";
                j++;
            }
            cout << endl;
        } else if (i == 3 || i == 9) {
            int j = 1;
            while (j <= n) {
                if (j == 4 || j == 8)
                    cout << "*";
                else
                    cout << "  ";
                j++;
            }
            cout << endl;
        } else if (i == 4 || i == 8) {
            int j = 1;
            while (j <= n) {
                if (j == 3 || j == 9)
                    cout << "*";
                else
                    cout << "  ";
                j++;
            }
            cout << endl;
        } else if (i == 5 || i == 7) {
            int j = 1;
            while (j <= n) {
                if (j == 2 || j == 10)
                    cout << "*";
                else
                    cout << "  ";
                j++;
            }
            cout << endl;
        } else if (i == 6) {
            int j = 1;
            while (j <= n) {
                if (j == 1 || j == 11)
                    cout << "*";
                else
                    cout << "  ";
                j++;
            }
            cout << endl;
        } else {
            cout << "  ";
        }
        i++;
    }
    return 0;
}

