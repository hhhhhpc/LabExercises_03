// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H
#include"Account.h"
/* Write a directive to include the Account header file */
class SavingAccount : public Account
/* Write a line to have class SavingsAccount inherit publicly from Account */
{
public:
    SavingAccount(double initialBalance,double rate);
   // constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
    double calculateInterest();
   /* Declare member function calculateInterest */
private:
    double interestRate;
   /* Declare data member interestRate */
}; // end class SavingsAccount

#endif


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
