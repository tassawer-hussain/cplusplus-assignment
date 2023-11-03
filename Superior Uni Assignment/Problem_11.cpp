// Problem No 11:

// write a function Power ( a, b ), to calculate the value of a raised to b.


#include<iostream>

using namespace std;

double Power(double, double);

int main() {
    double base, exp;
    double ans;

    cout << "Enter the Digit whose Power is to Be calculated: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exp;

    ans = Power(base, exp);

    cout << base << " Raised to " << exp << " is " << ans << endl;
    return 0;
}

double Power(double bs, double ex) {
    double output = 1;

    while (ex >= 1) {
        output = output * bs;
        ex--;
    }

    return output;
}
