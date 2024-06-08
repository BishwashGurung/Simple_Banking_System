#include "BankAccount.h"
#include <iostream>
using namespace std;

// Constructor
BankAccount::BankAccount(string name, int number, double bal)
    : accountHolderName(name), accountNumber(number), balance(bal) {}

// Virtual destructor
BankAccount::~BankAccount() {}

// Deposit method
void BankAccount::deposit(double amount)
{
  if (amount > 0)
  {
    balance += amount;
    cout << "Deposited: " << amount << endl;
  }
  else
  {
    cout << "Invalid deposit amount." << endl;
  }
}

// Withdraw method
void BankAccount::withdraw(double amount)
{
  if (amount > 0 && amount <= balance)
  {
    balance -= amount;
    cout << "Withdrew: " << amount << endl;
  }
  else
  {
    cout << "Invalid withdraw amount or insufficient balance." << endl;
  }
}

// Display account info
void BankAccount::display() const
{
  cout << "Account Holder: " << accountHolderName << endl;
  cout << "Account Number: " << accountNumber << endl;
  cout << "Balance: $" << balance << endl;
}
