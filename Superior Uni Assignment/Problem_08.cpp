// Problem No 8:

// Write a program to display the following pattern. (Using Loops)
// A  B  C  D  E  F  G  F  E  D  C  B  A
// A  B  C  D  E  F     F  E  D  C  B  A
// A  B  C  D  E           E  D  C  B  A
// A  B  C  D                 D  C  B  A
// A  B  C                       C  B  A
// A  B                             B  A
// A                                   A


#include<iostream>

using namespace std;
int main() {
    int i = 7; // row
    int j;
    int k;
    char ch = 'A';
    int h;
    int o = 0;
    while (i > 0) {
        j = 0;
        ch = 'A';
        while (j < i) {
            cout << ch;
            ch++;
            j++;
        }
        if (i == 7) {
            o++;
            k = 0;
            while (k < i - 1) {
                if (k == 0) {
                    ch = ch - 2;
                    cout << ch;
                } else {
                    ch--;
                    cout << ch;
                }
                k++;
            }
        } else {
            h = 2;
            while (h < o) {
                cout << " ";
                h++;
            }
            k = 0;
            while (k < i) {
                ch--;
                cout << ch;
                k++;
            }
        }
        cout << endl;
        i--;
        o = o + 2;
    }
    return 0;
}






// Another way to do the job

#include<iostream>

using namespace std;

int main() {

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 13; j++) {

            if (i == 1) {
                for (int k = 65; k < 72; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                for (int k = 70; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            } else if (i == 2) {
                for (int k = 65; k < 71; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << "  ";
                for (int k = 70; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            } else if (i == 3) {
                for (int k = 65; k < 70; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << "      ";
                for (int k = 69; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            } else if (i == 4) {
                for (int k = 65; k < 69; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << "          ";
                for (int k = 70; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            } else if (i == 5) {
                for (int k = 65; k < 68; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << "              ";
                for (int k = 67; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            } else if (i == 6) {
                for (int k = 65; k < 67; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << "                   ";
                for (int k = 66; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            } else(i == 2);
            {
                for (int k = 65; k < 66; k++) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << "                      ";
                for (int k = 65; k >= 65; k--) {
                    cout << static_cast < char > (k) << " ";
                }
                cout << endl;
            }
        }

    }
    return 0;
}
