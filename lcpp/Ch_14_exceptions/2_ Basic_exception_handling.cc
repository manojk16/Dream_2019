/*
 * 2_ Basic_exception_handling.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */

// Exception in C++ are handled using three keywords throw, try and catch

// 1. Throwing exceptions: Throw statement signal en error has een occured


#include <iostream>
#include <exception>

throw -1; // throw an literal integer value;
throw ENUM_INVALID_INDEX;// ENUM_INVALID_INDEX
throw "Can not take square root of negative number" ; // // throw a literal C-style (const char*) string
throw dX; // throw a double variable that was previously defined
throw MyException("Fatal Error"); // Throw an object of class MyException


// 2. Looking for exceptions : use the try block

try{
	// Statements that may throw exceptions you want to handle go here
	    throw -1; // here's a trivial throw statement
}

// 3. Handling exceptions :


catch (int x)
{
    // Handle an exception of type int here
    std::cerr << "We caught an int exception with value" << x << '\n';
}


catch (double) // note: no variable name since we don't use it in the catch block below
{
    // Handle exception of type double here
    std::cerr << "We caught an exception of type double" << '\n';
}
