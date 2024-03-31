/*Name: Jaeyun Jung
* M3 Discussion Reply to Rebecca Hahn 
* Date 3/31/2024
*/

#include <iostream>
#include <iomanip> 
#include <conio.h> 

using namespace std;

int main()
{
	double wages, rate, hours;
	cout << fixed << showpoint << setprecision(2); //added missing semicolon 
	cout << "Enter hours and rate: " << endl;
	cin >> hours >> rate;

	if (hours > 8.0)
		wages = 8.0 * rate + 1.5 * rate * (hours - 8.0);
	else
		wages = hours * rate;

	cout << endl;
	cout << "The wages are $" << wages << endl;//1) changed typo (end1 to endl) and 2) took out "Line 27:" 

	std::cout << "Press any key to continue...\n";
	_getch();

	return 0;
}