#include <iostream>
#include <string>
using namespace std;

const int strarraysize = 100;
const int arraysize = 5;

struct Shopper {
  string name;
  int price;
  string cart[arraysize];  
};

struct Node {
  Shopper person;
  Node* next;
};

Node* head = nullptr;

void addBuyer(const Shopper& person);
void selectProduct(Node* current);
void viewCart();
void checkout();

int main() {
  int choice1;

  do {
    cout << "--------------------------------------------" << endl;
    cout << "Menu:" << endl;
    cout << "[1] Add Shopper" << endl;
    cout << "[2] Select Product" << endl;
    cout << "[3] View Cart" << endl;
    cout << "[4] Checkout" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> choice1;
    cout << "--------------------------------------------" << endl;

    switch (choice1) {
      case 1: {
        Shopper P1;
        cout << "Enter Name: ";
        cin >> P1.name;
        addBuyer(P1);
        break;
      }
      case 2:
        selectProduct(head);
        break;
      case 3:
        viewCart();
        break;
      case 4:
        checkout ();
        break;
    }
  }while (choice1 != 4);
  return 0;
}

void addBuyer(const Shopper& person) {
  Node* newNode = new Node;
  newNode->person = person;
  newNode->next = head;
  head = newNode;
}

void selectProduct(Node* current) {
  int priceM[arraysize] = {130, 125, 130, 135, 140};
  int priceL[arraysize] = {160, 155, 160, 165, 170};
  string coffee[arraysize] = {"Macchiato", "Espresso", "Americano", "Cappuccino", "Affogato"};
  current->person.price = 0;
  int choice2, schoice;
  char size;

  while (current != nullptr) {
  cout << "Shopper: " << current->person.name << endl;

  do {
    system("cls");
    cout << "Menu:" << endl;
    cout << "----Drinks---------Medium-----Large" << endl;
    cout << "[1] Macchiato   ==  130p  ==  160p" << endl;
    cout << "[2] Espresso    ==  125p  ==  155p" << endl;
    cout << "[3] Americano   ==  130p  ==  160p" << endl;
    cout << "[4] Cappuccino  ==  135p  ==  165p" << endl;
    cout << "[5] Affogato    ==  140p  ==  170p" << endl;
    cout << "[6] Done" << endl;
    cin >> choice2;

  if (choice2 != 6) {
    cout << "Pick a Size M/L, and Drink ?" << endl;
    cin >> size;
    schoice = choice2 - 1;

  if (size == 'M') {
        current->person.price += priceM[schoice];
        current->person.cart[schoice] = coffee[schoice] + " M";
  } else if (size == 'L') {
        current->person.price += priceL[schoice];
        current->person.cart[schoice] = coffee[schoice] + " L";
  }
}
  } while (choice2 != 6);

  current = current->next;
  }
}

void viewCart() {
  Node* current = head;
  while (current != nullptr) {
    cout << "Shopper: " << current->person.name << endl;
    cout << "Total Price: " << current->person.price << "p" << endl;
    cout << "Cart:" << endl;
  for (int i = 0; i < 100 && !current->person.cart[i].empty(); ++i) {
    cout << " - " << current->person.cart[i] << " " << current->person.name << endl;
  }

  cout << endl;

  current = current->next;
  }
}

void checkout(){
  Node *current = head;
    cout << "Shopper: " << current->person.name << endl;
    cout << "Your Total is: " << current->person.price << "p" << endl;
    cout << "------------------------------------" << endl;
    cout << "               Loading...           " << endl;
    cout << "------------------------------------" << endl;
    cout << "Your Payment was successful!" << endl;
    cout << "Thank you for choosing barizzta cafe :D" << endl;
  
}
