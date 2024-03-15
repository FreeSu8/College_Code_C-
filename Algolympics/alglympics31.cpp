#include <iostream>
#include <cstring>
using namespace std;

struct assign {
    char first_char;
    int score;
};

void separator(string answer);
void counter(char separated[]);
void score(assign words[][26]);
void f_char(assign words[][26]);

int main() {
    int total;
    assign words[2][26];
    score(words);
    f_char(words);
    return 0;
}


void counter(char separated[]; int &total){
    
    for (char c: separated){
        switch (c){
            case A:
                break;
            case B:
                break;
            case C:
                break;
            case D:
                break;
            case E:
                break;
            case F:
                break;
            case G:
                break;
            case H:
                break;
            case I:
                break;
            case J:
                break;
            case K:
                break;
            case L:
                break;
            case N:
                break;
            case O:
                break;
            case P:
                break;
            case Q:
                break;
            case R:
                break;
            case S:
                break;
            case U:
                break;
            case V:
                break;
            case W:
                break;
            case X:
                break;
            case Y:
                break;
            case Z:
                break;
        }
    }
}

void score(assign words[][26]) {
    for (int n = 0; n < 26; n++) {
        cin >> words[1][n].score;
    }
}

void f_char(assign words[][26]) {
    for (int n = 0; n < 26; n++) {
        cin >> words[0][n].first_char;
    }
}