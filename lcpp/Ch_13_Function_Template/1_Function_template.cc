/*
 * 1_Function_template.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 *
 *
 *      // Why do we need Function Template
 *
 *      Function Template: Means defining a function without havning any speicifc type of argument
 */
#include <iostream>


int max(int x, int y){
	return (x > y) ? x : y;
}

double max(double x, double y){
	return (x > y) ? x : y;
}
//In order to make this work, we need to tell the compiler two things: First, that this is a template definition, and
// second, that T is a placeholder type. We can do both of those things in one line, using what is called a template parameter
//declaration:

template <typename T> // // this is the template parameter declaration
T max(T a, T b){
	return (a > b) ? a : b;
}

// template : tell us the compiler what going to follow the template parameter
// We placed all our parameter inside <>
// To create A template type parameter use either typename or class

//One final note: Because the function argument passed in for type T could be a class type, and it’s generally not a good idea to pass classes
//by value, it would be better to make the parameters and return types of our templated function const references:
template<typename T>
const T& max(const T& x, const T& y){
	return (x > y) ? x : y;
}

