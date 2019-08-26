/*
 * Recursion_factorial.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;


int factorial(int number){

	if(number==0|| number==1){
		return 1;
	}
	return number*factorial(number-1);
}

int main(){

	for (int count = 0; count < 7; ++count)
			std::cout << factorial(count) << '\n';
}

