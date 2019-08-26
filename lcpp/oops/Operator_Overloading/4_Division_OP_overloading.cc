/*
 * 4_Division_OP_overloading.cc
 *
 *  Created on: Aug 6, 2019
 *      Author: user1
 */
#include <iostream>
#include <cassert>
using namespace std;

class Cents{
	int m_cents;
public:
	Cents(int cents):m_cents(cents){}

	friend Cents operator/(const Cents &lhs, const Cents& rhs);

	int getCents()const {
		return m_cents;
	}
};


Cents operator/(const Cents& lhs, const Cents& rhs){
	assert(rhs.m_cents!=0);
	return (lhs.m_cents/rhs.m_cents);
}


int main(){
	Cents c1(20);
	Cents c2(0);
	Cents cendiv=c1/c2;
	cout << "Division of two user Defined Data Type is "<< cendiv.getCents()<<endl;
	return 0;
}





