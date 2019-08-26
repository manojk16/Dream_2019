/*
 * 13_object_Slicing.cc
 *
 *  Created on: Aug 21, 2019
 *      Author: user1
 *
 *      Object slicing:
 */
#include <iostream>
#include <string>

using namespace std;
class Base{
	int m_value;

public:
	Base(int value):m_value(value){}
	virtual const char* getName()const {return "Base";}
	int getValue() const{return m_value;}
};
class Derived:public Base{
public:
	Derived(int value):Base(value){}
	virtual const char* getName() const {return "Derived";}
};
/*

int main(){
	Derived derived(5);
	cout << "derived is a " << derived.getName()<< " and has a value " << derived.getValue()<<endl;
	Base &rbase=derived;
	cout << "derived is a " << rbase.getName()<< " and has a value " << rbase.getValue()<<endl;
	Base *ptrbase=&derived;
	cout << "derived is a " << ptrbase->getName()<< " and has a value " << ptrbase->getValue()<<endl;

	return 0;
}
*/
void print_1(const Base *base){
	cout << "I am a base " << base->getName()<< endl;
}
void print_2(const Base& base){
	cout << "I am a base " << base.getName()<< endl;
}


void print(const Base base){
	cout << "I am a base " << base.getName()<< endl;
}


int main(){
	Derived derived(5);
	cout << "derived is a " << derived.getName()<< " and has a value " << derived.getValue()<<endl;
	Base base=derived;
	cout << "derived is a " << base.getName()<< " and has a value " << base.getValue()<<endl;
	//Here when instead of Base reference or pointer to the Derived object when we are assingning the Derived object to the Base object then only Base
	//portion get copied. Derived portion of the object get sliced off
	// This is called object slicing
	// Object slicing can be overcome by assining derived object to the base reference or the base pointer
// We can give an example by a function also let's say print
	print(derived);
	print_1(&derived);
	print_2(derived);





	return 0;
}


