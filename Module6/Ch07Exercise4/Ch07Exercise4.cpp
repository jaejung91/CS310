/*
* Student Name: Jaeyun Jung
* M6 Assignment: Ch07Exercise4
* Date: 4/20/2024
* 
* This program prompts the user to input a string. 
* The program then uses the function substr to remove all the vowels from the string. 
* For example, if str = "There", then after removing all the vowels, str = "Thr".
* 
*/

#include <iostream>
#include <string>
#include <conio.h>

using namespace std; 

void removeVowels(string& str);  //Function to remove vowels from a string.
bool isVowel(char ch);   //Function to check if a character is a vowel. 


int main()
{
    string str;
    cout << "Enter a string: "; 
    cin >> str; 

    removeVowels(str); //Call function to remove vowels. 

    cout << "\n Press any key to exit the program..." << endl; 

    _getch(); //Pause the program 

    return 0;

}


void removeVowels(string& str)
{
    //Variable to store result string without the vowels. 
    string result = "";

    //Length of the input string.
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (!isVowel(str[i]))
        {
            result += str.substr(i, 1);  //if substring is not a vowel, it will append to the result string
        }
    }

    //Print string without vowels. 
    cout << "String without vowels: " << result; 

}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a': 
    case 'e':
    case 'i':
    case 'o': 
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return true; 
    default: 
        return false; 

    }
}