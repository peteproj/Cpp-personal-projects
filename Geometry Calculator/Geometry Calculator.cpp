// Geometry Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//ECC CIS-121 SUMMER 2023
//Type of Assignment:        Lab 3
//Problem Number:            2
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  6/26/23
//Project Name:              Geometry Calculator
//Purpose:                   To create an interactive program 
//


#include <iostream>
using namespace std;

int main()
{//variables
    int choice;
    double length, width, base, height, radius;
    //start of loop
    do 
    {
 //user prompt
        cout << "1. Area of a Rectangle" << endl;
        cout << "2. Area of a Triangle" << endl;
        cout << "3. Area of a Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        //based on the user input
        switch (choice) 
        {
        //different cases based on input
        case 1:
        {       
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            //formula for rectangle
            double area = length * width;
            cout << "The area is: " << area << endl;
            break;
        }
        case 2:
        {
            cout << "Enter the base length: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            double area = base * height * 0.5;
            cout << "The area is: " << area << endl;
            break;
        }
        case 3:
        {
            cout << "Enter the radius: ";
            cin >> radius;
            double area = 3.14 * (radius * radius);
            cout << "The area is: " << area << endl;
            break;
        }
        case 4:

            cout << "Have a good day !" << endl;
            break;
        //if no valid statement, then show message
        default:
            cout << "Invalid input, please try again" << endl;
        }
        
    } 
    
    while (choice != 4);
    //reset value
    return 0;






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
