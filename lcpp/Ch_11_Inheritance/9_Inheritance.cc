/*
 * 9_ Inheritance.cc
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

class Derived:public Base{
public:
	Derived(int value):Base(value){}

	int getValue()const{
		return m_value;
	}
};


int main(){
	Derived d(10);
	d.identity();
	cout << "derived has value " << d.getValue() <<endl;
}



