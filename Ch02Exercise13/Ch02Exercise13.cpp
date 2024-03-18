/*
* Student Name: Jaeyun Jung
* File Name: Ch02Exercise13
* Date: 03/17/2024
*/


#include <iostream>

using namespace std; 

int main()
{
    double originalPrice, markupPercentage, salesTaxRate; 

    cout << "Please enter the original price: $"; 
    cin >> originalPrice; 

    cout << "Please enter the percentage of the marked-up price: "; 
    cin >> markupPercentage;

    cout << "Please enter the sales tax rate as a percentage: "; 
    cin >> salesTaxRate; 

    double sellingPrice = originalPrice * (1 + markupPercentage / 100); 
    double salesTaxPrice = sellingPrice * (salesTaxRate / 100); 
    double finalPrice = originalPrice + salesTaxPrice; 
    

    cout << "Original Price: $" << originalPrice << endl; 
    cout << "Percentage of Mark-up: " << markupPercentage << "%" << endl;
    cout << "Selling Price of Item: $" << sellingPrice << endl; 
    cout << "Sales Tax Rate: " << salesTaxRate << "%" << endl;
    cout << "Sales Tax Price: $" << salesTaxPrice << endl;
    cout << "Final Price: $" << finalPrice << endl; 

    return 0; 
    
}


