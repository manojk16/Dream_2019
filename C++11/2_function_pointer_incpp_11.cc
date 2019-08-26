/*
 * function_pointer_incpp_11.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 *
 *
 *      Using std::function in C++11

Introduced in C++11, an alternate method of defining and storing function pointers is to use std::function,
 which is part of the standard library <functional> header.
To define a function pointer using this method, declare a std::function object like so:
 */


#include <functional>
#include <iostream>
//bool validate(int x, int y , std::function<bool(int,int)> fcn);


int foo(){
	return 5;
}
int goo(){
	return 6;
}

int main(){
	std::function<int()> funcptr;
	funcptr=goo;
	std::cout<< funcptr() <<std::endl;

}
