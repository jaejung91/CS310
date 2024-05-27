/*
* Student Name: Jaeyun Jung
* M11 Assignment: Ch13Exercise7
* Date: 5/26/2024
* 
* This program will use C++11 random number generator to generate 25 real numbers between 10 and 100. 
*/

#include <iostream>
#include <random>
#include <vector>
#include <conio.h>

using namespace std; 

int main()
{
    //Define number of random numbers to generate - in this case 25. 
    const int numOfRandom = 25; 
    //Define range for the random numbers 
    const int minRange = 10; 
    const int maxRange = 100; 

    //Create a random device and a default random number engine. 
    random_device rd; 
    default_random_engine gen(rd());
    //Define a uniform real distribution in the specified range
    uniform_real_distribution<> dis(minRange, maxRange);

    //Generate and store the random numbers in vector. 
    vector<int> randomNumbers; 
    for (int i = 0; i < numOfRandom; ++i)
    {
        randomNumbers.push_back(dis(gen));
    }

    //Output generated random numbers 
    cout << "Here are the " << numOfRandom << " randomly generated numbers between " << minRange << " and " << maxRange << ":\n"; 
    for (int num : randomNumbers)
    {
        cout << num << "\n"; 
    }

    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program 

    return 0;

}

