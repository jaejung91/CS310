/*
* Student Name: Jaeyun Jung
* File Name: M4 Discussion; Debugging Assignment 
* Date: 4/4/2024
* 
* This program will take a user's daily reading time for 5 days and provide the average minutes the user read 
* per day for the five days. 
*/


#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{
	int days = 1; //Initializing days to 1 
	int total_minutes = 0
	int minutes_read; 

	while (days <= 5)
	{
		cout << "Enter the number of minutes you read on day " << days << ": "; 
		cin >> minutes_read; 
		total_minutes += minutes_read; 
		days++; //Increment days by 1 for each iteration. 

	}

	double average_minutes = static_cast<double>(total_minutes) / ; //Calculating average minutes for the five days.

	cout << "Average minutes read per day: " << average_minutes << " minutes "<< endl;

	_getch(); //Pause the program.

	return 0; 
}

