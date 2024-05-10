/*
* Student Name: Jaeyun Jung
* File Name: M9 Discussion; Debugging Assignment
* Date: 5/9/2024
* 
* This program demonstrates inheritance with a base class and at least 2 child classes. 
* The program will ask users to input their skin type as "sensitive" or "normal". 
* Based on the user's input, the program will 
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std; 

//Base class SkincareProduct
class SkincareProduct
{
protected: 
    string type; 
    string brand; 
    string price; 

public: 
    SkincareProduct(string ty, string br, double pr) : type(ty), brand(br), price(pr) {}

    void display()
    {
        cout << "Product Type: " << type << "\n Brand: " << brand << "\n Price: $" << price << endl; 
    }
};

//Child Class: Nonsensitive Skincare
class NonsensitiveSkincare : public SkincareProduct
{
private: 
    string skinType; 

public:
    NonsensitiveSkincare(string ty, string br, double pr, string skinty) : SkincareProduct(ty, br, pr), skinType(skinty) {}

    void display()
    {
        cout << "Nonsensitive Skincare: "; 
        SkincareProduct::display(); 
        cout << "Suitable for: " << skinType << " skin" << endl; 
    }
};

//Child class: SensitiveSkincare
class SensitiveSkincare : public SkincareProduct
{
private:
    string sensitiveIngredient; 

public:
    SensitiveSkincare(string ty, string br, double pr, string sensitiveI) : SkincareProduct(ty, br, pr), sensitiveIngredient(sensitiveI) {}

    void display()
    {
        cout << "Sensitive Skincare: ";
        SkincareProduct::display();
        cout << "Contains: " << sensitiveIngredient << " for sensitive skin" << endl;
    }

}

int main()
{
    string inputSkinType; 

    //Prompt user to input their skin type
    cout << "Enter your skin type ('sensitive' or 'normal'): ";
    cin >> inputSkinType;

    //Create objects of child classes based on the user's input
    SkincareProduct *skincareProduct; 
    if (inputSkinType == "sensitive")
    {
        skincareProduct = new SensitiveSkincare("Essence", "Mixsoon", 29.99, "Centella Asiatica"); 
    }
    else if (inputSkinType == "normal")
    {
        skincareProduct = new NonsensitiveSkincare("Serum", "Purito", 19.99, "Seawater"); 
    }
    else
    {
        cout << "Invalid input! Please enter 'sensitive' or 'normal' - all lowercase please!" << endl; 
        return 1; 
    }

 
    //Display information about the skincare product
    skincareProduct->display();

    
    cout << "\n Press any key to exit the program..." << endl; 

    _getch(); //Pause the program 

    return 0; 
}

