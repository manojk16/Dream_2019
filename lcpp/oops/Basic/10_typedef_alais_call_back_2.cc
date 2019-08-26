/*
 * typedef_alais_call_back_2.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */


typedef bool (*validatefunc)(int, int);
// This defines a typedef name validatefunc which is a function pointer to a function which is having two int argument and returns a bool

// basic function pointer signature


int validate(int x, int y, bool (*validatefunc)(int int)) // ugly instead of this we can write as below also
bool validate(int x, int y, validatefunc funcptr);

