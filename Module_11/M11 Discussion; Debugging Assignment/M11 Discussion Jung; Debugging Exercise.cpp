/*
* Student Name: Jaeyun Jung 
* File Name: M11 Discussion; Debugging Assignment 
* Date: 5/23/2024
* 
* This simple program uses templates and asks the user to input a set of 5 integers. 
* It then finds and displays the largest integer. 
* 
* There are 2 errors. Good luck! 
*/

#include <iostream>
#include <conio.h>

using namespace std; 

//Template function to find the maximum of two values
template <typename Type> 
Type getMax(Type a, Type b)
{
    return (a > b) ? a : b; //returns the larger of the two values 
}


int main()
{
    int numbers[5]; //declares array of 5 integers to store numbers entered by user
    cout << "Enter 5 integers: " << endl; 
    for (int i = 0; i < 5; i) //loop for the input 
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i]; 
    }

    //Finding the maximum value
    int maxValue = numbers[0];  //Initialize maxValue with the first element 
    for (int = 1; i < 5; ++i)
    {
        maxValue = getMax(maxValue, numbers[i]); 
    }

    cout << "The largest integer in this set is: " << maxValue << endl; 

    cout << "\n Press any key to exit the program..." << endl; 

    _getch(); //Pause the program 

    return 0; 
}

