#include<iostream>
using namespace std;

int main()
{
    int number, hundreds, tens, ones;
    cout << "Enter a 3 digit nuber: ";
    cin >> number;

    hundreds = number / 100;
    number = number % 100;
    tens = number / 10;
    ones = number % 10;

    cout << "hundreds digt: " << hundreds << endl;
    cout << "tens digit: " << tens << endl;
    cout << "ones digit: " << ones << endl;
    return 0;
}