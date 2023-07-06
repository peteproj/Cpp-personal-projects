// Health Care Insurance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//ECC CIS-121 SUMMER 2023
//Type of Assignment:        Lab 4
//Problem Number:            3(Extra Cred)
//Section Number:            701
//Author:                    Peter Nguyen
//Date Due:                  7/5/23
//Project Name:              Health Care Insurance.cpp
//Purpose:                   


#include <iostream>
#include <iomanip>
using namespace std;

    // Function to calculate the insurance charge rates
    double calculateInsuranceCharge(double car, int age, char gender, int tickets)
    { // Base rate is 6% of car value
        double baseRate = 0.06 * car;

        // charges based on age and gender
        if ((gender == 'M' || gender == 'm') && age < 25) 
        { // Male under 25 pay extra 17%
            baseRate += 0.17 * baseRate;
        }
        else if ((gender == 'F' || gender == 'f') && age < 21) 
        { // Female under 21 pay extra 4%
            baseRate += 0.04 * baseRate;
        }

        // Additional charge for drivers with more than three tickets
        if (tickets > 3) 
        { // Add 100
            baseRate += 100.0;
        }

        return baseRate;
    }

    int main() 
    {
        char repeat;
        do 
        {
            double car, insuranceCharge;
            int age, tickets;
            char gender;

            // Prompt
            cout << "car value: ";
            cin >> car;

            cout << "age: ";
            cin >> age;

            cout << "gender (M/F): ";
            cin >> gender;

            cout << "number of tickets: ";
            cin >> tickets;

            // Calculate insurance charge
            insuranceCharge = calculateInsuranceCharge(car, age, gender, tickets);

            // Output
            cout << "Insurance rate: $" << fixed << setprecision(2) << insuranceCharge << endl;

           
            cout << "Do you want to calculate again? (Y/N): ";
            cin >> repeat;
        } 
        
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
