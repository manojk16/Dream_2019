/*
 * 5_Quiz.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */
#include <iostream>

class Base
{
private:
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

	virtual const char* getName() { return "Derived"; }
};

int main()
{
	Derived d(5);
	Base &b = d;
	std::cout << b.getName();

	return 0;
}



