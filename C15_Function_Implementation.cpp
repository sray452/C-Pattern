/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Function definitions used in the C14_Main program.

*/

#include "C15_Header.h"
#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

//The setUserNum() function receives input from the user and assigns this value to the private variable userNum
void pattern::setUserNum()
{
    //Declare and initialize local variable num of int data type
    int num = 0;

    cout << "This program generates a pattern based on a number entered by the user." << endl;

    cout << "Enter a positive integer to create a pattern from: ";
    cin >> num;

    //Input validation ensures that the user will enter a positive integer
    while(cin.fail() || num < 0)
    {
        //Clear cin stream
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "The number must be a positive integer." << endl;
        cout << "Enter a positive integer to create a pattern from: ";
        cin >> num;
    }

    //Display message to console for user
    cout << "\n\n";
    cout << "-----------------------" << endl;
    cout << "RESULTS" << endl;
    cout << "-----------------------" << endl;

    //Assign private variable userNum the value in num
    userNum = num;
}

//Getter function getUserNum() returns the userNum private variable
int pattern::getUserNum() const
{
    return userNum;
}

//The updateUserNum() function decrements the userNum private variable
void pattern::updateUserNum()
{
    int num = 0;

    num = userNum - 1;

    userNum = num;
}

//The setPlaceHolder() function assigns the private variable placeHolder the value in the userNum variable
void pattern::setPlaceHolder()
{
    int p = 0;

    p = userNum;

    placeHolder = p;
}

//Getter function getPlaceHolder() function returns the placeHolder variable
int pattern::getPlaceHolder() const
{
    return placeHolder;
}

//The updatePlaceHolder() function decrements the placeHolder variable
void pattern::updatePlaceHolder()
{
    int num = 0;

    num = placeHolder - 1;

    placeHolder = num;
}

//The setPlaceHolder2() function assigns the private variable placeHolder2 with the value of zero
void pattern::setPlaceHolder2()
{
    int p = 0;

    placeHolder2 = p;
}

//The getPlaceHolder2() function returns the placeHolder2 variable
int pattern::getPlaceHolder2() const
{
    return placeHolder2;
}

//The updatePlaceHolder2() function increments the placeHolder2 variable
void pattern::updatePlaceHolder2()
{
    int num = 0;

    num = placeHolder2 + 1;

    placeHolder2 = num;
}

//The print() function displays the appropriate pattern to the console
void pattern::print()
{
    //End case if statement used to ensure the pattern prints to completion and exits the program
    if (userNum == 0)
    {
        exit(0);
    }

    //This if statement prints the top portion of the pattern
    //The statement executes on recursive calls of the print function until the placeHolder variable (which starts being equal to userNum and is being decremented after each call) is zero
    //If the userNum entered is 4 than this segment will print a 4 star line, 3 star line, 2 star line, and a 1 star line
    while(placeHolder > 0)
    {
        //This for statement prints a line of stars to the console
        for (int i = 0; i < placeHolder; i++)
        {
            cout << "*";
        }

        cout << endl;

        //Decrement the placeHolder variable by calling the updatePlaceHolder() function
        updatePlaceHolder();
        getPlaceHolder();

        //Call the print() function (recursion)
        print();
    }

    //This if statement prints the bottom portion of the pattern
    //The statement executes on recursive calls of the print function until the placeHolder2 variable equals the userNum variable
    //(the placeHolder2 variable starts being equal to zero and is being incremented after each call)
    //If the userNum entered is 4 than this segment will print a 1 star line, 2 star line, 3 star line, and a 4 star line
    while(placeHolder2 < userNum)
    {
        for (int i = 0; i <= placeHolder2; i++)
        {
            cout << "*";
        }
        cout << endl;

        //Decrement the placeHolder2 variable by calling the updatePlaceHolder2() function
        updatePlaceHolder2();
        getPlaceHolder2();

        //Call the print() function (recursion)
        print();
    }

    //Decrement the userNum variable to meet end case userNum == 0
    updateUserNum();
    getUserNum();

    //Call print() function (recursion)
    print();
}

//Constructor rectangleType() initializes the private variables of the rectangleType class
pattern::pattern()
{
    userNum = 0;
    placeHolder = 0;
    placeHolder2 = 0;
}
