/*
* Student Name: Jaeyun Jung
* M12 Assignment: Ch14Exercise1
* Date: 6/1/2024
* 
* This program will prompt the user to enter a length in feet and inches and then will output the 
* equivalent length in centimeters. If the user enters a negatie number or a nondigit number, the
* program will throw and handle an appropriate exception and prompt the user to enter another set of numbers. 
* The program contains at least two exception classes: negativeNumber and nonNumber. 
* 
*
*/ 

#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std; 

const double conversion = 2.54; //constant for the conversion factor from inches to centimeters 
const int inchesForFoot = 12;   //constant for number of inches in 1 foot 

class negativeNumber {}; //empty class to be used as exception for negative number inputs 
class nonNumber {};    //empty class to be used as exception for non-numbers 

double getLength(); 

int main()
{
    double feet; 
    double inches; 
    double centimeters; 

    cout << fixed << showpoint << setprecision(2) << endl; //decimal point in 2 places 

    cout << "Enter the amount in Feet: "; 
    feet = getLength();   //calls getLength function to store input in feet
    cout << endl; 

    cout << "Enter the amount in Inches: ";  
    inches = getLength();   //calls getLength function to store input in inches
    cout << endl; 

    centimeters = (feet * inchesForFoot + inches) * conversion; //Calculates to inches. 

    cout << "The length converted in centimeters: " << centimeters << endl; 



    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program 

    return 0; 
}

double getLength()
{
    double number;  //variable to store user input 
    bool done = false; 

    do
    {
        try
        {
            cout << "Enter a non-negative number: "; 
            cin >> number; 
            cout << endl; 

            if (number < 0)
                throw negativeNumber(); 
            if (!cin)
                throw nonNumber(); 

            done = true; //sets done to true if no exceptions are thrown and ends loop 
        }

        catch (negativeNumber)  //to handle negativeNumber exception
        {
            cout << "You entered a negative number. Try again please. " << endl; 
            number = 0;   //reset number to 0 
        }
        catch (nonNumber)  //to handle nonNumber exception 
        {
            cout << "Invalid input! Did you enter a number? Please try again. " << endl; 
            cin.clear(); 
            cin.ignore(100, '\n'); 
        }
    }

    while (!done);

    return number; 

}