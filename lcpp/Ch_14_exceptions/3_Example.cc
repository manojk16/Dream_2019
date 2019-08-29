/*
 * 3_Example.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>

int main()
{

	try
	{
		throw "Wrong";
	}

	catch (double x)
	{
		std::cerr << "I caught a double exception with value " << std::endl;
	}
	catch (const std::string &str) // catch classes by const reference
	{
		// Any exceptions of type std::string thrown within the above try block get sent here
		std::cerr << "We caught an exception of type std::string" << '\n';
	}
	catch (int x)
	{
		std::cerr << "I caught an int exception with int value" << std::endl;
	}
	std::cout << "Continue in Marry go around" << std::endl;

	return 0;
}

