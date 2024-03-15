#include<iostream>
using namespace std;

float add(int,int);
float subtract(int,int);
float multiply(int,int);
float divide(int,int);
float modulo(int,int);

int main(){
    
    cout << "Menu\n\n";
    cout << "1. add\n";
    cout << "2. subtract\n";
    cout << "3. multiply\n";
    cout << "4. divide\n";
    cout << "5. modulo\n\n";
    cout << " Enter Your Choice (1-5): ";

    int numb, a, b;
    cin >> numb;
    switch (numb) {
        case 1: cout << "enter 2 interger numbers: ";
        cin >> a;
        cin >> b;
        cout << add(a,b);
        break;
        case 2: cout << "enter 2 interger numbers: ";
        cin >> a;
        cin >> b;
        cout << subtract(a,b);
        break;
        case 3: cout << "enter 2 interger numbers: ";
        cin >> a;
        cin >> b;
        cout << multiply(a,b);
        break;
        case 4: cout << "enter 2 interger numbers: ";
        cin >> a;
        cin >> b;
        cout << divide(a,b);
        break;
        case 5: cout << "enter 2 interger numbers: ";
        cin >> a;
        cin >> b;
        cout << modulo(a,b);
        break;
    }
    return 0;
}

float add(int x, int y){
    return x + y;
}
float subtract(int x, int y){
    return x - y;
}
float multiply(int x, int y){
    return x * y;
}
float divide(int x, int y){
    return x / y;
}
float modulo(int x, int y){
    return x % y;

}

