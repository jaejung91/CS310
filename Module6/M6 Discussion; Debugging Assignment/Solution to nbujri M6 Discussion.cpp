/*
* Errors fixed by: Jaeyun Jung
* 
* 
* Student Name: Ngi Bujri
* File Name: M6Discussion
* Date: 4/18/2024
* 
*/

#include <iostream>
#include <conio.h>
using namespace std;

//Error 1: Removed parentheses and replaced with curly brackets for proper syntax. 
//Error 2: Removed enclosed quotation marks for Sunday. Changed "Sunday" to Sunday. 
enum day
{
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday

};

int main()
{
    day today = Friday;
    cout << "\n\n  It is the " << today << "th day of the week." << endl;
    cout << "\n  Press any key to continue... " << endl;

    _getch();
    return 0;
}
