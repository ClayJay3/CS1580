/******************************************************************************
    Programmer: Clayton Cowen
    MST Username: crcqdc
    Student ID: 12578792
    Section: 307
    Date: 02-02-22
    File GravitationalForce.cpp
    Purpose: Calculate the gravitational force between two objects.
******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

// Declare constants.
const double GRAVITATIONAL_CONSTANT = 6.674;
///////////////////////////////////////////////////////////////////////////////

/******************************************************************************
        Main method.
******************************************************************************/
int main()
{
    // Declare instance variables.
    int object1Mass = 0;
    int object2Mass = 0;
    int distance = 0;
    double gForce = 0.0;

    // Ask user for input info about the two objects and store it.
    cout << "This program calculates the gravitational force between two objects.\n" << endl;
    cout << "Enter the mass of the first object: ";
    cin >> object1Mass;
    cout << "Enter the Mass of the second object: ";
    cin >> object2Mass;
    cout << "Enter the distance between the two objects: ";
    cin >> distance;

    // Calculate and output the gravitational force.
    gForce = GRAVITATIONAL_CONSTANT + ((object1Mass * object2Mass) / pow(distance, 2));
    cout << "\nThe gravitational pull between these two objects is " << gForce << " Gs." << endl;

    // Report program exit status.
    return EXIT_SUCCESS;
}