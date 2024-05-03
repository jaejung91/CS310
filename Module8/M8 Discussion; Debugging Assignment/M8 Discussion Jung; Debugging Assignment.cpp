/*
* Student Name: Jaeyun Jung
* File Name: M8 Discussion; Debugging Assignment 
* Date: 5/2/2024
* 
* This program uses 2 classes: 'CarOwner' and 'Car' with car attributes such as brand, model, price,
* and owner. The program creates instances of these classes to represent two cars 
* with their respective owners.
* The program will then display information about each car. 
* 
* There are 2 errors! 
*
*/ 

#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std; 

class CarOwner
{
public: 
    string name; 
    int age; 

    CarOwner(string n, int a) : name(n), age(a) {}

    //Function to display owner information. 
    void displayOwner()
    {
        cout << "Owner Name: " << name << endl;
        cout << "Owner Age: " << age << ; 

    }
};

class Car
{
public: 
    string brand; 
    string model;  
    double price; 
    CarOwner owner; //Car has an owner 

    Car(string b, string mo, double p, CarOwner o)
        : brand(b), model(mo), price(p), owner(o) {}

    //Function to display car information
    void displayCar()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;  

        //Setting the locale for thousands separator. 
        locale loc(""); 
        cout.imbue(loc); 

        //Display price with the thousands separator and "$" sign 
        cout << "Car Price: $" << fixed << setprecision(2) << price << endl;

        cout << "Car Owner Information: " << endl; 
        owner.displayOwner(); //Display owner information 
    }
};


int main()
{
   //Create instances of CarOwner
    CarOwner owner1("Ashley", 30); 
    CarOwner owner2("Peter", 32); 

    //Create instances of Car
    Car car1("Toyota", "Venza", 42000.00, owner1);
    Car car2("Porsche", "Taycan", 99400.00, owner2); 


    //Display car information
    cout << "Car 1 Information: " << endl; 
    car1.displayCar();
    cout << endl; 
 

    cout << "Car 2 Information: " << endl; 
    car1.displayCar(); 


    cout << "\n Press any key to exit the program..." << endl; 

    _getch(); //Pause the program 

    return 0; 
}

