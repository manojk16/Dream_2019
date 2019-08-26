/*
 * 2_Overloading_Minus.cc
 *
 *  Created on: Aug 6, 2019
 *      Author: user1
 */

#include <iostream>
using namespace std;

class Cents{
	int m_cents;
public:
	Cents(int cents):m_cents(cents){}

	friend Cents operator-(const Cents &lhs, const Cents& rhs);

	int getCents()const {
		return m_cents;
	}
};


Cents operator-(const Cents& lhs, const Cents& rhs){
	return (lhs.m_cents-rhs.m_cents);
}


int main(){
	Cents c1(20);
	Cents c2(10);
	Cents censub=c1-c2;
	cout << "Subtraction of two user Defined Data Type is "<< censub.getCents()<<endl;
	return 0;
}
