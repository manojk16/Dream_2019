/*
 * 5_operator_overloading_different_types.cc
 *
 *  Created on: Aug 7, 2019
 *      Author: user1
 */
#include <iostream>
class Cents{
private:
	int m_cents;
public:
	Cents(int cents):m_cents(cents){}

	friend Cents operator+(int x, const Cents& obj);
	friend Cents operator+(const Cents& obj, int x);
	int getCents(){
		return m_cents;
	}
};


Cents operator+(int x, const Cents& obj){

	//return (x+obj.m_cents); also ok
	return Cents(x+obj.m_cents);
}

Cents operator+(const Cents& obj, int x){

	// return (obj.m_cents+x);also ok
	return Cents(obj.m_cents+x);
}

int main(){
	Cents c1=Cents(4)+6;
	Cents c2=10+Cents(5);

	std::cout << "I have " << c1.getCents() << " cents." << std::endl;
	std::cout << "I have " << c2.getCents() << " cents." << std::endl;
	return 0;
}
