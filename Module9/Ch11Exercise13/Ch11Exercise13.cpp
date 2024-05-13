/*
* Student Name: Jaeyun Jung
* M9 Assignment: Ch11Exercise13
* Date: 5/12/2024
* 
* This program will define the class bankAccount to store a bank customer's account number and balance.
* It will set the account number, retrieve the account number, retrieve the balance, deposit, 
* withdraw money, and print account information. 
* Then, the program will derive the class checkingAccount and savingsAccount from the class bankAccount
* and provide additional operations. 
* 
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std; 

//Bank Account base class 
class bankAccount
{
protected: //protected variables to store account number and current balance 
    int accountNumber; 
    double accountBalance; 

public:
    bankAccount(int accountNumber = 0, double balance = 0.0) : accountNumber(accountNumber), accountBalance(balance) {}

    virtual void deposit(double amount) //deposit method 
    {
        if (amount > 0)
        {
            accountBalance += amount;
            cout << "Deposited: $" << amount << ". New Balance: $" << accountBalance << endl; 
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    virtual void withdraw(double amount) //withdraw method 
    {
        if (amount > 0 && amount <= accountBalance)
        {
            accountBalance -= amount;
            cout << "Withdrawn: $" << amount << ". Remaining Balance: $" << accountBalance << endl; 
        }
        else
        {
            cout << "Invalid or insufficient amount for withdrawal." << endl;
        }
    }

    virtual void printAccountInfo() const //to display account information 
    {
        cout << fixed << showpoint << setprecision(2) << endl; 
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << accountBalance << endl;
    }

    virtual void calculateInterest() = 0; //Virtual function for interest calculation 
};

//Derived class for Checking Account 
class checkingAccount : public bankAccount
{
private: 
    double interestRate; 
    double minimumBalance;
    double serviceCharges; 

public: 
    checkingAccount(int accountNumber, double balance, double interestRate, double minimumBalance, double serviceCharges)
        : bankAccount(accountNumber, balance), interestRate(interestRate), minimumBalance(minimumBalance), serviceCharges(serviceCharges) {}

    void calculateInterest() override
    {
        if (accountBalance > minimumBalance)
        {
            double interest = accountBalance * (interestRate / 100); 
            accountBalance += interest; 
            cout << "Interest added: $" << interest << ". New Balance: $" << accountBalance << endl; 
        }
    }

    

    void printAccountInfo() const override
    {
        bankAccount::printAccountInfo();
        cout << "\n Interest Rate: " << interestRate << "%" << endl;
        cout << "\n Minimum Balance: $" << minimumBalance << endl;
        cout << "\n Service Charges: $" << serviceCharges;
    }
};

//Derived class for Savings Account 
    class savingsAccount : public bankAccount
    {
    private:
        double interestRate;

    public:
        savingsAccount(int accountNumber, double balance, double interestRate)
            : bankAccount(accountNumber, balance), interestRate(interestRate) {}

        void calculateInterest() override
        {
            double interest = accountBalance * (interestRate / 100);
            accountBalance += interest;
            cout << "Interest added: $" << interest << ". New Balance: $" << accountBalance << endl;
        }

        void printAccountInfo() const override
        {
            bankAccount::printAccountInfo();
            cout << "Interest Rate: " << interestRate << "%" << endl;
        }
    };


int main()
{
    cout << fixed << showpoint << setprecision(2) << endl; 

    locale loc(""); //for thousands separator
    cout.imbue(loc); //for thousands separator

    // Create accounts with initial values
    checkingAccount myCheckingAccount(88485, 1500.00, 2.0, 500.00, 25.00);
    savingsAccount mySavingsAccount(25681, 1000.00, 1.5);

    bankAccount* accountPtr = nullptr; // Pointer to bankAccount to manipulate selected account
    int accountChoice, action;
    double amount;

    //Options for users to choose between checking and savings account.
    cout << "Select Account Type:\n1. Checking Account\n2. Savings Account\nEnter choice: ";
    cin >> accountChoice;

    switch (accountChoice) 
    {
        case 1:
            accountPtr = &myCheckingAccount;
            break;
        case 2:
            accountPtr = &mySavingsAccount;
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    do 
    {
     //switch-case structure to provide users options to print account information, deposit money, withdraw
    //money, calculate interest, or exit the program. 
        cout << "\nMenu:\n1. Print Account Information\n2. Deposit\n3. Withdraw\n4. Calculate Interest\n5. Exit\nEnter choice: ";
        cin >> action;

        switch (action) 
        {
            case 1:
                accountPtr->printAccountInfo();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                accountPtr->deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                accountPtr->withdraw(amount);
                break;
            case 4:
                accountPtr->calculateInterest();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    } 
    while (action != 5);

    cout << "\n Press any key to exit the program..." << endl;

    _getch(); //Pause the program

    return 0;
}

