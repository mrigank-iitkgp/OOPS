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
        virtual void Withdraw(float amount) = 0;
        virtual void Deposit(float amount) = 0;
        virtual void printBalance() = 0;
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
    Account * acc[2];
    acc[0] = new Savings(50000);
    // Account * acc1 = new Account(5000);  Not allowed as the base class is Abstract
    acc[0]->Deposit(1000);
    acc[0]->printBalance();
    acc[0]->Withdraw(3000);
    acc[0]->printBalance();

    cout << endl;

    acc[1] = new Current(50000);
    acc[1]->Deposit(1000);
    acc[1]->printBalance();
    acc[1]->Withdraw(3000);
    acc[1]->printBalance();
}