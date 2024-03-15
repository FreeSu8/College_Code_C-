// a simple greeting...

#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::cin;

int main(){

    string name;
    int age;

    cout << "What's your name? ";
    cin >> name;
    cout << "Ok " << name << "\n";

    cout << "How old are you?? ";
    cin >> age;

    if (age <= 10){
        cout << "Hello kid, " << name << "!\n";
    }
    else if (age >= 10) {
        cout << "Hello sir " << name << "!\n";
        cout << "How are you in this fine evening! <3\n";
    }
    return 0;
    
}