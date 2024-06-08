#include "SavingsAccount.h"
#include <iostream>
using namespace std;

// Constructor
SavingsAccount::SavingsAccount(string name, int number, double bal, double rate)
    : BankAccount(name, number, bal), interestRate(rate) {}

// Apply interest
void SavingsAccount::applyInterest()
{
  balance += balance * interestRate;
  cout << "Interest applied at rate: " << interestRate << endl;
}

// Overriding display method
void SavingsAccount::display() const
{
  BankAccount::display();
  cout << "Interest Rate: " << interestRate << endl;
}
