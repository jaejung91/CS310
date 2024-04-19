/*
* Student Name: Jaeyun Jung
* File Name: M6 Discussion; Debugging Assignment
* Date: 4/18/2024
* 
* This program will help users determine which K-beauty skin care line will work best according to the user's skin type. 
* This program will prompt users to enter the user's skin type according to the following choices: 
* 1 for dry, 2 for combination, 3 for oily, and 4 for sensitive. 
* Then, the program will recommend a K-beauty skin care line based on the user's input. 
* 
* There are two errors!
* 
*/


#include <iostream>
#include <conio.h>

using namespace std; 

//Define an enumeration named skinType with four constants: Dry, Combination, Oily, and Sensitive
enum skinType
{
    Dry, 
    Combination, 
    Oily, 
    Sensitive
};

int main()
{
    // Declare a variable 
    skinType userSkinType;

    int userInput; //Variable to store user input

    //Prompt user to enter skin type and store the input into the variable. 
    cout << "Enter a number for your skin type: 1 for Dry, 2 for Combination, 3 for Oily, or 4 for Sensitive. "
    cin >> userInput; 

    //Convert user input to skinType enumeration value. 
    switch (userInput)
    {
        case 1: 
            userSkinType = Dry; 
            cout << "Your skin type is dry, so we recommend the following skin care line: Aestura." << endl;
            break; 
        case 2: 
            userSkinType = Combination; 
            cout << "Your skin type is Combination, so we recommend the following skin care line: Innisfree." << endl; 
            break; 
        case 3: 
            userSkinType = Oily; 
            cout << "Your skin type is Oily, so we recommend the following skin care line: Belif." << endl; 
            break; 
        case 4: 
            userSkinType = Sensitive; 
            cout << "Your skin type is Sensitive, so we recommend the following cica skin care line: Rovectin." << endl; 
             
        default: 
            cout << "Invalid input. Please enter a number between 1 and 4." << endl; 
            return 1; //Return error code 

    }
    
    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program

    return 0; 

}

