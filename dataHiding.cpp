#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initial_amount) {
        if (initial_amount>=0) {
            balance=initial_amount;
        } else {
            balance = 0;
            cout<<"Insufficient Balance\n";
        }
    }
    void deposit(double amount) {
        if (amount>0) {
            balance += amount;
            cout<<"Deposited: "<<amount<<"\nNew Balance: "<<balance<<"\n";
        } else {
            cout<<"Invalid\n";
        }
        cout<<endl;
    }
    void withdraw(double amount) {
        if (amount>0 && amount<=balance) {
            balance-=amount;
            cout<<"Withdrew: "<<amount<<"\nNew Balance: "<<balance<<"\n";
        } else {
            cout<<"Withdrawal Failed\n";
        }
    }
    void showBalance() {
        cout<<"Current Balance: "<<balance<<"\n";
    }
};
int main() {
    BankAccount myAccount(1000);
    myAccount.showBalance();
    myAccount.deposit(500);   
    myAccount.withdraw(200);  
    myAccount.withdraw(5000); 
    return 0;
}