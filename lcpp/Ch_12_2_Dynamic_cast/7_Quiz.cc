/*
 * 7_Quiz.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */


#include <iostream>

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		: m_value(value)
	{
	}

	virtual const char* getName() { return "Base"; }
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{
	}

	virtual const char* getName() = 0;
};

const char* Derived::getName()
{
    return "Derived";
}

int main()
{
	//Derived d(5); //Derived is an abstract class therefore can't be instaintiated
	Base b;
	std::cout << b.getName();

	return 0;
}

