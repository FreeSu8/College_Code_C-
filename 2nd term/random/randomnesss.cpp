#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int T, s, n, topping, topping2;
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

        for ( i = 1; i <= s; ++i) {
            pizzaToppings.clear();
            for (int j = 0; j < n; ++j) {
                cin >> topping2;
                pizzaToppings.insert(topping2);
            }
            if (yourPizza == pizzaToppings) {
                cout << i << endl;
            } 
        }  
        
    } 
    
    return 0;
}
