#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;

int main(){
    cout << "Welcome\n";
    cout << "This is the main program\n";
    cout << "Shall we start with the introduction?\n";
        
    {
        string name;
        string gender;
        string choice;
        int age;

        cout << "What's your name? ";
        cin >> name;
        cout << "Ok " << name << "\n";

        
        cout << "Your gender? ";
        cin >> gender;

        cout << "How old are you?? ";
        cin >> age;

        if ((age <=10) && (((gender == "male") || (gender == "m")) && ((gender == "female") || (gender == "f")))){
            cout << "Hi!, are you ready to learn? " << name << "\n";
            cout << "Sex: " << gender << "\n";
            cout << "Age: " << age << "\n";
        }
        else if ((age >=10) && ((gender == "female") || (gender == "f"))){
            cout << "Good day Madam!, " << name << "\n";
            cout << "Sex: " << gender << "\n";
            cout << "Age: " << age << "\n";
        }
        else if ((age >=10) && ((gender == "male") || (gender == "m"))){
            cout << "Good day, Sir! " << name << "\n";
            cout << "Sex: " << gender << "\n";
            cout << "Age: " << age << "\n";
        }
                cout << "This program is to mark the milestones for my coding journey.\n";
                cout << "The basics are cout, cin, string, double, float, bool, char, int and void.\n";
                cout << "Have you learned about them? .\n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have you also learned about the use of if, else if and else? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of switch, case and default? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of for loops? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of functions? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of pointers? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of arrays? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of structs? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of enums? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
                cout << "Have also learned about the use of templates? \n";
                cin >> choice;
                if (choice == "yes"){   
                    cout << "well done!\n";
                }
                else if (choice == "no"){
                    cout << "then go study!\n";
                    cout << "come back when you've learned it\n";
                }
        }
        return 0;
}
  