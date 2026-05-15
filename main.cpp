//COMSC-210 | Lab 37 | Alexander Sierra
#include <iostream>
#include <fstream>
#include <map>
#include <list>
using namespace std;

int gen_hash_index(char []);

int main() {
    char s[13];
    ifstream file("data.txt");
    int total = 0;
    int index;
    map<int, list<char*>> hash_table;
    
    while (file >> s) {
        index = gen_hash_index(s);
        hash_table[index].push_back(s);
    }

    for (auto pair : hash_table) {
        cout << pair.first << ": ";
        for (auto s : pair.second)
            cout << s << " ";
        cout << endl;
    }

    return 0;
}

int gen_hash_index(char s[]) {
    int i = 0;
    int sum = 0;
    while (i != 12) {
        sum += (int) s[i];
        i++;
    }
    return sum % 97;
}