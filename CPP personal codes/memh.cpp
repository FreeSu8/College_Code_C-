#include <iostream>
#include <windows.h>

using namespace std;

class greetings {
private:
    string name;
    string job;
    int age;
public:
    void setName(string Name) {
        name = Name;
    }
    string getName() {
        return name;
    }
    void setJob(string Job) {
        job = Job;
    }
    string getJob() {
        return job;
    }
    void setAge(int Age) {
        age = Age;
    }
    int getAge() {
        return age;
    }

    void intro1() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Work: " << getJob() << endl;
    }
    greetings(string Nname,string Jjob, int Aage){
        name = Nname;
        job = Jjob;
        age = Aage;
    }
};

int main() {
    string name, job, Name_upd, Job_upd;
    int age, Age_upd ;

    cout << "Greetings, may we know who you are and how old you are? \n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Mhmm... now, tell me what is your current occupation? \n";
    cout << "Work: ";
    cin >> job;
    
    greetings personA = greetings(name,job,age);

    personA.intro1();

    Sleep(500 * 10);
    cout << "2 Years later...\n";
    Sleep(500 * 10);

    cout << "**Updated Registry**\nName: ";
    cin >> Name_upd;
    cout << "Age: ";
    cin >> Age_upd;
    cout << "Job: ";
    cin >> Job_upd;

    personA.setName(Name_upd);
    personA.setAge(Age_upd);
    personA.setJob(Job_upd);
    
    personA.intro1();

    
    
    return 0;
}