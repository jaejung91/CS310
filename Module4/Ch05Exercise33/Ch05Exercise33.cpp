/*
* Student Name: Jaeyun Jung
* M4 Assignment: Ch05Exercise33
* Date: 4/7/2024
*
* Quick scenario:
* Bianca is preparing a special dish for her daughter's birthday.
* It takes her a min to prepare the first dish,
* and each following dish takes "b" min longer than the previous dish.
* She has "t" minutes to prepare the dishes.
*
* This program will prompt the user to enter the values of a, b, and t, and outputs the number of dishes
* Bianca can prepare.
*/


#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	//Set the variables. 
	int a, b, t, total_minutes = 0, dish_count = 0;

	//Asks user to enter values of a, b, and t
	cout << "Enter the number of minutes to prepare for the first dish: ";
	cin >> a;

	cout << "Enter how many more minutes it will take to prepare the next dish: ";
	cin >> b;

	cout << "Enter the total time in minutes to prepare all the dishes: ";
	cin >> t;
	cout << endl;

	//Calculate the number of dishes Bianca can prepare using while loop. 
	//total_minutes + a: calculates total time Bianaca will have spent preparing dishes after completing
	//current dish. 
	while (total_minutes + a <= t) //checks if total time spent preparing dishes (including current dish) is <= to t
	{
		total_minutes += a;
		a += b; //Increment the preparation time for the next dish 
		dish_count++;

	}

	//Show the results.
	cout << "Bianca can prepare a total of " << dish_count << " dishes" << " in " << t << " minutes. " << endl;
	cout << "\n Press any key to exit the program..." << endl;

	_getch(); //Pause the program

	return 0;

}
