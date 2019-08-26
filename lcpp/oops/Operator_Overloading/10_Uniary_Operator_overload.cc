/*
 * 10_Uniary_Operator_overload.cc
 *
 *  Created on: Aug 13, 2019
 *      Author: user1
 */
//// Because the increment and decrement operators are both unary operators and they modify their operands,

#include <iostream>
using namespace std;

class Cents{
	int m_cents;
public:

	Cents(int cents=0):m_cents(cents){}
	int getcents()const{
		return m_cents;
	}
	Cents operator-()const{

			return Cents(-m_cents);
	}
};
int main(){
	Cents c1(20);
	Cents c2;
	c2=-c1;
	cout << c2.getcents() << endl;



}
