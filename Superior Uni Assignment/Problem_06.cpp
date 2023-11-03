// Problem No 6:

// Write a program to print all prime numbers from 1 to 300.

#include<iostream>

using namespace std;

int main() {
    int count = 0; // use to count number of divisor
    cout << " Prime Number Betweeen 1 And 300 are ";

    for (int i = 1; i < 300; i++) // loop to increase the number
    {
        count = 0; // reset the count
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) // divide the num and check the remainder
            {
                count++; // increment the count if remainder is equal to zero
            }
        }
        if (count == 1) // compare the count
        {
            cout << i << " "; // cout the Prime number having 1 divisor that is 1
        }
    }
    cout << endl;

    return 0;
}