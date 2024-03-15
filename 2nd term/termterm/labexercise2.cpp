#include<iostream>
using namespace std;

float Area_Square(int);
float Area_Rectangle(int,int);
float Area_Triangle(int,int);
float Area_Circle(int);

int main(){

    int choice,s,l,w,h,r,b;
    cout << "MENU\n\n";
    cout << "[1] - Area of Square\n";
    cout << "[2] - Area of Rectangle\n";
    cout << "[3] - Area of Triangle\n";
    cout << "[4] - Area of Circle\n";
    cout << "[5] - Exit\n\n";

    cout << "Enter your Choice: ";
    cin >> choice;

    switch (choice) {
        case 1 :
        cout << "AREA OF SQUARE\n";
        cout << "Enter sides; ";
        cin >> s; 
        cout << endl;
        cout << "The area is " << Area_Square(s) << "sq. units";
        break;

        case 2 :
        cout << "AREA OF RECTANGLE\n";
        cout << "Enter length: ";
        cin >> l;
        cout << endl;
        cout << "Enter width: ";
        cin >> w;
        cout << endl;
        cout << "The area is " << Area_Rectangle(l,w) << "sq. units";
        break;

        case 3 :
        cout << "AREA OF TRIANGLE\n";
        cout << "Enter the base: ";
        cin >> b;
        cout << endl;
        cout << "Enter the height: ";
        cin >> h;
        cout << endl;
        cout << "The area is " << Area_Triangle(b,h) << "sq. units";
        break;

        case 4 :
        cout << "AREA OF CIRCLE\n";
        cout << "Enter the radius: ";
        cin >> r;
        cout << endl;
        cout << "The area is " << Area_Circle(r) << "sq. units";
        break;

        case 5 :
        return 0;
        break;

        default :
        cout << "Invalid";
        break;
    }
}

    float Area_Square(int s){
        return s * s;
    }

    float Area_Rectangle(int l,int w){
        return l * w;
    }

    float Area_Triangle(int b, int h){
        return (b * h) / 2;
    }

    float Area_Circle(int r){
        return (3.1415 * (r * r));
    }
