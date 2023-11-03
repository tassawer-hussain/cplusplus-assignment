// Problem No 10:

// Write a function to calculate the factorial value
// of any integer entered through the keyboard.


#include<iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter number for finding Factorial: ";
    cin >> num;
    int input = num;
    int fact = 1;

    while (num >= 1) {
        fact = fact * num;
        num--;
    }

    cout << "The Factorial of " << input << " is " << fact << endl;
    return 0;
}