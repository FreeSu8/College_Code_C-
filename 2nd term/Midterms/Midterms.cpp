#include <iostream>
#include <cstring>
using namespace std;

struct Student{
    int studentID;
    char firstname[50];
    char lastname[50];
    float GPA;
};

void addStudent(Student students[], int &numStudents);
void displayStudents(const Student students[], int numStudents);
float calc(const Student students[], int numStudents);
void findStudentsByLastName(const Student students[], int numStudents, const char lastname[]);

int main(){
    Student students[100];
    int numStudents = 0, choice;
    
do {
    cout << "\nStudent Management Menu:" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display All Students" << endl;
    cout << "3. Find Students by Last Name" << endl;
    cout << "4. Avg GPA Calculator" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            addStudent(students, numStudents);
            break;
        case 2:
            displayStudents(students, numStudents);
            break;
        case 3:
            char lastNameToFind[50];
            cout << "Enter last name to find: ";
            cin >> lastNameToFind;
            findStudentsByLastName(students, numStudents, lastNameToFind);
            break;
        case 4:
            cout << "Avg GPA Calculator" << endl;
            cout << calc(students,numStudents);
            break;
        case 5:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
} while (choice != 5);
return 0;
}

void addStudent(Student students[], int &numStudents){

    cout << "Enter Student ID: " << endl;
    cin >> students[numStudents].studentID;
    if (students[numStudents].studentID )

    cout << "Enter First name: " << endl;
    cin.ignore();
    cin.getline(students[numStudents].firstname, 50);
    cout << "Enter Last name: " << endl;

    cin.getline(students[numStudents].lastname, 50);
    cout << "Enter student GPA: " << endl;

    cin >> students[numStudents].GPA;
    if (students[numStudents].GPA > 100){
        cout << "Invalid Student GPA" << endl;
    }
    numStudents++;
}

float calc(const Student students[], int numStudents) {
    if (numStudents == 0){
        return 0.0;
    }
    float gGPA = 0.0;
    for (int i = 0; i < numStudents; i++) {
        gGPA += students[i].GPA;
    }
    return gGPA / numStudents;
}

void displayStudents(Student students[], int numStudents) {
    
    cout << "List of Students:" << endl;
    cout << "Student ID # " << "    " << " First Name " << "      " << " Last Name " << "      " << "GPA" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].studentID << "          " << students[i].firstname << "            " << students[i].lastname << "             " << students[i].GPA << endl;
    }
}

void findStudentsByLastName(const Student students[], int numStudents, const char lastname[]) {
    
    bool found = false;
    cout << "\nStudents with last name '" << lastname << "':" << endl;

    for (int i = 0; i < numStudents; i++) {
        
        if (strcmp(students[i].lastname, lastname) == 0) {
            cout << " Student ID#" << i + 1 << " ID: " << students[i].studentID << endl;
            cout << " First Name: " << students[i].firstname << endl;
            cout << " Last Name: " << students[i].lastname << endl;
            cout << " GPA: " << students[i].GPA << endl;

            found = true;  
        }
    }
    if (!found) {
        cout << "No students found with the last name '" << lastname << "'." << endl;
    }
}