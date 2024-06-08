#include "CheckingAccount.h"
#include <iostream>
using namespace std;

// Constructor
CheckingAccount::CheckingAccount(string name, int number, double bal, double overdraft)
    : BankAccount(name, number, bal), overdraftLimit(overdraft) {}

// Overriding withdraw method
void CheckingAccount::withdraw(double amount)
{
  if (amount > 0 && amount <= balance + overdraftLimit)
  {
    balance -= amount;
    cout << "Withdrew: " << amount << endl;
  }
  else
  {
    cout << "Invalid withdraw amount or exceeds overdraft limit." << endl;
  }
}

// Overriding display method
void CheckingAccount::display() const
{
  BankAccount::display();
  cout << "Overdraft Limit: $" << overdraftLimit << endl;
}
