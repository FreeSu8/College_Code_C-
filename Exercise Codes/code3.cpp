#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4) == 0)
    {
        cout << "leap year ";
    }
    else 
    {
        cout << "Not a leap year ";
    }
    return 0;
}