#include <iostream>

int main(){
    int numstet[10];

    std::cout << "Enter 10 integers: " << std::endl;
    for (int i = 0; i < 11; i++){
        std::cin >> numstet[i];
    }

    std::cout << "The Even numbers in the set are: ";
    for (int i = 0; i < 11; i++){
        if (numstet[i]%2 == 0) 
        std::cout << numstet[i] << " ";
    }
    return 0;
}