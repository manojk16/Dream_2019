/*
 * 4_Quiz.cc
 *
 *  Created on: Aug 26, 2019
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

	const char* getName() const { return "Base"; }
	virtual ~Base(){}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{
	}

	const char* getName() const { return "Derived"; }
};

int main()
{
	//Derived d1(5);
	Base *b = new Derived(10);
	//Derived *d= dynamic_cast<Derived *>(b);
	Derived *d=dynamic_cast<Derived*>(b);


	return 0;
}


