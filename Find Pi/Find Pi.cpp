// Find Pi.cpp : This file contains the 'main' function. Program execution begins and ends there.
////ECC CIS-121 SUMMER 2023
//Type of Assignment:        lab3
//Problem Number:            Extra cred
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  6/26/23
//Project Name:              pi calculator
//File Name:                 pi calculator.cpp
//Purpose:                   
//


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   //variables/data allocation
    int num, i;
    double pi = 0.0;
    int sign = 1;
    double denominator = 1.0;
    
    
    while (true)
    {//user prompt
        cout << "Welcom to pi calculator, enter '0' to exit \n";
        cout << "Enter the number of terms to calculate Pi: ";
        cin >> num;

        //number of loops if enter 0 then break
        if (num <= 0)
        {
            break;
        }

        //repeat formula based on user input
        for (i = 0; i < num; i++) {
            pi += sign * (4.0 / denominator);
            sign = -sign;
            denominator += 2.0;
        }

        //output
        cout << "Pi: " << fixed << setprecision(10) << pi << endl;

    }
    //reset values
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
