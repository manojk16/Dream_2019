/*
 * 12_Oject_Slicing.cc
 *
 *  Created on: Aug 21, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Base{
	int m_value;

public:
	Base(int value):m_value(value){}
	virtual const char* getName()const {return "Base";}
	int getValue() const{return m_value;}
	virtual ~Base(){

	}
};
class Derived:public Base{
public:
	Derived(int value):Base(value){}
	virtual const char* getName() const {return "Derived";}
};

int main(){
	Derived d1(5);
	Derived d2(6);
	cout << "d1 is a " << d1.getName()<< " and has a value " << d1.getValue()<<endl;
	cout << "d2 is a " << d2.getName()<< " and has a value " << d2.getValue()<<endl;
	Base &b = d2;
	cout << "b is a " << b.getName()<< " and has a value " << b.getValue()<<endl;
	b=d1;
	cout << "b is a " << b.getName()<< " and has a value " << b.getValue()<<endl;
}



