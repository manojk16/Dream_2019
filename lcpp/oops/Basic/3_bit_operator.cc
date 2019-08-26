/*
 * bit_operator.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 */

#include <iostream>

using namespace std;



int main(){
	unsigned int x=4;
	// left shift
	x=x<<1;
	cout << x << endl;
	// now x=8;


	x= x >> 2;

	cout <<  "Value of x is " << x <<endl;

	return 0;

}
