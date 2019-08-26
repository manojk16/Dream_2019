/*
 * Quiz_2_functionPtr.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 *
 *
 *
 *      /*************************Static_assert

C++11 adds another type of assert called static_assert. static_assert takes the form**********/
/*
 * C++ Style
 * #include <iostream>
#include <cassert>


int getArrayValue(const std::array<int, 10> &array, int index){

	 assert(index >= 0 && index <= 9);
		return array[index];
}
*/

// C++ 11

// Instead of assert C++ 11 use static_assert

/*
Unlike assert, which operates at runtime, static_assert is designed to operate at
compile time, causing the compiler to error if the condition is not true. If the condition is false,
the diagnostic message is printed.
*/
// Example
static_assert(sizeof(long)==8,"long must be 8 bytes");
static_assert(sizeof(int)==4,"Size of int must be 4 bytes");

//static_assert(sizeof(long)==9,"long must be 8 bytes");
//static_assert(sizeof(int)==5,"Size of int must be 4 bytes");
int main(){
	return 0;
}


