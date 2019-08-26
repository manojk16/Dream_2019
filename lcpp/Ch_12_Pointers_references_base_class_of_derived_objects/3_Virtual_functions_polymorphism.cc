/*
 * 3_Virtual_functions_polymorphism.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 *
 *    Virtual functions and polymorphism: A virtual function is a special type of function that, when called, resolves to the most-derived version of the function that exists between the base and derived class. This capability is known as polymorphism. A derived function is considered a match if it has the same signature (name, parameter types, and whether it is const) and return type as the base version of the function.
 *    Such functions are called overrides.
 */
#include <iostream>
using namespace std;
class Base{
public:
	virtual const char* getName(){ return "Base";}
};
class Derived:public Base{
public:
	virtual const char* getName(){ return "Derived";}
};

int main(){
	Derived derived;
	Base &b=derived;
	Base *pbtr=&derived;
	cout << b.getName()<<endl;
	cout << pbtr->getName()<<endl;
}


