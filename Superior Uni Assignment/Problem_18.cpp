// Problem No 18:

// Write a program to create a dynamic array of float type of size n,
// where n will be entered from user.
// Then sort this array using Bubble sort method
// and display the sorted data.

#include<iostream>

using namespace std;
int main() {
    float * f;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    f = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the values: ";
        cin >> f[i];
    }
    float temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (f[j] > f[j + 1]) {
                cout << "E" << endl;
                temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "The value is: ";
        cout << f[i];
        cout << endl;
    }
    return 0;
}
