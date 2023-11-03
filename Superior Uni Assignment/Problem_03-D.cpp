// Problem 03:
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

    for (int i = 1; i <= n; i++) // i==0
    {
        if (i == 1 || i == 11) {
            for (int j = 1; j <= n; j++) {
                if (j == 6)
                    cout << "*";
                else
                    cout << "  ";
            }
            cout << endl;
        } else if (i == 2 || i == 10) {
            for (int j = 1; j <= n; j++) {
                if (j == 5 || j == 7)
                    cout << "*";
                else
                    cout << "  ";
            }
            cout << endl;
        } else if (i == 3 || i == 9) {
            for (int j = 1; j <= n; j++) {
                if (j == 4 || j == 8)
                    cout << "*";
                else
                    cout << "  ";
            }
            cout << endl;
        } else if (i == 4 || i == 8) {
            for (int j = 1; j <= n; j++) {
                if (j == 3 || j == 9)
                    cout << "*";
                else
                    cout << "  ";
            }
            cout << endl;
        } else if (i == 5 || i == 7) {
            for (int j = 1; j <= n; j++) {
                if (j == 2 || j == 10)
                    cout << "*";
                else
                    cout << "  ";
            }
            cout << endl;
        } else if (i == 6) {
            for (int j = 1; j <= n; j++) {
                if (j == 1 || j == 11)
                    cout << "*";
                else
                    cout << "  ";
            }
            cout << endl;
        } else // not set => pattern change
        {
            cout << "  ";
        }
    }
    return 0;
}
