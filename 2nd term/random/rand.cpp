#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() {
    char str[10];
    string str1;
    cin >> str1;
    for  (char g: str1){
        int n = 0;
        str[n] = g;    
        n++;
        if (str[0] == '\0') {
            break;  
        }
    }
    
    return 0;
}
