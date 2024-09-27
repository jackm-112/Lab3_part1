// Lab3_part1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

extern int dollar, quarter, dime, nickel, penny;
int pennyAmt, nickelAmt, dimeAmt, quarterAmt, dollarAmt;

int main()
{
    //asks the user for the # of pennies and writes it to variable pennyAmt
    cout << "How many pennies did you pay with? (<=100) \n";
    cin >> pennyAmt;

    //the amount of each type of coin is calculated through integer division,
    //and the pennyAmt variable is updated each time to reflect the # of pennies
    //remaining.

    dollarAmt = pennyAmt / dollar;
    pennyAmt = pennyAmt % dollar;

    quarterAmt = pennyAmt / quarter;
    pennyAmt = pennyAmt % quarter;

    dimeAmt = pennyAmt / dime;
    pennyAmt = pennyAmt % dime;

    nickelAmt = pennyAmt / nickel;
    pennyAmt = pennyAmt % nickel;

    //prints out the final totals of each coin type.
    cout << "You paid using " << dollarAmt << " dollar(s), " << quarterAmt << " quarter(s), " << dimeAmt << " dime(s), " << nickelAmt << " nickel(S), and " << pennyAmt << " penny/pennies.";
}
