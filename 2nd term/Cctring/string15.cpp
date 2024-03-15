#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string userinput;

    cout << "Enter a String: ";
    getline(cin, userinput);

    string newstring;

    for (int i = 0; i < userinput.size(); i++){
        if (i == 0 || isspace(userinput[i-1])){
            newstring += toupper(userinput[i]);
        }
        else{
            newstring += tolower(userinput[i]);
        }
    }
    cout << newstring;
    return 0;
}