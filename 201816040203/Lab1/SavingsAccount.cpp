// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include <iostream>
using namespace std;
#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance,double ratevalue)
{
    rate=ratevalue;
    if ( initialBalance >= 0.0 )
      balance = initialBalance;
   else // otherwise, output message and set balance to 0.0
   {
      cout << "Error: Initial balance cannot be negative." << endl;
      balance = 0.0;
   }
}
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
void SavingsAccount::calculateInterest(double)
{
    return balance*rate;
}
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */


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
