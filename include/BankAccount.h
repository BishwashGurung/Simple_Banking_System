#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount
{
protected:
  string accountHolderName;
  int accountNumber;
  double balance;

public:
  // Constructor
  BankAccount(string name, int number, double bal);

  // Virtual destructor
  virtual ~BankAccount();

  // Deposit method
  void deposit(double amount);

  // Withdraw method
  virtual void withdraw(double amount);

  // Display account info
  virtual void display() const;
};

#endif // BANKACCOUNT_H
