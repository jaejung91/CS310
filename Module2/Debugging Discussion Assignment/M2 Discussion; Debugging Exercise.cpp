/*
* Student Name : Jaeyun Jung
* File Name : M2 Discussion; Debugging Assignment
* Date: 3 / 21 / 2024
*/


#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	double hoursWorked;
	double hourlyRate;
	double regularPay;
	double overtimePay;
	double totalPay;

	cout << "Enter hours worked: ";
	cin >> hoursWorked;

	cout << "Enter hourly rate; $"
	cin >> hourlyRate;

	if (hoursWorked >= 40) {
		overtimePay = (hoursWorked - 40) * hourlyRate * 1.5;
		hoursWorked = 40;
	}
	else {
		overtimePay = 0; //initialize overtimePay
	}

	regularPay = hoursWorked * hourlyRate;
	totalPay = regularPay + overtimePay;

	cout << "Total pay: $" << totalPay << endl;



	_getch(); //ending the program 

	return 0;
