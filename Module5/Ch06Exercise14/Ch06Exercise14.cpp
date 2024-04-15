/*
*Student Name: Jaeyun Jung 
* M5 Assignment: Ch06Exercise14
* Date: 4/14/2024
* 
* Scenario: 
* During tax season, every Friday, the J&J accounting firm provides assistance to people who prepare their own 
* tax returns. Their charges are as follows:
* a. If a person has low income (<= 25,000) and the consulting time is less than or equal to 30 minutes, 
* there are no charges; otherwise, the service charges are 40% of the regular hourly rate for the time over 30 minutes. 
* b. For others, if the consulting time is less than or equal to 20 minutes, there are no service charges;
* otherwise, service charges are 70% of the regular hourly rate for the time over 30 minutes. 
* This program prompts the user to enter the hourly rate, total consulting time, and whether the person
* has low income. 
* The program should output billing amount.
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale>

using namespace std; 

//Define a function that calculates the billing amount based on the hourly rate, total consulting time, and income status.
double billingAmount(double hourlyRate, int total_consulting_time, char income_status)
{
    double amount = 0;  //variable to store billingAmount
    double consulting_time = 0; // variable to store consulting time over 30 minutes 
    
        if (income_status == 'L') //Determining income status for the main function. 
        {
            if (total_consulting_time > 30) {
                consulting_time = total_consulting_time - 30; 
                amount = hourlyRate * 0.40 * consulting_time / 60; 
                return amount; 

            }
        }
        else
        {
            if (total_consulting_time > 20)
            {
                consulting_time = total_consulting_time - 20; 
                amount = hourlyRate * 0.70 * consulting_time / 60; 
                return amount; 

            }
        }
    return 0; 
    
}

int main()
{
    double yearlyIncome; 
    double hourlyRate; 
    double total_consulting_time; 
    
    cout << "Enter your yearly income: "; 
    cin >> yearlyIncome; 

    char incomeStatus; 
    
    //Determine income status based on yearly income. 
    if (yearlyIncome <= 25000)
    {
        incomeStatus = 'L'; //low income 

     }
    else
    {
        incomeStatus = 'H'; //higher income 
    }

    cout << "Enter the hourly rate: ";
    cin >> hourlyRate; 

    cout << "Enter total consulting time in minutes (whole number please): "; 
    cin >> total_consulting_time; 

  
    //format the output to two decimal places with thousands separator. 
    cout << fixed << setprecision(2); 
    locale loc(""); //for thousands separator
    cout.imbue(loc); //for thousands separator


    //Display the results
    double billing_amount = billingAmount(hourlyRate, total_consulting_time, incomeStatus); 
    cout << "The billing amount is: $ " << billing_amount; 
    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program 

    return 0; 
}
