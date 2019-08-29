/*
 * 1_Need_for_Exeption.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */

// One of the most common ways to handle the error is by return code

// for example
#include <iostream>
#include <string>
#include <cstring>
using namespace std;



int findFirstChar(const char *string, char ch){
	const std::size_t stringlength{strlen(string)};

	for(auto index:stringlength){
		if(string[index]==ch)
			return index;

		return -1;
}


