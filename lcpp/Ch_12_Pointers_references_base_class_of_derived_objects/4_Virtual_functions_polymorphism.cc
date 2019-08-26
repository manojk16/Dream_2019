/*
 * 4_Virtual_functions_polymorphism.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;

class A{
public:
	virtual const char* getName(){return "A";}
};
class B:public A{
public:
	virtual const char* getName(){return "B";}
};

class C:public B{
public:
	virtual const char* getName(){return "C";}
};

class D:public C{
public:
	virtual const char* getName(){ return "D";}
};


int main(){
	C c;
	A &rBase=c;
	cout << "rBase is a " << rBase.getName() << '\n';
	return 0;
}
