// Problem No 12:

// A positive integer is entered through the keyboard.
// Write a function to obtain the prime factors of this number.
// For example, prime factors of 24 are 2, 2, 2 and 3,
// whereas prime factors of 35 are 5 and 7.




#include<iostream>

using namespace std;

void Factor(int);

int main() {
    int num;
    cout << "Enter a number to find its Prime Factors: ";
    cin >> num;

    while (num < 0) {
        cout << "Enter a number to find its Prime Factors: ";
        cin >> num;
    }

    Factor(num);
    int num1;
    cin >> num1;
    return 0;
}

void Factor(int a) {
    int count = 0;
    int loop = a;
    for (int i = 1; i < loop; i++) // loop to increase the number
    {
        count = 0; // reset the count
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) // divide the num and check the remainder
            {
                count++; // increment the count if remainder is equal to zero
            }
        }
        if (count == 2) // compare the count
        {
            while (a % i == 0) {
                cout << i << ", ";
                a /= i;
            }
        }
    }
}



/*
while (a % 2 == 0) {
    cout << "2, ";
    a /= 2;
}

while (a % 3 == 0) {
    cout << "3, ";
    a /= 3;
}

while (a % 5 == 0) {
    cout << "5, ";
    a /= 5;
}

while (a % 7 == 0) {
    cout << "7, ";
    a /= 7;
}
*/