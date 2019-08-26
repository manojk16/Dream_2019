/*
 * 17_Static_Member_Function.cc
 *
 *  Created on: Aug 3, 2019
 *      Author: user1
 */
#include <iostream>

using namespace std;

class Something{
	static int m_value;
public:
	Something(){}
	static int getvalue(){
		return m_value;
	}
};
int Something::m_value=5;


int main(){
	// cout << " Value of Static Variable::  "<< Something::m_value <<endl;
	// As member variable is private so this will give the compilation error, It is only possbile if member variable is public only
	Something something;
	// cout << "Value of Static Variable is :: "<< something.m_value << endl; // As it is private So not accessible outside the class with object also
	// So we should have static member
	// cout << "Value of Static Variable is :: "<< something.getvalue() << endl;
	// As getvalue is the static member fuction it is not attached to the paticular object so it can be called using scope resolution
	cout <<"Value of Static Variable is ::"<< Something::getvalue() <<endl;

	// Static member function can access directly to the other static member (variable or function ) but ot to the non static member

	return 0;
}

