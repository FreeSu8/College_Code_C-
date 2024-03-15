#include<iostream>
#include<cstring>
#include<istream>

using namespace std;

int main(){
    char word1[100], word2[100];

    cout << "*******************************\n";
    cout << "STRING COMPARE\n";
    cout << "*******************************\n";

    cout << "Enter 1st word" << endl;
    cin.getline(word1,100);

    cout << "Enter 2nd word" << endl;
    cin.getline(word2,100);

    if (strcmp(word1,word2) == 0){
        cout << "equal" << endl;
    }
    else if (strcmp(word1,word2) < 0) {
        cout << "Positive" << endl;        
    } 
    else {
        cout << "Negative" << endl;
    }
}
