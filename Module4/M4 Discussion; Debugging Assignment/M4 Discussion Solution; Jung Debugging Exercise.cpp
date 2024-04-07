/*
* Student Name: Jaeyun Jung
* File Name: M4 Discussion Solution; Debugging Assignment
* Date: 4/7/2024
*
* This program will take a user's daily reading time for 5 days and provide the average minutes the user read
* per day for the five days.
* 
* There are 2 errors below. 
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int days = 1; //Initializing days to 1 
	int total_minutes = 0; // Error 1: Missing semicolon at end. 
		int minutes_read;

	while (days <= 5)
	{
		cout << "Enter the number of minutes you read on day " << days << ": ";
		cin >> minutes_read;
		total_minutes += minutes_read;
		days++; //Increment days by 1 for each iteration. 

	}

	double average_minutes = static_cast<double>(total_minutes) / 5 ; //Error 2: Add the missing 5 to find the average. 
	//Calculating average minutes for the five days.

	cout << "Average minutes read per day: " << average_minutes << " minutes " << endl;

	_getch(); //Pause the program.

	return 0;
}