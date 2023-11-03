// Problem No 7

// Write a program to add first seven terms of the following series
// using loop:
// 1/1! + 2/2! + 3/3!�
// Try to use the User define function for Factorial of different values.


int factorial(int); // prototype of the factorial function

#include<iostream>

using namespace std;

int main() {
    float sum = 0.0; // variable to acumulate the ans
    for (double i = 1; i < 8; i++) {
        // divide the num with its factorial and store the ans in sum
        sum = sum + i / factorial(i);
    }

    // cout the result :)
    cout << "The sum of the first seven Terms Of the Given series is " << sum << endl;
    return 0;
}

int factorial(int a) // implementation of the function
{
    int product = 1; // use to accumulate the product
    while (a > 1) {
        product = product * a;
        a--;
    }
    return product; // return the factorial ans
}