#include <iostream>
using namespace std;

struct cityweek{
    double temp[7]; 
    string cityname;
};

float calcavgtemp(cityweek city1);

int main(){
    cityweek city1;
    float avgtemp = 0;

    cout << "Enter City Name: ";
    getline(cin, city1.cityname);

    cout  << "Enter Temperature for Monday to Sunday: " << endl;
    for (int i = 0; i < 7; i ++){
	    cin >> city1.temp[i];
    }

    cout << "Average temperature in " << city1.cityname << " is " << calcavgtemp(city1);
}

float calcavgtemp(cityweek city1){
    float totaltemp = 0;
    for (int i = 0; i < 7; i++) {
        totaltemp += city1.temp[i];
    }
    return totaltemp / 7;
}