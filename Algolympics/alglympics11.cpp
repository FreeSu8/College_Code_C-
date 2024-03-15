#include <iostream>
using namespace std;

void solution(int T);

int main() {
    int T;
    cin >> T;
    solution(T);
    return 0;
}

void solution(int T){
    int answer[T];
    for (int start = 0; start < T; start++){    
        int row, column;
        int laser1 = 0;
        int laser2 = 0;
        cin >>row>> column;
        char ba[row][column];
        for (int k = 0; k < row; k++) {
            for (int j = 0; j < column; j++) {
                cin >> ba[k][j];
            }
        }
        for (int i = 0; i < row; i++) {
            for (int n = 0; n < column; n++) {
                if (ba[i][n] == 'X') { 
                    laser1++;
                    break;
                }
            }
        }
        for (int i1 = 0; i1 < column; i1++) {
            for (int n2 = 0; n2 < row; n2++) {
                if (ba[n2][i1] == 'X') { 
                    laser2++;
                    break;
                }
            }
        }
        if (laser1 <= laser2)
            answer[start] = laser1;
        else
            answer[start] = laser2;
    }
    for (int end = 0; end < T; end++){
        cout << answer[end] << endl;
    }
}