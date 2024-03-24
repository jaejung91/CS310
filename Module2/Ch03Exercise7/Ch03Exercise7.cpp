/*
* Student Name: Jaeyun Jung
* File Name: Ch03Exercise7
* Date: 3/24/2024
*/

#include <iostream>
#include <iomanip> //imported for input and output 
#include <conio.h>

using namespace std; 

int main() {

    double netBalance, payment, interestRate, averageDailyBalance, interest;
    
    //d1 is number of days in the billing cycle
    //d2 is the number of days payment is made before billing cycle 
    int d1, d2;

    //Accepts netBalance input from the user. 
    cout << "Enter the net balance: "; 
    cin >> netBalance; 

    //Accepts payment input from the user. 
    cout << "Enter payment: "; 
    cin >> payment; 

    //Number of days in the billing cycle (d1). 
    cout << "Enter the number of days in the billing cycle (d1): "; 
    cin >> d1; 

    //Number of days payment is made before the billing cycle ends (d2). 
    cout << "Enter the number of days payment is made before the billing cycle ends (d2): ";
    cin >> d2; 

    //Asks input of interest rate as a decimal. 
    cout << "Enter the monthly interest rate: "; 
    cin >> interestRate; 

    //Calculate the average daily balance.
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1; 

    //Calculate the interest.
    interest = averageDailyBalance * interestRate; 

    //format the output to two decimal places with the thousands separator. 
    cout << fixed << setprecision(2); // set the decimal to two places. 
    locale loc(""); //for the thousands seperator 
    cout.imbue(loc); //for the thousands separator 

    //Display input information to the user. 
    cout << "Net Balance: $" << netBalance << endl; 
    cout << "Payment: $" << payment << endl; 
    cout << "Number of Days in billing cycle: " << d1 << endl; 
    cout << "Number of days payment is made before billing cycle ends: " << d2 << endl; 
    cout << "Monthly Interest Rate as a decimal: " << interestRate << endl; 
    cout << "Average Daily Balance: $" << averageDailyBalance << endl; 
    cout << "Interest on the Upaid Balance: $" << interest << endl; 

    cout << "Press any key to continue..." << endl; 

    _getch(); // Pause the program 

    return 0; 

}

