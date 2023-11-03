// Problem 03:
// Pattern A

// * * * * * * * * * *
// *                 *
// *                 *
// *                 *
// *                 *
// *                 *
// *                 *
// * * * * * * * * * *


#include<iostream>
using namespace std;
int main() {
	for(int i = 0; i < 11; i++) {
		for(int j = 0; j < 11; j++) {
			if(i == 0 || i == 10 || j == 0 || j == 10) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
