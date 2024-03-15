#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int T, s, n, topping, topping2, pizzaindex[100];
    int k = 0;

    cin >> T;

    for (int i = 0; i < T; i++) {
       
        cin >> s >> n;

        unordered_set<int> yourPizza;
        unordered_set<int> pizzaToppings;
        for (int i = 0; i < n; ++i) {
            cin >> topping;
            yourPizza.insert(topping);
        }

        for (int i = 1; i <= s; ++i) {
        
            for (int j = 0; j < n; ++j) {
                cin >> topping2;
                pizzaToppings.insert(topping2);
            }
            if (yourPizza == pizzaToppings) {
                k++;
                pizzaindex[i-1] = k;
            } 
        }      
        cout << pizzaindex[i] << endl;
    }
    return 0;
}