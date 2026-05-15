//COMSC-210 | Lab 37 | Alexander Sierra
#include <iostream>
#include <fstream>
using namespace std;

int sum_ascii(char []);

int main() {
    char s[13];
    ifstream file("data.txt");
    int total = 0;
    
    while (file >> s) {
        total += sum_ascii(s);
    }

    cout << total << endl;

    return 0;
}

int sum_ascii(char s[]) {
    int i = 0;
    int sum = 0;
    while (i != 12) {
        sum += (int) s[i];
        i++;
    }
    return sum;
}