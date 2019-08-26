/*
 * 10_Calling_inherited_functions_overriding_behavior.cc
 *
 *  Created on: Aug 19, 2019
 *      Author: user1
 */

#include <iostream>

using namespace std;


class Base{
protected:
	int m_value;
public:
	Base(int value):m_value(value){}

	void identity(){
		cout << "I am in Base \n";
	}

};

class Derived: public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }
};


int main(){
	Base base(5);
	base.identity(); //I am in Base

	Derived derived(7);
	derived.identity(); // I am in Base: Here first compiler check if this function is defined in the Derived class if it is not there then it takes from the inherited version of the finction

}
