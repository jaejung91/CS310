/*
* Student Name: Jaeyun Jung
* M7 Assignment: Ch08Exercise7
* Date: 4/28/2024
* 
* This program will prompt the user to enter the last names of five candidates in a local election
* and the number of votes received by each candidate. 
* The program will then output each candidate's name, the number of votes received, and the percentage
* of the total votes received by the candidate. 
* Finally, the program will output the winner of the election. 
* 
*/ 

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std; 

const int numOfCandidates = 5; //number of candidates in the election 

//Declare functions 
int winner(int votes[]); 
void results(string candidates[], int votes[]);
int calculatePercentage(int votes[], int vote); 


int main()
{
    string candidates[numOfCandidates]; //array to store the names of candidates. type string
    int votes[numOfCandidates]; //array to store the number of votes for each candidate 

    cout << "Please enter the 5 candidates and the votes received for each candidate (ex: Tom 2000): ";
    for (int i = 0; i < numOfCandidates; i++)
    {
        cin >> candidates[i] >> votes[i];
    }

    //format the output to two decimal places
    cout << fixed << setprecision(2);

    //Displays the names, votes, and percentages of each candidate. 
    results(candidates, votes);
    cout << "\n The winner  of the Election is " << candidates[winner(votes)] << "." << endl;

    cout << "\n Press any key to exit the program..." << endl;  

    _getch(); //Pause the program 

    return 0;
}

//Calculates the percentage of votes received by candidate out of the total votes 
int calculatePercentage(int votes[], int vote)
{
    int sumOfVotes = 0; 

    for (int i = 0; i < numOfCandidates; i++)
    {
        sumOfVotes += votes[i];
    }

    return (vote * 100) / sumOfVotes; 
}

//Displays names, votes, and percentage of each candidate. 
void results(string candidates[], int votes[])
{
    cout << left << setw(15) << "Name" << setw(10) << "Votes" << setw(15) << "Percentage" << endl; 

    int totalVotes = 0; //Initialize total vote counts. 

    for (int i = 0; i < numOfCandidates; i++)
    {
        cout << left << setw(15) << candidates[i] << setw(10) << votes[i] << setw(15); 
        int percentage = calculatePercentage(votes, votes[i]);
        cout << percentage << "%" << endl;

        totalVotes += votes[i]; //update total votes count 
    }

    cout << "Total Votes: " << totalVotes << endl; //Display the total votes as well
}

//Finds the candidate with the highest votes 
int winner(int votes[])
{
    int winnerIndex = 0; //Initializes this variable to 0. Variable will store the candidate who has most votes.
   
    //Begins the loop iterating over each candidate in the vote[] array starting from second candidate (1)
    for (int i = 1; i < numOfCandidates; i++)
    {
        if (votes[i] > votes[winnerIndex])
        {
            winnerIndex = i;
        }
    }

    return winnerIndex; 
}
