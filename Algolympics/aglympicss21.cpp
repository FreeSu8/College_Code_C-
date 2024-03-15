#include <iostream>
#include <sstream>
using namespace std;

/*
struct plan{
    string planame[9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    int planscore[9] = {0};
};
*/

void ReportLoop(int a);

const int MAX_PLA = 100;

int main(){
    int T; 
    cout << "hello" << endl;
    cin >> T;
    ReportLoop(T);  //2
}
void ReportLoop(int a){
    int p, n, k, placount = 0, o;
    string planeta, previousPlanet;
    cin >> o;

    //plan person[o];
    


    for (int i = 0; i < a; i++){   
        cin >> p;                          //2
        for (int i = 0; i < p; i++){   
            cin >> n;                            // 4 
            for(int j = 1; j < n; j++){   
            getline(cin, planeta);               // earth saturn venus pluto
            istringstream platen(planeta);
            string temppl[MAX_PLA];
            string tem;
            while (platen >> tem) {
                temppl[placount] = tem;
                placount++;
                i++;
                if (planeta[j] == planeta[j-1]) {    
                    continue;
                }
            }
            for (int e = 0; e < placount; e++) {
            cout << planeta[e] << endl;
            }
            }
        }
    }

    string planet[9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    int Me = 0, Ve = 0, Ea = 0, Ma = 0, Ju = 0, Sa = 0, Ur = 0, Ne = 0, Pl = 0;
    int record[9] = {Me,Ve,Ma,Ju,Sa,Ur,Ne,Pl,};
    for (int r = 0; r < 9; r++) {
        cout << planet[r] << ": " << record[r] << endl;
    }
}