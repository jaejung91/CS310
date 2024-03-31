// Reply Solution to Hahn_M3 Discussion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 
#include <conio.h> 

using namespace std;

int main()
{
	double wages, rate, hours;
	cout << fixed << showpoint << setprecision(2);
		cout << "Enter hours and rate: " << endl;
	cin >> hours >> rate;

	if (hours > 8.0)
		wages = 8.0 * rate + 1.5 * rate * (hours - 8.0);
	else
		wages = hours * rate;

	cout << endl;
	cout << "The wages are $" << wages << endl;

	std::cout << "Press any key to continue...\n";
	_getch();

	return 0;
}