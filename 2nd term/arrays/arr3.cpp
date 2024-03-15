#include <iostream>

using namespace std;

int main() {
    string inputString;
    int vowelCount = 0;
    int whiteSpaceCount = 0;
    int A = 0, E = 0, I = 0, O = 0, U = 0;

    cout << "Enter a string in all capital letters: ";
    getline(cin,inputString);

    for (int i = 0; inputString[i] != '\0'; i++){
        if (inputString[i] == 'A'){
            A++;
            vowelCount ++;
        }
        if (inputString[i] == 'E'){
            E++;
            vowelCount ++;
        }
        if (inputString[i] == 'I'){
            I++;
            vowelCount ++;
        }
        if (inputString[i] == 'O'){
            O++;
            vowelCount ++;
        }
        if (inputString[i] == 'U'){
            U++;
            vowelCount ++;
        }
        if (inputString[i] == ' '){
            whiteSpaceCount++;
        }
    }
    cout <<  "A = " << A << endl;
    cout << "E = " << E << endl;
    cout << "I = " << I << endl;
    cout << "O = " << O << endl;
    cout << "U = " << U << endl;
    cout << "Vowels: " << vowelCount << endl;
    cout << "Whitespaces: " << whiteSpaceCount << endl;

    return 0;
}
