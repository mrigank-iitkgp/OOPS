#include <iostream>
#include <string>
using namespace std;

class Account {
    protected:
        float balance;
    public:
        Account(float balance) {
            this->balance = balance;
        }
        virtual void Withdraw(float amount) {}
        virtual void Deposit(float amount) {}
        virtual void printBalance() {}
};

class Savings : public Account {
    private:
        float interestRate = 0.8;
    public:
        Savings(float balance) : Account(balance) { }
        void Withdraw(float amount) {
            balance = balance - amount - (interestRate * amount);
        }
        void Deposit(float amount) {
            balance = balance + amount + (interestRate * amount);
        }
        void printBalance() {
            cout << "Balance in your saving account: " << balance << endl;
        }
};

class Current : public Account {
    public:
        Current(float balance) : Account(balance) { }
        void Withdraw(float amount) {
            balance -= amount;
        }
        void Deposit(float amount) {
            balance += amount;
        }
        void printBalance() {
            cout << "Balance in your current account: " << balance << endl;
        }
};

int main() {
    Savings s1(50000);
    Account * acc = &s1;
    acc->Deposit(1000);
    acc->printBalance();
    acc->Withdraw(3000);
    acc->printBalance();
    
    cout << endl;

    Current c1(50000);
    acc = &c1;
    acc->Deposit(1000);
    acc->printBalance();
    acc->Withdraw(3000);
    acc->printBalance(); 
}