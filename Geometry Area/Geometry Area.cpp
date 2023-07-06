// Geometry Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//ECC CIS-121 SUMMER 2023
//Type of Assignment:        Lab 4
//Problem Number:            1
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  7/5/23
//Project Name:              Geometry Area.cpp
//Purpose:                   implement setters and getters
//

#include <iostream>
using namespace std;

//declaring functions
void showMenu();
double rectangle(double length, double width);
double triangle(double height, double base);
double circle(double radius);

int main()
{   //variables
    int user;
    char redo;

    //start of loop
    do
    {
        showMenu();
        cin >> user;


        switch (user) 
        {
        
        //different responses to user input
        case 1: 
        {
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            double area = rectangle(length, width);
            cout << "Area = " << area << endl;
            break;
        }
        case 2: 
        {
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            double area = triangle(base, height);
            cout << "Area = " << area << endl;
            break;
        }
        case 3: 
        {
            double radius;
            cout << "Enter radius :";
            cin >> radius;
            double area = circle(radius);
            cout << "Area = " << area << endl;
            break;
        }
        //end program
        case 4:
            return 0;
        
        //when no case is valid, then output message
        default:
            cout << "Invalid input pls try again \n";
            break;
        }

        //prompt to 
        cout << "Do you want to restart? (Y/N): ";
        cin >> redo;
    } 
    
    while (redo == 'Y' || redo == 'y');

            return 0;
}

        //creating functions for menu and formulas
        void showMenu() 
        {
            cout << "1. Area of a Rectangle \n";
            cout << "2. Area of a Triangle \n";
            cout << "3. Area of a Circle \n";
            cout << "4. End \n";
            cout << "Enter a digit between 1-4: ";
        }

        double rectangle(double length, double width) 
        {
            return length * width;
        }

        double triangle(double base, double height) 
        {
            return (base * height) / 2;
        }

        double circle(double radius) 
        {
            const double pi = 3.14159;
            return pi * radius * radius;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
