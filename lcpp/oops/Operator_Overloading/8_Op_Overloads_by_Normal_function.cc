/*
 * 8_Op_Overloads_by_Normal_function.cc
 *
 *  Created on: Aug 7, 2019
 *      Author: user1
 */
//Rule: Prefer overloading operators as normal functions instead of friends if it’s possible to do so without adding additional functions.
#include <iostream>
using namespace std;

class Cents {
	int m_cents;
public:
	Cents(int cents) :
		m_cents(cents)
	{
	}
	int getCents() const
	{
		return m_cents;
	}
};

Cents operator+(const Cents& lhs, const Cents& rhs)
{
	return (lhs.getCents() + rhs.getCents());
}
int main()
{
	Cents cents1(6);
	Cents cents2(8);
	Cents centsSum = cents1 + cents2;
	std::cout << "I have " << centsSum.getCents() << " cents." << std::endl;

	return 0;
}
