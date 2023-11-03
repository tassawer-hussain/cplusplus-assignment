// Problem No 5:

// Write a program to enter the numbers till the user wants
// and at the end it should display the count of positive,
// negative and zeros entered.

#include<iostream>

using namespace std;

int main() {
    char opt = 'Y'; // Char variable for storing user choice
    int input; // variable use for input
    int RunningSum = 0; // variable in which  total inputs are added
    int count = 0; // to count the number of inputs

    do {
        // prompt the use to enter input
        cout << "Enter Number which is to be added in the running Sum: ";
        cin >> input; // inout store in input variable
        cout << endl;

        RunningSum += input; // add the input into the runningSum Variable
        count++; // increase the count

        // determine user choice
        cout << "Want to Add another Number? Enter Y for Yes/ N for No. ";
        cin >> opt;
        cout << endl;
    }
    while (opt == 'Y' || opt == 'y');

    // Show number of input user insert
    cout << "Total Numbers You Added Are " << count << endl;

    // show the result of suer input
    cout << "The Total Sum Of the Numbers You Input Is " << RunningSum << endl;
    return 0;
}