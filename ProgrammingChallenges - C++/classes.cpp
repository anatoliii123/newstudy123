
//  Created by Amp on 8/9/13.
//  Copyright (c) 2013 Amp. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class BankAccount {

private:
    int accountNum;
    string accountName;
    double accountBal;

public:
    //Constructors defined here
    BankAccount(int accountNum, string accountName ,double accountBal);
    BankAccount(int accountNum, string accountName);
    BankAccount() {}

    //Accessor Methods
    int getAccountNum() { return accountNum; }
    string getAccountName() { return accountName; }
    double getAccountBal() { return accountBal; }
   
    //Mutator Methods
    bool withdraw(double amt);
    void deposit(double amt);
    void changeName(string name);
};


BankAccount::BankAccount(int accountNum, string accountName, double accountBal){
    this->accountNum = accountNum;
    this->accountName = accountName;
    this->accountBal = accountBal;
}

BankAccount::BankAccount(int accountNum, string accountName){
    this->accountNum = accountNum;
    this->accountName = accountName;
}

bool BankAccount::withdraw(double amt){
    if (this->accountBal - amt >=0)
    {
        this->accountBal = this->accountBal - amt;
        cout << "Withdraw successful:  Balance is $" << this->accountBal << "\n";
        return true;
    }
    else{
        cout << "Withdraw unsuccessful:  Not enough money in this account.\n";
        return false;
    }
}

void BankAccount::deposit(double amt){
    this->accountBal = this->accountBal + amt;
    cout << "Balance is now $" << this->accountBal << "\n";
}

void BankAccount::changeName(string name){
    this->accountName = name;
}



using namespace std;

int main(int argc, const char * argv[]) {
   BankAccount *example;
   int tempint;
   string tempstr2;
   cout<<"Choose an option:\n"<<"1-Deposit\n2-Withdraw:\n";
   cin>>tempint;
   switch(tempint)
   {
       case 1:
       int tempint1;
       cout<<"How much would you like to deposit?: \n";
       getline(std::cin,tempint1);
       cout<<tempint1;
       (*example).deposit (tempint1);
       {
           cout<<"Deposit error";
       }
       cout<<"Your current balance is "<<example->getAccountBal()<<" Goodbye!";
   }
}