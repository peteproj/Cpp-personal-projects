// Lab1p1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//                      ECC CIS-121 Summer 2023
//LAB2
//Problem 1
//Sec: 701
//By: Peter Nguyen
//Due 6/20
//Lab1p1
//File Name: Lab1p1.cpp
//
//To create answers based on random user input

#include <iostream>
using namespace std;



int main()

{   //variables & prompt
    int num1, num2, num3, remainder, largest;
    double average;
    cout << "Please enter your first integer:  \n";
    cin >> num1;
    
    //if dividsible by 2 perfectly then is even
    if (num1 % 2 == 0)
    {
        cout << "The number is even. \n";
    }
    else if (num1 % 2 != 0)
    {
        cout << "The number is odd. \n";
    }
    else 
    {
        cout << "diviosion is not possible \n";
    }
    
    // Determine if the number is positive or negative 
    if (num1 > 0)
    {
        cout << "number is postitive \n";
    }
    else if (num1 < 0)
    {
        cout << "number is negative \n";
    }
    else
    {
        cout << "number is 0 \n";
    }
    
    // Determine whether the number is divisible by 3 and 4
    if (num1 % 3 == 0 || num1 % 4 == 0)
    {
        cout << "number is divisible by either 3 or 4. \n";
    }
    else
    {
        cout << "number is not divisible by either 3 or 4. \n";
    }
    
    //prompt user to input
    cout << "Please enter your second integer:  \n";
    cin >> num2;
    
    // Determine whether the first number is divisible by the second
    if (num2 != 0 && num1 % num2 == 0)
    {
        cout << "The first number is divisible by the second number. \n";
    }
    else if (num2 != 0)
    {
        cout << "The first number is not divisible by the second number. \n";
    }
    else
    {
        cout << "The second number is zero. Division is not possible. \n";
    }
    
    //remainder of two numbers
    remainder = num1 % num2;
    cout << "The remainder of dividing the first number by the second number is : " << remainder << "\n";

    // Compare the two integers and display them in increasing order
    if (num1 < num2)
    {
        cout << "The numbers in increasing order are: " << num1 << ", " << num2 << " \n";
    }
    else if (num2 < num1)
    {
        cout << "The numbers in increasing order are: " << num2 << ", " << num1 << "\n";
    }
    else
    {
        cout << "the numbers are equal \n";
    }

    //prompt user to input
    cout << "Enter the third integer: ";
    cin >> num3;
    
    //formula for average
    average = (num1 + num2 + num3) / 3.0;
    cout << "The average of the three integers is: " << average << "\n";
    
    // Output the largest number among three valu
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    cout << "The largest number among the three integers is: " << largest;

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
