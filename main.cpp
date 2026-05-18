//COMSC-210 | Lab 38 | Alexander Sierra
#include <iostream>
#include <fstream>
#include <map>
#include <list>
using namespace std;

int gen_hash_index(string);

int main() {
    //declarations
    string s;
    ifstream file("data.txt");
    int total = 0;
    int index;
    map<int, list<string>> hash_table;
    
    //reading data
    while (file >> s) {
        index = gen_hash_index(s);
        hash_table[index].push_back(s);
    }

    //menu
    int choice = 1;
    int key;
    while (choice != 0) {
        //options
        cout << "Menu:" << endl;
        cout << "[1] print the first 100 entries" << endl;
        cout << "[2] search for a key" << endl;
        cout << "[3] add a key" << endl;
        cout << "[4] remove a key" << endl;
        cout << "[5] modify a key" << endl;
        cout << "[0] Exit" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            if (choice == 1) {
                //outputs 1st 100 map entries
                int i = 0;
                for (auto pair : hash_table) {
                    if (i < 100) {
                        cout << pair.first << ": ";
                        for (auto txt : pair.second)
                            cout << txt << " ";
                        cout << endl;
                    i++;
                    }
                }
            } else if(choice == 2) {
                cout << "enter an integer key to search for:" << endl;
                cin >> key;
                auto search = hash_table.find(key);
                if (search != hash_table.end()) {
                    cout << "Found " << key << ": ";
                    for (auto txt : search->second) {
                        cout << txt << " ";
                    }
                } else {
                    cout << key << " not found" << endl;
                }
                
            } else if(choice == 3) {
                cout << "enter an integer key to add:" << endl;
                cin >> key;
                hash_table[key].push_back("");  

            } else if(choice == 4) {

            } else if(choice == 5) {

            }
        }
        else {
            if(choice == 0) {

            }
            else {
                cout << "invalid choice";
            }
        }
        cout << endl;
    }
    return 0;
}

//sums then returns a hash index
int gen_hash_index(string s) {
    int i = 0;
    int sum = 0;
    while (i != 12) {
        sum += (int) s[i];
        i++;
    }
    return sum % 97;
}