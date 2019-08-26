/*
 * Casting_basic.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 *
 *
 *
 *To do explicit conversion we use the casting
expression of the cast:

cast-name<type>(expression);

type-> target type of the conversion
expression -> expression which needs to be converted
1. static_cast
2. dynamic_cast
3. const_cast
4. reinterpret_cast

*/

#include <iostream>

using namespace std;


int main(){

	int i, j;
	double slop=i/j; // we can use static cast to convert forcibly
	double slop= static_cast<double> (i) /j;

	// A static_cast is often useful when a larger arithmetic type is assigned to a smaller type.
	//A static_cast is also useful to perform a conversion that the compiler will not generate automatically

	void* pt = &d;
	double *dp=static_cast<double> (pt);

	//A const_cast changes only a low-level
	const char *pc;
	char *p = const_cast<char*>(pc);
	// Conventionly we an say that the cast that converts the const object into non-const object
	// cast away the const is the const_cast;
	// If the object is not originally the const and write through the const_cast is llegal
	// But if the object is const already then writing through the const_cast gives us an undefined behaviour.
	// A const_cast is most useful in the context of overloaded functions

	/******************A reinterpret_cast **************/
	/*********generally performs a low-level reinterpretation of the bit pattern of its operands. As an example, given the following cast
	 *
	 *
	 */
	int *ip;
	char *ptr = reinterpret_cast<char*>(ip);


	return 0;
}





