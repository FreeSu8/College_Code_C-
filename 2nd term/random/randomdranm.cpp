#include <iostream> 
#include <string> 
#include <cstdlib>
using namespace std;

struct Shopper {
  string name; 
  int price;
  int cart[]; 
};

struct Node {
  Shopper person; 
  Node* next;
};

Node* head = nullptr;

void addBuyer(const Shopper& person);
void SelectProduct();
void viewCart();

int main(){

  int choice1, *total;
  
  do{
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
  }while (choice1 != 5);
    
    switch (choice1){
      case 1: {
        Shopper P1;
        cout << "Enter Name" << endl; 
        cin >> P1.name;
        addBuyer(P1);
          break;
      }
      case 2:{
        SelectProduct();
        break;
      }
      case 3:{
        viewCart();
        break;
      }
      case 4:
        break;
      
    }
}

void addBuyer(const Shopper& person) { 
  Node* newNode = new Node;
  newNode->person = person; 
  newNode->next = head; 
  head = newNode;
}

void SelectProduct() {
  int priceM[5] = {130, 125, 130, 135, 140};
  int priceL[5] = {160, 155, 160, 165, 170};
  int choice2, cartsize = 0, total = 0, schoice, stringsize = 100;
  char size; 
  string kart[stringsize] ={};

  
  Node* current = head;
  while (current != nullptr) {
    cout << "Shopper: " << current->person.name << endl; 
    do{
      cout << "Menu: " << endl; 
      cout << "----Drinks---------Medium-----Large" << endl; 
      cout << "[1] Macchiato   ==  130p  ==  160p" << endl;
      cout << "[2] Espresso    ==  125p  ==  155p" << endl;
      cout << "[3] Americano   ==  130p  ==  160p" << endl;
      cout << "[4] Cappuccino  ==  135p  ==  165p" << endl;
      cout << "[5] Affogato    ==  140p  ==  170p" << endl;
      cout << "[6] Done" << endl;
      cin >> choice2;  
      cout << "Pick a Size M/L, and Drink ?" << endl;
      cin >> size;
      schoice = choice2;
    
      switch(schoice){
        case 1:
          if (size == 'M'){
            current->person.price =+ priceM[0];
            current->person.cart[stringsize] + "Macchiato M";
            }
          else {
            current->person.price =+ priceL[0];
            current->person.cart[stringsize] + "Macchiato L";
            }
          break;
        case 2:
          if (size == 'M') {
            current->person.price =+ priceM[1];
            current->person.cart[stringsize] + "Espresso M";
            }
          else {
            current->person.price =+ priceL[1];
            current->person.cart[stringsize] + "Espresso L";
            }
          break;
        case 3:
          if (size == 'M'){
            current->person.price =+ priceM[2];
            current->person.cart[stringsize] + "Americano M";
            }
          else {
            current->person.price =+ priceL[2];
            current->person.cart[stringsize] + "Americano L";
            } 
          break;
        case 4:
          if (size == 'M'){
            current->person.price =+ priceM[3];
            current->person.cart[stringsize] + "Cappuccino M";
            }
          else {
            current->person.price =+ priceL[3];
            current->person.cart[stringsize] + "Cappuccino L";
            }
          break;
        case 5:
          if (size == 'M'){
            current->person.price =+ priceM[4];
            current->person.cart[stringsize] + "Affogato M";
           }
          else{ 
            current->person.price =+ priceL[4];
            current->person.cart[stringsize] + "Affogato L";
            }
          break;
      }
    }while(schoice != 6);
  }
current = current->next;
}

void viewCart() {
    Node* current = head;
    while (current != nullptr) {
        cout << "Shopper: " << current->person.name << endl;
        cout << "Total Price: " << current->person.price << "p" << endl;
        cout << "Cart:" << endl;
        for (int i = 0; i < INNER_ARRAY_SIZE; ++i) {
            if (!current->person.cart[i].empty()) {
                cout << " - " << current->person.cart[i] << " " << current->person.name << endl;
            }
        }
        cout << endl;

        current = current->next;
    }
}