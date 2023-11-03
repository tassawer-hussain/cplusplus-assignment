// Problem No 13:

// Write a function that receives 5 integers and
// returns the sum, average and standard deviation of these numbers.
// Call this function from main() and print the result in main().



#include<iostream>

#include<cmath>

using namespace std;

double
function (double & avg, double & sd, double = 0, double = 0, double = 0, double = 0, double = 0);

int main() {
    double average = 0, sDeviation = 0;
    double num1, num2, num3, num4, num5;

    cout << "Enter Five Positive Number: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    while (num1 < 0) {
        cout << "Enter Num1 again, with a positine number: ";
        cin >> num1;
        cout << endl;
    }

    while (num2 < 0) {
        cout << "Enter Num2 again, with a positine number: ";
        cin >> num2;
        cout << endl;
    }

    while (num3 < 0) {
        cout << "Enter Num3 again, with a positine number: ";
        cin >> num3;
        cout << endl;
    }

    while (num4 < 0) {
        cout << "Enter Num4 again, with a positine number: ";
        cin >> num4;
        cout << endl;
    }

    while (num5 < 0) {
        cout << "Enter Num5 again, with a positine number: ";
        cin >> num5;
        cout << endl;
    }

    double sum;
    sum = function (average, sDeviation, num1, num2, num3, num4, num5);

    cout << "The Numbers Are :" << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    cout << "Num3: " << num3 << endl;
    cout << "Num4: " << num4 << endl;
    cout << "Num5: " << num5 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Anerage: " << average << endl;
    cout << "Standard Deviation: " << sDeviation << endl;

    return 0;
}

double function (double & avg, double & sd, double a, double b, double c, double d, double e) {
    double sum1;
    sum1 = a + b + c + d + e;
    avg = sum1 / 5;
    sd = pow((pow((a - avg), 2) + pow((b - avg), 2) + pow((c - avg), 2) + pow((d - avg), 2) + pow((e - avg), 2)) / 5, 0.5);

    return sum1;
}