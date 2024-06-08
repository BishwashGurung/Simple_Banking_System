#include <iostream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

void displayAccountInfo(const BankAccount &account)
{
  account.display();
}

int main()
{
  // Create instances of SavingsAccount and CheckingAccount
  SavingsAccount savings("Alice", 1001, 5000.0, 0.02);
  CheckingAccount checking("Bob", 1002, 2000.0, 500.0);

  // Display account information using polymorphism
  displayAccountInfo(savings);
  displayAccountInfo(checking);

  // Deposit and withdraw
  savings.deposit(500);
  savings.withdraw(1000);
  savings.applyInterest();

  checking.deposit(1000);
  checking.withdraw(3000);

  // Display updated account information
  displayAccountInfo(savings);
  displayAccountInfo(checking);

  return 0;
}
