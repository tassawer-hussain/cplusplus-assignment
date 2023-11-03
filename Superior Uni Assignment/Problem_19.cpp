// Problem No 19:

// Write a program which performs the following tasks.
// Initialize a dynamic array of n elements in main().
// Pass the entire array to a function modify().
// In modify() multiply each element of array by 3.
// Return the control to main() and
// print the new array elements in main().



#include<iostream>

using namespace std;
int * modify(int p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i] = p[i] * 3;
    }
    return p;
}
int main() {
    int * p, * q;
    int n;
    cout << "Enter the size:";
    cin >> n;
    p = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter value:";
        cin >> p[i];
        cout << endl;
    }
    q = modify(p, n);
    for (int j = 0; j < n; j++) {
        cout << * (q + j);
        cout << endl;
    }
    return 0;
}
