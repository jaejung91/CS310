/*
* Student Name: Jaeyun Jung
* M10 Assignment: Ch12Exercise3
* Date: 5/19/2024
* 
* Redoing Programming Exercise7 Chapter 8 using dynamic arrays. 
* This program will prompt the user to enter the number of candidates and then last names of 
* the candidates in a local election along with the number of votes received by each candidate.
* The program will then output each candidate's name, the number of votes received, and the percentage
* of the total votes received by the candidate. 
* 
* Finally, the program will output the winner of the election. 
* 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std; 

//Declaring functions 

int winner(int votes[], int numOfCandidates);
void results(string candidates[], int votes[], int numOfCandidates);
double calculatePercentage(int votes[], int vote, int numOfCandidates);


int main()
{
    int numOfCandidates;  //Number of candidates in the election 
    cout << "Enter the number of candidates: "; 
    cin >> numOfCandidates; 

    //Dynamically allocates arrays to store the names of candidates and their votes
    string* candidates = new string[numOfCandidates];
    int* votes = new int[numOfCandidates];

    cout << "Please enter the candidates and the votes received for each candidate (ex: Tom 2000): " << endl; 
    for (int i = 0; i < numOfCandidates; i++)
    {
        cin >> candidates[i] >> votes[i];
    }

    //Format the output to two decimal places
    cout << fixed << showpoint << setprecision(2) << endl; 

    //Displays the names, votes, and percentages of each candidate.
    results(candidates, votes, numOfCandidates);
    cout << "\nThe winner of the election is " << candidates[winner(votes, numOfCandidates)] << "." << endl;

    //Clean up dynamic memory using delete.
    delete[] candidates; 
    delete[] votes; 

    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program 

    return 0; 
}

//Calculates the percentage of votes received by candidate out of the total votes
double calculatePercentage(int votes[], int vote, int numOfCandidates)
{
    double sumOfVotes = 0;

    for (int i = 0; i < numOfCandidates; i++)
    {
        sumOfVotes += votes[i];
    }

    return (vote * 100.0) / sumOfVotes; 
}

//Displays names, votes, and percentage of each candidate. 
void results(string candidates[], int votes[], int numOfCandidates)
{
    cout << left << setw(15) << "Name" << setw(10) << "Votes" << setw(15) << "Percentage" << endl; 

    int totalVotes = 0; //Initialize total vote counts. 

    for (int i = 0; i < numOfCandidates; i++)
    {
        cout << left << setw(15) << candidates[i] << setw(10) << votes[i] << setw(15);
        double percentage = calculatePercentage(votes, votes[i], numOfCandidates); 
        cout << fixed << setprecision(2) << percentage << "%" << endl;

        totalVotes += votes[i]; //Update total votes count 
    }

    cout << "Total Votes: " << totalVotes << endl; //Display the total votes as well
}

//Finds the candidate with the highest votes
int winner(int votes[], int numOfCandidates)
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
