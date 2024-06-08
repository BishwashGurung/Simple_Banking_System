#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount
{
private:
  double interestRate;

public:
  // Constructor
  SavingsAccount(string name, int number, double bal, double rate);

  // Apply interest
  void applyInterest();

  // Overriding display method
  void display() const override;
};

#endif // SAVINGSACCOUNT_H
