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
using std::cout; // qualifies cout element in standard namespace; for displaying console output
using std::cin; // qualifies cin element in standard namespace; for accepting input
using std::endl; // qualifies endl element in standard namespace; for ending line

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
            cout << "The starting number of organisms " // output stream a message
                 << "must be a valid number that is at least 2.\n"; // continues message on same line
            cin.clear(); // clear error flag for cin
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignores input in buffer until the line break
        }
        else // runs if above "if" statement is false
        {
            loopFlag = false; // change Boolean value to end this loop (good input!)
        }
    } while (loopFlag); // loop control expression is a Boolean value

    return 0; //ends the program and returns a zero back to the operating system
}

/*

What does the using std::..., do for us, and why would we use this instead of using std namespace?
    Using std::... explicitly qualifies the standard namespace for a specific element. We would want to do
    this to avoid name collisions, which occur when an element is qualified by more than one namespace.

What about cin.fail() for console input?
    Cin.fail() checks if the inputed value is compatible with the variable type.

What was a short-circuit evaluation?
    If the leftmost subexpression in a logical expression using && or || gives enough information to
    determine the final value of the expression, then C++ does not evaluate the second expression.

What about the parameters for ignore, the numeric limits and streamsize?
    Cin.ignore will ignore input in the buffer until the next line break. Numeric limit tells cin.ignore to
    ignore up to the maximum value of the specified type, which in this case is defined by streamsize as
    the size of the buffer.

*/
