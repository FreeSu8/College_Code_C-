#include<iostream>
using namespace std;

int main(){

    int month;

    cout << "Enter month in intrger: ";
    cin >> month;

    string month1 = "January";
    string month2 = "Febuary";
    string month3 = "March";
    string month4 = "April";
    string month5 = "May";
    string month6 = "June";
    string month7 = "July";
    string month8 = "August";
    string month9 = "September";
    string month10 = "October";
    string month11 = "November";
    string month12 = "December";

    if (month == 1){
        cout << "The month is ";
        cout << month1 << "." << endl;
        }
    else if (month == 2){
        cout << "The month is ";
        cout << month2 << "." << endl;
    }
    else if (month == 3){
        cout << "The month is ";
        cout << month3 << "." << endl;
    }
    else if (month == 4){
        cout << "The month is ";
        cout << month4 << "." << endl;
    }
    else if (month == 5){
        cout << "The month is ";
        cout << month5 << "." << endl;
    }
    else if (month == 6){
        cout << "The month is ";
        cout << month6 << "." << endl;
    }
    else if (month == 7){
        cout << "The month is ";
        cout << month7 << "." << endl;
    }
    else if (month == 8){
        cout << "The month is ";
        cout << month8 << "." << endl;
    }
    else if (month == 9){
        cout << "The month is ";
        cout << month9 << "." << endl;
    }
    else if (month == 10){
        cout << "The month is ";
        cout << month10 << "." << endl;
    }
    else if (month == 11){
        cout << "The month is ";
        cout << month11 << "." << endl;
    }
    else if (month == 12){
        cout << "The month is ";
        cout << month12 << "." << endl;
    }
    if (month <=0 || month >=13){
        cout << "The month is Invalid.\n";
    }
    return 0;
}