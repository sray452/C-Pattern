/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Function definitions used in the C15_Main program.

*/

#include <iostream>
// Include header file C15_Header.h
#include "C15_Header.h"

using namespace std;

int main()
{
    //Instantiate object userPattern of the pattern class
    pattern userPattern;

    //Call the setter and getter functions to mutate and access the userNum private variable
    userPattern.setUserNum();
    userPattern.getUserNum();

    //Call the setter and getter functions to mutate and access the placeHolder private variable
    userPattern.setPlaceHolder();
    userPattern.getPlaceHolder();
    //Postcondition: placeHolder variable equals the userNum variable

    //Call the setter and getter functions to mutate and access the placeHolder2 private variable
    userPattern.setPlaceHolder2();
    userPattern.getPlaceHolder2();
    //Postcondition: placeHolder2 variable equals 0

    //Call the print() function to display results for the user
    userPattern.print();
    //Postcondition: userNum == 0

    return 0;
}
