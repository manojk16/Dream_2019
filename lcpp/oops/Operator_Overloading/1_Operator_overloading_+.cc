/*
 * 1_Operator_overloading.cc
 *
 *  Created on: Aug 6, 2019
 *      Author: user1
 */

/*************Limitation On Operator Overloading*****************************/
/*
 * 1. The exceptions are: conditional (?:), sizeof, scope (::), member selector (.), and member pointer selector (.*).
 * 2.
 *
 *
 */

/***************** + operator Overloading Using Friend function *****************/
#include <iostream>
using namespace std;
class Cents{
	int m_cents;
public:
	Cents(int cents):m_cents(cents){}

	friend Cents operator +(const Cents &lhs, const Cents& rhs);

	void print()const {
		cout << "The sum of the cents are" << m_cents <<endl;
	}
};


Cents operator+(const Cents& lhs, const Cents& rhs){
	return (lhs.m_cents+rhs.m_cents);
}

int main(int argc, char **argv) {
	Cents c1(10);
	Cents c2(20);
	Cents centssum=c1+c2;
	centssum.print();
	return 0;
}



