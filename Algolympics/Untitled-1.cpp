#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int findSmallestValue(const vector<int>& myList) {
    int smallest = myList[0];
    
    for (size_t i = 1; i < myList.size(); ++i) {
        if (myList[i] < smallest) {
            smallest = myList[i];
        }
    }

    return smallest;
}


int main(){
    int test, num_soldier, soldier[100000];

    cin>>test;

    for(int i=0; i<test; i++){
        cin>>num_soldier;
        for(int j=0; j<num_soldier; j++){
            cin>>soldier[j];
        }
        for(int a=0; soldier[a] != '\0'; a++){
            int tmp[num_soldier-a-1];
            vector<int> myVector(tmp.begin(), tmp.end());
            for(int k=0; soldier[k] != '\0'; k++){
                if(soldier[a] > soldier[k+1]){
                    tmp[num_soldier-a-1] = soldier[a]; 
                }
            }
        auto min_value = min_element(tmp.begin(), tmp.end());
        cout << min_value << " ";
        }
    }
}