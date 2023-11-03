// Problem No 14:

// Write a function to obtain the first n numbers of Fibonacci sequence.
// Where n will be taken from user in main().
// In a Fibonacci sequence the sum of two successive terms gives the third term.
// Example: 1 1 2 3 5 8 13 21 34 �


#include<iostream>

using namespace std;

int main() {
    int num1 = 1;
    int num2 = 1;
    int num;
    int input;

    cout << "Enter a number For getting Fibonacci Number: ";
    cin >> input;

    while (input < 0) {
        cout << "Enter a number For getting Fibonacci Number: ";
        cin >> input;
    }

    while (input > 0) {
        cout << num1 << " ";
        int temp = num1;
        num1 = num2;
        num2 = temp + num2;
        input--;
    }
    cout << endl;
    return 0;
}

