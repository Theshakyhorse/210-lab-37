//COMSC-210 | Lab 37 | Alexander Sierra
#include <iostream>
#include <fstream>
#include <map>
#include <list>
using namespace std;

int gen_hash_index(char []);

int main() {
    //declarations
    char s[13];
    ifstream file("data.txt");
    int total = 0;
    int index;
    map<int, list<char*>> hash_table;
    
    //reading data
    while (file >> s) {
        index = gen_hash_index(s);
        hash_table[index].push_back(s);
    }

    //outputs 1st 100 map entries
    int i = 0;
    for (auto pair : hash_table) {
        if (i < 100) {
            cout << pair.first << ": ";
            for (auto& txt : pair.second)
                cout << txt << " ";
            cout << endl;
            i++;
        }
    }

    return 0;
}

//sums then returns a hash index
int gen_hash_index(char s[]) {
    int i = 0;
    int sum = 0;
    while (i != 12) {
        sum += (int) s[i];
        i++;
    }
    return sum % 97;
}