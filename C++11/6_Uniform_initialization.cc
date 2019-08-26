/*
 *       When all member of the class are public we can initialize all the member of the class
 *      by initialization list or by uniform initialization(c++11) as below
 */

#include <iostream>


class foo{

public:
	int m_x;
	int m_y;

};

int main(){
 foo obj={4,5};// Initialization list
 foo obj_1{6,7};// Uniform Initialization c++
}
