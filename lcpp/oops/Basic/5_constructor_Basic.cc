/*
 * 5_constructor_Basic.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 *
 *
 *      When all member of the class are public we can initialize all the member of the class
 *      by initialization list or by uniform initialization(c++11) as below
 */
#include <iostream>


class foo{
	//int m_z;
public:
	int m_x;
	int m_y;

};
int main(){
foo obj={4,5};// Initialization list
foo obj_1{6,7};// Uniform Initialization c++
}

/*
 * However, as soon as we make any member variables private, we’re no longer able to initialize classes in this way.
 *  It does make sense: if you can’t directly access a variable (because it’s private), you shouldn’t be able to directly initialize it.So then how do we initialize a class with private member variables? The answer is through constructors.
*/
