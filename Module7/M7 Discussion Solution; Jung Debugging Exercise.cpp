/*
* Student Name: Jaeyun Jung
* File Name: M7 Discussion Solution; Debugging Assignment
* Date: 4/25/2024
* 
* This program will ask users to input elements into a 5x5 matrix. 
* Then, the program will calculate the sum of all the elements in the matrix and find the 
* largest element in the matrix. 
* 
* There are 2 errors! 
* 
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const int rows = 5;
    const int cols = 5;

    //2D array matrix with fixed rows and columns
    int matrix[rows][cols]; //Error 1: Missing semicolon at the end. 

    //Ask user to input elements into the matrix. 
    cout << "Enter the elements of the 5x5 matrix: " << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    //Calculate the sum of all the elements in the matrix 
    int sum = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            sum += matrix[i][j];
        }
    }

    //Find the largest element in the matrix 
    int largest = matrix[0][0];
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] > largest)  //Error 2: Missing enclosed parentheses after if 
            {
                largest = matrix[i][j];
            }
        }
    }

    //Show the sum of all elements
    cout << "Sum of all elements: " << sum << endl;

    //Show the largest elements
    cout << "The largest element is " << largest << endl;


    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program

    return 0;
}
