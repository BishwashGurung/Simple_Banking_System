#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
private:
  double overdraftLimit;

public:
  // Constructor
  CheckingAccount(string name, int number, double bal, double overdraft);

  // Overriding withdraw method
  void withdraw(double amount) override;

  // Overriding display method
  void display() const override;
};

#endif // CHECKINGACCOUNT_H
