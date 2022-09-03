#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
        string name;
        int id;
        int reportsTo;
    public:
        Employee(string name , int id , int reportsTo) {
            this->name = name;
            this->id = id;
            this->reportsTo = reportsTo;
        }
        string getName() {
            return name;
        }
        int getID() {
            return id;
        }
        int getBoss() {
            return reportsTo;
        }
        void display() {
            cout << name << " reports to " << reportsTo << endl;
        }
        void display(string salutation) {
            cout << salutation << " ";
            display();
        }
};

class Manager : public Employee {
    protected:
        string teamName;
    public:
        Manager(string name , int id , int reportsTo , string teamName) : 
        Employee(name , id , reportsTo) {
                this->teamName = teamName;
        }
        void display() {
            Employee::display();
            cout << "Heads the team " << teamName << endl;
        }
};

int main() {
    Employee worker("John Smith", 10, 2);
    Manager ceo("Jack Hobbs", 0, 0, "Eats R Us");
    Manager cto("Elizabeth Shaw", 2, 0, "IT");
    worker.display("Mr");
    ceo.display();
    cto.display();
}

