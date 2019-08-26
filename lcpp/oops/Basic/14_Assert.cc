/*
 * 14_Assert.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 * Using a conditional statement to detect a violated assumption, along with printing an error message and terminating the program,
 *  is such a common response to problems that C++ provides a shortcut method for doing this. This shortcut is called an assert.
 *
 *

 */
#include <iostream>
#include <cassert>


int getArrayValue(const std::array<int, 10> &array, int index){

	 assert(index >= 0 && index <= 9);
		return array[index];
}



