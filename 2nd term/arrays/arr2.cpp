#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter desired array size: ";
    cin >> num;

    int arr[num];

    for (int j = 0; j < num; j++) {
        cout << "Num #" << j + 1 << ":";
        cin >> arr[j];
    }

    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
