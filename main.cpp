//COMSC-210 | Lab 37 | Alexander Sierra
#include <iostream>
using namespace std;

int sum_ascii(char []);

int main() {
    char txt[13];
    char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;
    int b = 66;
    cout << b << endl;
    cout << (char) b << endl;

    cout << sum_ascii(txt) << endl;

    return 0;
}
/*
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/

int sum_ascii(char s[]) {
    int i = 0;
    int sum = 0;
    while (i != 12) {
        sum += (int) s[i];
    }
}