/*
* Student Name: Jaeyun Jung
* M3 Assignment; Ch04Exercise16
* Date 3/31/2024
* 
* Scenario: A new author is in the process of negotiating a contract for a new romance novel. 
* The publisher is offering 3 options. 
* This program prompts the author to enter the net price of each copy of the novel and 
* the estimated number of copies that will be sold. 
* Then the program will output the royalties under each of the three options and the best option
* the author can choose from
* 
* opt1 author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published
* opt2 author is paid 12.5% of the net price of the novel for each copy of the novel sold
* opt3 author is paid 10% of the net price for the first 4,000 copies sold, and 14% of the net price for the 
* copies sold over 4,000
* 
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std; 

int main()
{
    //variables 
    double bookNetPrice, option2_royalty, option3_royalty;
    int copiesSold; 
    string bestOption; 

    //Constants 
    const double option1_royalty = 25000; 
    const double option2_royaltyRate = 0.125; 
    const double option3_royaltyRate_under4000 = 0.10; 
    const double option3_royaltyRate_over4000 = 0.14; 

    //Input net price of each copy of the novel.
    cout << "Enter the net price of the novel: $"; 
    cin >> bookNetPrice; 

    //Input estimated number of copies to be sold. 
    cout << "Enter estimated number of copies to be sold: "; 
    cin >> copiesSold; 

    //Calculate royalty amount for option 2. 
    option2_royalty = (bookNetPrice * option2_royaltyRate) * copiesSold; 

    //Calculate royalty amount for option 3. 
    if (copiesSold <= 4000)   //copies sold under 4000
        option3_royalty = bookNetPrice * copiesSold * option3_royaltyRate_under4000;
    else if (copiesSold > 4000)   //copies sold over 4000
        option3_royalty = ((bookNetPrice * copiesSold * option3_royaltyRate_under4000) + bookNetPrice * (copiesSold - 4000) * option3_royaltyRate_over4000); 

    //Check the best option. 

    if (option1_royalty > option2_royalty && option1_royalty > option3_royalty)
        bestOption = "Option 1";
    else if (option2_royalty > option1_royalty && option2_royalty > option3_royalty)
        bestOption = "Option 2";

    else
        bestOption = "Option 3"; 


    //format the output to two decimal places with thousands separator. 
    cout << fixed << setprecision(2); 
    locale loc(""); //for thousands separator
    cout.imbue(loc); //for thousands separator 

    //Display the results. 
    cout << "Total Royalty amount for Option 1: $" << option1_royalty << endl; 
    cout << "Total Royalty amount for Option 2: $" << option2_royalty << endl;
    cout << "Total Royalty amount for Option 3: $" << option3_royalty << endl; 

    //Show the best option. 
    cout << "The best option is: " << bestOption << "." << endl; 

    _getch(); //Pause the program

    return 0; 
    
}

