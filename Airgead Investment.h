#include <iostream>
#include <iomanip>

using namespace std;

//Declaring variables for storing user input.
float initInv, monDep, AnuInt, years, months;

//Declaring variables for year end total and storing interest.
float totalAm;
float intAmt, yearTotInt;

void PrintMenu() {
	cout << "*************************\n"
		 << "********Data Input*******\n"
		 << "Initial Investment Amount: \n"
		 << "Monthly Deposit: \n"
		 << "Annual Interest: \n"
		 << "Number of years: \n";
}