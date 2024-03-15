#include<iostream>
#include<cstring>
#include<istream>

using namespace std;

int main(){
    char word1[100], word2[100];

    cout << "*******************************\n";
    cout << "STRING COPY\n";
    cout << "*******************************\n";
    cout << "Enter 1st word" << endl;
    cin.getline(word1,100);

    cout << "Enter 2nd word" << endl;
    cin.getline(word2,100);

    strcpy(word1,word2);

    cout << "New String Value for Word 1: " << endl;
    cout << word1 << endl;
    return 0;
}

