// Cylinder Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//ECC CIS-121 SUMMER 2023
//Type of Assignment:        Lab
//Problem Number:            2
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  6/20
//Project Name:              Cylindar Calculator
//File Name:                 Cylindar Calculator.cpp

#include <iostream>
using namespace std;

int main()
{//declare variables
    double radius, height, area_cylinder, volume_cylinder;
  
    
    //prompt for user input
    cout << "Enter the radius of the cylinder (meters): \n";
    cin >> radius;
    cout << "Enter the height of the cylinder (meters): \n";
    cin >> height;
    
    if (radius > 0 && height > 0)
    {
    //formula for area and volume
    area_cylinder = (2.0 * 3.14159) * radius * height + (2.0 * 3.14) * (radius * radius);
    volume_cylinder = 3.14159 * (radius * radius) * height;

    //output
    cout << "The surface area of a cylinder of radius " << radius << " and height " << height << " is "
        << area_cylinder << " square meters (or m^2) \n";
    cout << "The volume of a cylinder of radius " << radius << " and height " << height << " is "
        << volume_cylinder << " cubic meters (or m ^ 3) \n";
    }

    else
    {
        cout << "Invalid number please try again";
    }
    
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
