#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"
/* Write a directive to include the Account header file */

class SavingsAccount:public Account/* Write a line to have class SavingsAccount inherit publicly from Account */
{
public:
   SavingsAccount(double ,double );// constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
   double  calculateInterest();/* Declare member function calculateInterest */
private:
   double interestRate;
   /* Declare data member interestRate */
}; // end class SavingsAccount
