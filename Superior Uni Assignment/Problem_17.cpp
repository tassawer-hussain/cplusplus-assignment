// Problem No 17:

// Write a program to ask the user to input the size of array of integer type
// then write a function to take input in this array and
// another function to display the entered numbers in this array.


#include<iostream>

using namespace std;
int * input(int p[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the values ";
        cin >> p[i];
        cout << endl;
    }
    return p;
}
void output(int p[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "The value is: ";
        cout << p[i];
        cout << endl;
    }
}
int main() {
    int * p, * q;
    int n;
    cout << "Enter the size";
    cin >> n;
    p = new int[n];
    q = input(p, n);
    output(q, n);
    return 0;
}
