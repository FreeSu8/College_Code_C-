#include<iostream>
using namespace std;
int main(){
    int n, num, digit, rev = 0;
    cout << "enter a positive number: ";
    cin >> num;
    n = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);
    cout << "the reverse of thenumber is: " << rev << endl;
    if (n == rev)
    cout << "The number is a palindrome." << endl;
    else
    cout << "The number is not a palindrome." << endl;
    return 0;
}