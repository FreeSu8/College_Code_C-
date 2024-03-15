#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char input_string[100];
    char str1[100];
    char *str2[100];
    const char *delimiter = " ";
    int wordcount  = 0;

    cout << "Enter a string: ";
    cin.getline(input_string,100); 

    for (char *str1 = strtok(input_string, delimiter); str1 != nullptr; str1 = strtok(nullptr, delimiter)){
        str2[wordcount++] = str1;
    }

    for (int i = wordcount - 1; i >= 0; i--){
        cout << str2[i] << endl; 
    }
}
