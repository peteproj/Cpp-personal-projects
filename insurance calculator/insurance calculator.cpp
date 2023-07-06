// insurance calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//ECC CIS-121 SUMMER 2023
//Type of Assignment:        asn 2
//Problem Number:            1
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  6/20
//Project Name:              insurance calculator
//File Name:                 insurance calculator.cpp
//Purpose:                   create a code that can adapt to user input to create the appropriate response
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   //data allocation
    double car, baseRate, totalRate;
    int age, ticket;
    char gender, repeat;

    //loop and user input 
        do {
            cout << "Enter the car value: $";
            cin >> car;
            cout << "Enter the driver's age: ";
            cin >> age;
            cout << "Enter the driver's gender (M/F): ";
            cin >> gender;
            cout << "Enter the number of tickets: ";
            cin >> ticket;

            //base rate starting value
            baseRate = .06 * car;

            //base rate adjuster based on user input
            if ((gender == 'M' || gender == 'm') && age < 25)
            {
                baseRate += .17 * baseRate;
            }
            else if ((gender == 'F' || gender == 'f') && age < 21)
            {
                baseRate += .04 * baseRate;
            }

            if (ticket > 3)
            {
                baseRate += 100.00;
            }

            cout << "Insurance charge rate: $" << fixed << setprecision(2) << baseRate << "\n";


            cout << "Do you want to start again? (Y/N): ";
            cin >> repeat;
        }
        //repeat if yes
        while (repeat == 'Y' || repeat == 'y');
    
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
