#include <iostream> 
#include <string> 
#include <cstdlib>
#include <windows.h>
using namespace std;

struct Player {
  string nickname; 
  int age;
  double score1; 
  double score2;
};
struct Node {
  Player player; 
  Node* next;
};

Node* head = nullptr;

void addRecord(const Player& player);
void viewRecords();
void computeAverage();
void showMaxAverage();
void showMinAverage();



int main(){
  int choice;

  do {
    cout << "--------------------------------------------" << endl;
    cout << "Menu:" << endl;
    cout << "[1] Add Player" << endl;
    cout << "[2] Display Player Records" << endl;
    cout << "[3] Compute Average Scores" << endl;
    cout << "[4] Show Player with Max Average Score" << endl;
    cout << "[5] Show Player with Min Average Score" << endl;
    cout << "[6] Quit" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "--------------------------------------------" << endl;
    

    switch (choice) {
      case 1: {
        Player newPlayer;
          cout << "Enter nickname: ";
          cin >> newPlayer.nickname;
          cout << "Enter age: ";
          cin >> newPlayer.age;
          cout << "Enter score 1: ";
          cin >> newPlayer.score1;
          cout << "Enter score 2: ";
          cin >> newPlayer.score2;
          addRecord(newPlayer);
          Sleep(1000);
          system("cls");
        break;
      }
      case 2:
        system("cls");
        viewRecords();
        Sleep(1000);
        break;
      case 3:
        computeAverage();
        Sleep(1000);
        break;
      case 4:
        showMaxAverage();
        Sleep(1000);
      case 5 :
        showMinAverage();
        Sleep(1000);
        break;
    }
  } while (choice != 6);
  return 0;
}

void addRecord(const Player& player) { 
  Node* newNode = new Node;
  newNode->player = player; 
  newNode->next = head; 
  head = newNode;
}







void viewRecords() { 
  Node* current = head;
  while (current != nullptr) {
    cout << "Nickname: " << current->player.nickname << endl; 
    cout << "Age: " << current->player.age << endl;
    cout << "Score 1: " << current->player.score1 << endl; 
    cout << "Score 2: " << current->player.score2 << endl; 
    cout << " " << endl;
    current = current->next;
  }
}










void computeAverage() { 
  Node* current = head; 
  while (current != nullptr) {
    double average = (current->player.score1 + current->player.score2) / 2.0; 
    cout << "Nickname: " << current->player.nickname << endl;
    cout << "Average Score: " << average << endl; 
    cout << " " << endl;
    current = current->next;
  }
  current = head;
}










void showMaxAverage() {  
  Node* current = head;
  // Initialize to a non-valid value 
  double maxAverage = -1; 
  while (current != nullptr) {
    double average = (current->player.score1 + current->player.score2) / 2.0; 
    if (average > maxAverage) {
    maxAverage = average;
    }
  current = current->next;
  }  
  // To go back to the beginning of the list
  current = head;
  // Now, iterate again to display players with the max average current = head;
  while (current != nullptr) {
    double average = (current->player.score1 + current->player.score2) / 2.0; 
    if (average == maxAverage) {
      cout << "Nickname: " << current->player.nickname << endl; 
      cout << "Average Score: " << average << endl;
      cout << " " << endl;
    }
  current = current->next;
  }
}

void showMinAverage() {
  Node* current = head;
  // Initialize to a large value 
  double minAverage = 999999; 
  while (current != nullptr) {
    double average = (current->player.score1 + current->player.score2) / 2.0; 
    if (average < minAverage) {
    minAverage = average;
    }
  current = current->next;
  }
  // To go back to the beginning of the list
  current = head;
  // Now, iterate again to display players with the min average 
  while (current != nullptr) {
    double average = (current->player.score1 + current->player.score2) / 2.0; 
      if (average == minAverage) {
        cout << "Nickname: " << current->player.nickname << endl; 
        cout << "Average Score: " << average << endl;
        cout << "  " << endl;
      }
    current = current->next;
  }
}