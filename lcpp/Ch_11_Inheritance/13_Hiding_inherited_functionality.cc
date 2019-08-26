/*
 * 13_Hiding_inherited_functionality.cc
 *
 *  Created on: Aug 19, 2019
 *      Author: user1
 *
 *      1. Changing an inherited member’s access level
 *      c++ gives us the flexibility to changing the access level of inherated member
 *
 */

#include <iostream>


using namespace std;


class Base{
private:
	int m_value;
public:
	Base(int value):m_value(value){}
protected:
	void printValue(){
		cout << m_value ;
	}

};


class Derived:public Base{
public:
	Derived(int value):Base(value){}

	//using Base::printValue;
	using Base::printValue;// was inherited as protected, so the public has no access
	    // But we're changing it to public via a using declaration
};

int main(){
	Derived derived(7);
	derived.printValue();
	return 0;
}
