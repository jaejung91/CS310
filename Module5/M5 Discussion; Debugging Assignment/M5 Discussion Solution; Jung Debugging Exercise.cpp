/*
* Student Name: Jaeyun Jung
* File Name: M5 Discussion Solution; Debugging Assignment
* Date: 4/14/2024
*
* This program will help users make a decision on which type of micro studio unit would be best to move into.
* This program will show the cost of living in ABC Micro Studio Apartments based on the size to help compare with
* prices in the market.
* The program will ask users to enter the amount of sq ft from the range 150-350 and then show the price of the unit.
* Then the program will display the total cost to live in the micro studio apartment for one year.
*
* There are 2 errors!
*
*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

double calculateCost(double monthly_rent)
{
	return monthly_rent * 12;

}

int main()
{
	cout << "Welcome to ABC Micro Studio Apartments. \n";
	cout << "Please enter the desired square footage between 150 and 350 sq ft: ";

	int sq_ft;
	cin >> sq_ft;

	if (sq_ft < 150 || sq_ft > 350)
	{
		cout << "Sorry, this apartment does not have micro studio units of that size.\n";
	}
	else
	{
		double monthly_rent;
		if (sq_ft >= 150 && sq_ft <= 249)
		{
			monthly_rent = 1150.00;

		}
		else if (sq_ft >= 250 && sq_ft <= 299) //Error 1: Added the missing comparison operator <= before 299. 
		{
			monthly_rent = 1400.00;
		}
		else
		{
			monthly_rent = 1500.00;
		}

		//Format the output to two decimal places with thousands separator. 
		cout << fixed << setprecision(2);
		locale loc(""); //for thousands separator 
		cout.imbue(loc); //for thousands separator 

		cout << "The total monthly rent to live in this unit is $" << monthly_rent << ".\n";

		double yearly_cost = calculateCost(monthly_rent);

		cout << "The total yearly cost to live in this unit is $" << yearly_cost << ".\n";

		cout << "\n Press any key to exit the program..." << endl;

	} //Error 2: Added the missing closing curly brace for 'else'

		_getch(); //Pause the program

		return 0;
}