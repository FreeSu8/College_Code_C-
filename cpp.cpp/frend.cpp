#include <iostream> 
#include <fstream> 
#include <string>

using namespace std;

struct Player {
    string nickname;
    int age;
    double scores[5];
};

struct Node {
    Player player;
    Node * next;
};
 
Node * head = nullptr;

void addRecord(const Player& player) { 
    Node* newNode = new Node; 
    newNode->player = player;
    head->next = newNode;
}

void viewRecords() { 
    Node* current = head;
    while (current != nullptr) {
        cout << "Nickname: " << current->player.nickname << endl; 
        cout << "Age: " << current->player.age << endl;
        cout << "Scores: ";
        for (int i = 0; i < 5; ++i) {
            cout << current->player.scores[i]+1 << " ";
        }
        cout << endl;
        cout << "	" << endl;
        current = current->next;
    }   
}

void computeAverage() { 
    Node* current = head; 
    while (current != nullptr) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0;
        cout << "Nickname: " << current->player.nickname << endl; 
        cout << "Average Score: " << average << endl;
        cout << "	" << endl;
        current = current->next;
    }
}

void showMaxAverage() { 
    Node* current = head;
    double maxAverage = -1; 
    while (current != nullptr) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0; 
        if (average > maxAverage) { 
                maxAverage = average;
        }
        current = current->next;
    }
    current = head;
    while (current != nullptr) { 
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0; 
        if (average == maxAverage) {
            cout << "Nickname: " << current->player.nickname << endl; 
            cout << "Average Score: " << average << endl;
            cout << "	" << endl;
        }
        current = current->next;
    }
}

void showMinAverage() { 
    Node* current = head;
    double minAverage = 100;
    while (current != nullptr) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0; 
        if (average < minAverage) { 
            minAverage = average;
        }
        current = current->next;
    }
    current = head;
    while (current != nullptr) { 
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0; 
        if (average == minAverage) {
            cout << "Nickname: " << current->player.nickname << endl; 
            cout << "Average Score: " << average << endl;
            cout << "	" << endl;
        }
    current = current->next;
    }
}

void openFile() {
    ofstream outFile("player_records.txt"); 
    Node* current = head;
    while (current != nullptr) {
        outFile << current->player.nickname << endl; 
        outFile << current->player.age << endl;
        for (int i = 0; i < 5; ++i) {
            outFile << current->player.scores[i] << " ";
        }
        outFile << endl;
        current = current->next;
    }
    outFile.close();
    cout << "Records saved to 'player_records.txt'." << endl;
}

void closeFile() {
    cout << "File closed." << endl;
}

int main (){
    int choice;
    Player P1;
    bool start = true;
    while (start){
        cout << "==============================================" << endl;
        cout << "                    MENU" << endl;
        cout << "==============================================" << endl;
        cout << "1.	Add record" << endl;
        cout << "2.	View players records" << endl;
        cout << "3.	Compute for the average" << endl;
        cout << "4.	Show the player(s) who gets the max average." << endl;
        cout << "5.	Show the player(s) who gets the min average." << endl;
        cout << "6.	Open the file." << endl;
        cout << "7.	Close the File" << endl;
        cout << "8.	Exit" << endl;
        cin >> choice;
        switch (choice){
            case 1:
                cout << "Enter nickname: ";
                cin >> P1.nickname;
                cout << endl << "Enter age: ";
                cin >> P1.age;
                for (int n = 0; n < 5; n++){
                    cout <<endl<< "Enter score " << n+1 << " ";
                    cin >> P1.scores[n];
                }
                addRecord(P1);
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                computeAverage();
                break;
            case 4:
                showMaxAverage();
                break;
            case 5:
                showMinAverage();
                break;
            case 6:
                openFile();
                break;
            case 7:
                closeFile();
                break;
            case 8:
                start = false;
                break;
            default:
                cout << "Wrong input try again!";
                break;
        }        
        
    }
}