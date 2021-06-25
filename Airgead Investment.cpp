#include "Airgead Investment.h"

int main()
{
	PrintMenu(); //Display information regarding investment process.
	system("PAUSE"); //Press any key to continue.

	//Collect user input
	cout << "*************************\n"
		 << "********Data Input*******\n"
		 << "Initial Investment Amount: ";
	cin >> initInv;

	cout << "Monthly Deposit: ";
	cin >> monDep;

	cout << "Annual Interest: ";
	cin >> AnuInt;

	cout << "Number of years: ";
	cin >> years;
	months = years * 12;
	system("PAUSE");

	//Yearly
	totalAm = initInv; //Assign total amount with initial investment
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";
	for (int i = 0; i < years; i++) {
		intAmt = (totalAm) * ((AnuInt / 100));//Calculate yearly interest
		totalAm = totalAm + intAmt;//Calculate year total

		//Set precision to show only 2 decimal points
		cout << (i + 1) << "\t\t" << fixed << setprecision(2) << totalAm << "\t\t\t" << intAmt << "\n";

	}

	//Monthly
	totalAm = initInv; //Assign total amount with initial investment
	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";
	for (int i = 0; i < years; i++) {
		//Set yearly interest to zero in the begining
		yearTotInt = 0;
		for (int j = 0; j < 12; j++) {
			intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);//Calculate monthly interest
			yearTotInt = yearTotInt + intAmt;//Calculate month total
			totalAm = totalAm + monDep + intAmt;//Calculate total
		}
		cout << (i + 1) << "\t\t" << fixed << setprecision(2) << totalAm << "\t\t\t" << yearTotInt << "\n";
	}
	return 0;
}