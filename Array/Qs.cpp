#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;
    public:
    BankAccount(string a , double b){
        accountNumber = a;
        balance = b;
    }
    void deposit(double h ){
        balance +=h;
    }
    void withdraw(double g){
        if(balance < g){
            cout<<"balance is low";
        }
        else{
            balance-=g;
        }
    }
    
};

int main()
{
    string acno = "SB-123";
    double Opening_balance, deposit_amt, withdrawal_amt;
    Opening_balance = 1000;
    cout << "A/c. No." << acno << " Balance: " << Opening_balance << endl;

    BankAccount account(acno, 1000.0);

    deposit_amt = 1500;
    cout << "Deposit Amount: " << deposit_amt << endl;
    account.deposit(deposit_amt);

    withdrawal_amt = 750;
    cout << "Withdrawal Amount: " << withdrawal_amt << endl;
    account.withdraw(withdrawal_amt);

    withdrawal_amt = 1800;
    cout << "Attempt to withdrawal Amount: " << withdrawal_amt << endl;
    account.withdraw(withdrawal_amt);

    return 0;
}
