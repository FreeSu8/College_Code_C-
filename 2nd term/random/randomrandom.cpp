#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    std::unordered_map<char, int> myMap = {
        {'a', 5},
        {'b', 8},
        {'c', 3},
        {'d', 6}
    };

    char selectedKeys[100];

    cin >>  selectedKeys;

    int totalSum = 0;

    for (char key : selectedKeys) {
        auto it = myMap.find(key);
        if (it != myMap.end()) {
            totalSum += it->second;
        }
    }

    std::cout << "Total Sum: " << totalSum << std::endl;

    return 0;
}
