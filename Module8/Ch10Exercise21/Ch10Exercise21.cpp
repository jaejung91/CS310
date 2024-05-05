/*
* Student Name: Jaeyun Jung
* M8 Assignment: Ch10Exercise21
* Date: 5/4/2024
* 
* This program will define the class bankAccount to implement the basic properties of a bank account.
* The object of this class will store the following data: 
* - Account holder's name (string) 
* - account number (int)
* - account type (string, checking/saving)
* - balance (double)
* - interest rate (double). Interest rate is stored as a decimal number. 
* 
* There will be an array of 10 components of type bankAccount to process up to 10 customers.
* 
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std; 

//Define the class bankAccount to implement basic properties of a bank account
class BankAccount
{
private: 
    string accountName;  //Account holder's name (string)
    int accountNumber;  //Account number (int)
    string accountType;  //Account type (string, checking/saving)
    double balance;  //Account balance (double) 
    double interestRate;  //Interest rate (double). Stores interest rate as a decimal number. 
    static int AccountNumber;  //Use a static member in the class to automatically assign account numbers. 

public: 
    BankAccount()
    {
        accountNumber = AccountNumber++;
        setName("");
        setType("");
        setBalance(0.0); 
        setInterestrate(0.0);
    }

    BankAccount(string name, string type, double b, double rate)
    {
        accountNumber = AccountNumber++;
        setName(name);
        setType(type);
        setBalance(b);
        setInterestrate(rate); 
    }

    //Constructor. BankAccount class member functions that define behavior of BankAccount class.
    void setName(string name)
    {
        accountName = name; 
    }

    void setType(string type)
    {
        accountType = type; 
    }

    void setBalance(double b)
    {
        balance = b;
    }

    void setInterestrate(double ir)
    {
        interestRate = ir;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    string getName() 
    { 
        return accountName;
    }
    string getType() 
    { 
        return accountType; 
    }
    double getBalance() 
    { 
        return balance; 
    }
    double getInterestrate() 
    { 
        return interestRate; 
    }

    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl; 
    }
};

//Initialize static member outside of class definition. initializes to 1
int BankAccount::AccountNumber = 1; 

int main()
{
    //Declare an array of 10 components of type bankAccount
    BankAccount account_array[10];

    //Assign values to each account individually using setter methods
    account_array[0].setName("Jack");
    account_array[0].setType("checking");
    account_array[0].setBalance(5000);
    account_array[0].setInterestrate(0.10);

    account_array[1].setName("Helen");
    account_array[1].setType("saving");
    account_array[1].setBalance(45000);
    account_array[1].setInterestrate(0.20);

    account_array[2].setName("Beth");
    account_array[2].setType("saving");
    account_array[2].setBalance(10000);
    account_array[2].setInterestrate(0.10);

    account_array[3].setName("Carly");
    account_array[3].setType("checking");
    account_array[3].setBalance(10000);
    account_array[3].setInterestrate(0.10);

    account_array[4].setName("Daniel");
    account_array[4].setType("saving");
    account_array[4].setBalance(100000);
    account_array[4].setInterestrate(0.30);

    account_array[5].setName("Manny");
    account_array[5].setType("checking");
    account_array[5].setBalance(10000);
    account_array[5].setInterestrate(0.10);

    account_array[6].setName("Marley");
    account_array[6].setType("saving");
    account_array[6].setBalance(59424);
    account_array[6].setInterestrate(0.20);

    account_array[7].setName("Lily");
    account_array[7].setType("checking");
    account_array[7].setBalance(10000);
    account_array[7].setInterestrate(0.10);

    account_array[8].setName("Esther");
    account_array[8].setType("saving");
    account_array[8].setBalance(10000);
    account_array[8].setInterestrate(0.10);

    account_array[9].setName("Tim");
    account_array[9].setType("saving");
    account_array[9].setBalance(69874);
    account_array[9].setInterestrate(0.20);

     
    //Displays the account information. 
    locale loc(""); //for thousands separator
    cout.imbue(loc); //for thousands separator 

    cout << "Account Information:" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Account Number: " << account_array[i].getAccountNumber() << endl;
        cout << "Account Name: " << account_array[i].getName() << endl;
        cout << "Account Type: " << account_array[i].getType() << endl;
        cout << "Balance: $" << fixed << setprecision(2) << account_array[i].getBalance() << endl;
        cout << "Interest Rate: " << account_array[i].getInterestrate() << endl;
        cout << "------------------------" << endl;
    }

    cout << "\n Press any key to exit the program..." << endl; 

    _getch(); //Pause the program 

    return 0; 

}

