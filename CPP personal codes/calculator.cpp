#include<iostream>
#include<cmath>
using namespace std;

float Addition(int,int);
float Subtraction(int, int);
float Multiplication(int,int);
float Division(int,int);
float Modulo(int,int);
float Power(int,int);
float SquareRoot(int);
void returnstart();
void greet();
void intro1();

int main(){
    int n, i, choice1, choice2, nun1, nun2;
    float num1, num2, mun1;

    greet();
    start:
    intro1();
    cout << "[8] - Exit\n";
    
    cin >> choice1;

    switch (choice1){
        case 1:
            Addition(num1, num2);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        case 2:
            Subtraction(num1, num2);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        case 3:
            Multiplication(num1, num2);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        case 4:
            Division(num1, num2);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        case 5:
            Modulo(num1, num2);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        case 6:
            Power(num1, num2);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        case 7:
            SquareRoot(num1);
            returnstart();
            cin >> choice2;
            if (choice2 == 1)
                goto start;
            else if (choice2 == 2)
                break;
        default:
            break;
    }
}

void greet(){
    cout << "Welcome to basic calculator.\n";
    cout << "Which function would you like to use?\n";
}
void intro1() {
    cout << "[1] - Addition\n";
    cout << "[2] - Subtraction\n";
    cout << "[3] - Multiplication\n";
    cout << "[4] - Division\n";
    cout << "[5] - Modulo\n";
    cout << "[6] - Power\n";
    cout << "[7] - Square root\n";
}
void returnstart(){
    cout << "\nWould you like to continue?\n";
    cout << "[1] Continue(?)\nor\n[2] Exit(?)\n";
}
float Addition(int x,int y){
    cout << "**ADDITION**\n";
    cout << "Enter 2 integers: \n";
    cin >> x;
    cin >> y;
    float mun1 = x + y;
    cout << x << " + " << y << " = " << mun1;
}
float Subtraction(int x, int y){
    cout << "**Subtraction**\n";
    cout << "Enter 2 integers: \n";
    cin >> x;
    cin >> y;
    float mun1 = x - y;
    cout << x << " - " << y << " = " << mun1;
}
float Multiplication(int x, int y){
    cout << "**Multiplication**\n";
    cout << "Enter 2 integers: \n";
    cin >> x;
    cin >> y;
    float mun1 = x * y;
    cout << x << " x " << y << " = " << mun1;
}
float Division(int x,int y){
    cout << "**Division**\n";
    cout << "Enter 2 integers: \n";
    cin >> x;
    cin >> y;
    float mun1 = x / y;
    cout << x << " / " << y << " = " << mun1;
}
float Modulo(int x,int y){
    cout << "**Modulo**\n";
    cout << "Enter 2 integers: \n";
    cin >> x;
    cin >> y;
    float mun1 = x % y;
    cout << x << " % " << y << " = " << mun1;
}
float Power(int x,int y){
    cout << "**Power**\n";
    cout << "Enter 2 integers: \n";
    cin >> x;
    cin >> y;
    float mun1 = pow(y,x);
    cout << x << " - " << y << " = " << mun1;
}
float SquareRoot(int x){
    cout << "**Square Root**\n";
    cout << "Enter an integer: \n";
    cin >> x;
    float mun1 = sqrt(x);
    cout << " The Square Root of " << x << " is = " << mun1;
}