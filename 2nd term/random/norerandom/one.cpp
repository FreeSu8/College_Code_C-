#include <iostream>
#include <unordered_map>

using namespace std;

void swap(int *a, int *b);

int main(){
    int a = 10;
    int b = 20;

    int *c = &b;
    int& d = b;

    cout << &c << endl;
    cout << d << endl;
    cout << a << endl;

    cout << "--------------------------------" << endl;

    cout << a << endl;
    cout << b << endl;
    cout << &c << endl;
    cout << d << endl;

    cout << "--------------------------------" << endl;    

    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    cout << &b << endl;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

    
}