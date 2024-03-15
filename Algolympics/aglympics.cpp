#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main(){
    int t, n, p;
    int TN[t][n];
    int pla;
    string planets[9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    string token, planetaa;
    int Mercury = 0,
        Venus = 0,
        Earth = 0, 
        Mars = 0, 
        Jupiter = 0,
        Saturn = 0, 
        Uranus = 0, 
        Neptune = 0, 
        Pluto = 0;

    cout << "Number ot reports: ";
    cin >> t;
    for (int i = 0; i < t; i++){
        cout << "Number of imigrants: ";
        cin >> n;
        for(int j = 0; j < n; j++){
            cout << "number of planets";
            cin >> p;
        }
        for(int g = 0; g < p; g++){
            cout << "Planets: " << endl;
            getline(cin, planetaa);

            istringstream iss(planetaa);

            while (getline(iss, token, ' ')) {
                cout << token << endl;
            }
        }
    }
    return 0;
}