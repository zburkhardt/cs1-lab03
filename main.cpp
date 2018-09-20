/*
    COPYRIGHT (C) 2018 Zach Burkhardt (zmb14) All rights reserved.
    CSI assignment 3-A
    Author. Zach Burkhardt
            zmb14@zips.uakron.edu
    Version. 1.00 09.20.2018
    Purpose: This program will request input on the number of organisms and check that the input is valid.
*/

// My Validation Program for input

#include <iostream> // for input-output stream operations
#include <iomanip> // for providing parametric manipulators operations
#include <limits> // for providing elements with the characteristics of arithmetic types
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double organisms = 0.00; // To hold the number of organisms

    // Get the number of starting organisms

    bool loopFlag = true; // Control flag for the loop

    do // post test loop
    {
        cout << "Enter the starting number of organisms: "; // output stream a message
        cin >> organisms; //input stream a variable
        // Do not accept a number less than 2 for the
        // starting size of the population
        if ((cin.fail()) || organisms < 2) // decision construct tests 2 conditions
        {
            cout << "The starting number of organisms "
                 << "must be a valid number that is at least 2.\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            loopFlag = false; // change Boolean value to end this loop (good input!)
        }
    } while (loopFlag); // loop control expression is a Boolean value

    return 0; //ends the program and returns a zero back to the operating system
}

/*

What does the using std::..., do for us, and why would we use this instead of using std namespace?

What about cin.fail() for console input?
    Cin.fail() tests cin input to check compatibility with the variable's type. This ensures that
    we do not get #################################
What was a short-circuit evaluation?

What about the parameters for ignore, the numeric limits and streamsize?

*/
