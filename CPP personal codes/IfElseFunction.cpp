#include <iostream>
using namespace std;

int main(){

    int finalscore;

    cout << "Enter your grade: ";
    cin >> finalscore;

    if (finalscore >= 90){
        cout << "You got A!\n";
        cout << finalscore << endl;
        }
    else if (finalscore >=80 && finalscore < 90){
        cout << "You got B!\n";
    }
    else if (finalscore >=70 && finalscore < 80){
        cout << "You got C!\n";
    }
    else if (finalscore >=60 && finalscore < 70){
        cout << "You got D!\n";
    }
    else {
        cout << "You got an F!\n";
    }
    return 0;
}