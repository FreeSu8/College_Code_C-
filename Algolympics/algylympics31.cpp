#include <iostream>
#include <sstream>
#include <cstring>
#include <unordered_map>

using namespace std;

int main() {
    int value[26], T_test, total[100];
    char letter[26], answer[100], y = 0;
    string input, metr;
    
    getline(cin, input);
    istringstream str(input);
    int n = 0;
    while (str >> metr && n < 26) {
        letter[n] = metr[0];
        n++;
    }
    
    for (int a = 0; a < 26; a++) {
        cin >> value[a];
    }

    unordered_map<char, int> map;

   for (int i = 0; i < 26; i++) {
        if (letter[i] == 'T'||letter[i] == 'M')
            continue;
        map[letter[i]] = value[i];
    }
    int repinput = 0;
    cin >> repinput;

    for (int t = 0; t < repinput; t++) {
        cin >> answer;
        
        for (char c: answer) {
            auto it = map.find(c);
            if (it != map.end()) {
                total[y] += it->second;
            }
        }
        
    }
     if (total > 0){
                cout << "POSITIVE" << endl;
            } else if (total < 0){
                cout << "NEGATIVE" << endl;
            } else {
                cout << "NEAUTRAL" << endl;
            }
    return 0;
}