#include <iostream>
using namespace std;

int main() {
	
  double balance;
  cout << "Enter your bank account balance: $";
  cin >> balance;

  string accountType;
  cout << "Enter the type of account (Personal or Business): ";
  cin >> accountType;

  string level;
  cout << "Enter the level of account (Standard, Gold, or Platinum): ";
  cin >> level;

  double interestRate = 0;
  if (accountType == "Personal") {
    if (level == "Standard" && balance >= 0) {
      interestRate = 1.2;
    } else if (level == "Gold" && balance >= 1000) {
      interestRate = 1.9;
    } else if (level == "Gold" && balance >= 5000) {
      interestRate = 2.3;
    }
  } else if (accountType == "Business") {
    if (level == "Standard" && balance >= 1500) {
      interestRate = 1.7;
    } else if (level == "Platinum" && balance >= 10000) {
      interestRate = 2.5;
    }
  }

  cout << "Your interest rate is: " << interestRate << "%" << endl;
  return 0;

}