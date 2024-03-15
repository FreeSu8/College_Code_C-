#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char word[100];

    cout << "*******************************\n";
    cout << "PALINDROME\n";
    cout << "*******************************\n";
    cout << "Enter word: ";
    cin >> word;

    int length = strlen(word);

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            cout << word << " is not a palindrome." << endl;
            return 0;
        }
    }
    cout << word << " is a palindrome." << endl;
    return 0;
}
