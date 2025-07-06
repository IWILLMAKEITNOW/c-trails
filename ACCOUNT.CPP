/*
EUGENE GITHINJI
BSE-01-0056/2025
BANL ACCOUNT, SAVINGS AND ACCOUNT HOLDER
*/
#include <iostream>
using namespace std;


class AccountHolder {
protected:
    string name; 

public:
   
    AccountHolder() {
        name = "";
    }

   
    AccountHolder(string n) {
        name = n;
    }

   
    void setName(string n) {
        name = n;
    }

    
    string getName() {
        return name;
    }
};


class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    
    BankAccount(string n, int accNum, double bal)
        : AccountHolder(n)
    {
        accountNumber = accNum;
        balance = bal;
    }

  
    int getAccountNumber() {
        return accountNumber;
    }

   
    double getBalance() {
        return balance;
    }
};


class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    
    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal) 
    {
        interestRate = rate;
    }

   double getInterestRate() {
        return interestRate;
    }
};


int main() {
    
    SavingsAccount savings("John James", 12345, 500000.0, 2.5);

   
    cout << "Account Holder: " << savings.getName() << endl;
    cout << "Account Number: " << savings.getAccountNumber() << endl;
    cout << "Balance: ksh" << savings.getBalance() << endl;
    cout << "Interest Rate: " << savings.getInterestRate() << "%" << endl;

    return 0;
}
