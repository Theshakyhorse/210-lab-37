//COMSC-210 | Lab 37 | Alexander Sierra
#include <iostream>
#include <fstream>
#include <map>
#include <list>
using namespace std;

int sum_ascii(char []);
int hashFunc(char []);

int main() {
    char s[13];
    ifstream file("data.txt");
    int total = 0;
    int index;
    map<int, list<char []>> hash_table;
    
    while (file >> s) {
        index = hashFunc(s);
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

int hashFunc(char s[]) {
    return sum_ascii(s) % 97;
}