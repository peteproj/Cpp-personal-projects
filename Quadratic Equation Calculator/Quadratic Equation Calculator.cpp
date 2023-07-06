// Quadratic Equation Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//ECC CIS-121 SUMMER 2023
//Type of Assignment:
//Problem Number:
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  7//23
//Project Name:              Quadratic Equation Calculator.cpp
//Purpose:                   Create a program that is abel to handle complex equations
//


#include <iostream>
#include <cmath>
using namespace std;

//function declaration
int quadratic(double a, double b, double c, double& r1, double& r2);
void getInput(double& a, double& b, double& c);

    int main()
    {

        double a, b, c, r1, r2;
        int result;

        getInput(a, b, c);
        result = quadratic(a, b, c, r1, r2);

        //output
        if (result == 1) 
        {
            cout << "Root 1: " << r1 << endl;
            cout << "Root 2: " << r2 << endl;
        }
        else 
        {
            cout << "No real roots exist." << endl;
        }

        return 0;
    }
    // Function to calculate roots
    int quadratic(double a, double b, double c, double& r1, double& r2) 
        // Calculate the discriminant
    {   
        double discriminant = b * b - 4 * a * c;
        // Check value
        if (discriminant > 0) 
            // Two real roots
        {
            r1 = (-b + sqrt(discriminant)) / (2 * a);
            r2 = (-b - sqrt(discriminant)) / (2 * a);
            return 1;
        }
        else if (discriminant == 0) 
            // One real root
        {
            r1 = -b / (2 * a);
            r2 = r1;
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    // Function to get input from the user
    void getInput(double & a, double & b, double & c) 
    {
        cout << "Enter value for a, b, then c: \n";
        cin >> a >> b >> c;
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
