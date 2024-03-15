#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int num, i, count = 0;

    cout << "Enter 10 Numbers: \n";
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cout << "Final array: ";
        for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
        }
    cout << "\n\nEnter a number: ";
    cin >> num;

    for (int i = 0; i < 10; i++){
        if (arr[i] == num)
        count++;
    }
    
    cout << "\nTimes of " << num << " present in the array: " << count;
    return 0;
}