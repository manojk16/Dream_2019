/*
 * 3_Dynamic_Cast_Reference.cc
 *
 *  Created on: Aug 26, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>

using namespace std;

class Base{
private:
	int m_value;
public:
	Base(int value):m_value(value){}
	virtual ~Base(){}
};


class Derived:public Base{
private:
	string m_name;
public:
	Derived(int value, string name):Base(value),m_name(name){}
	const string& getName(){return m_name;}
};
/*
Because C++ does not have a “null reference”, dynamic_cast can’t return a null
reference upon failure. Instead, if the dynamic_cast of a reference fails, an exception of type std::bad_cast is thrown.
New programmers are sometimes confused about when to use static_cast vs dynamic_cast. The answer is quite simple: use static_cast unless you’re downcasting, in which case dynamic_cast is usually a better choice. However,
you should also consider avoiding casting altogether and just using virtual functions.
Downcasting vs virtual functions

There are some developers who believe dynamic_cast is evil and indicative of a bad class design. Instead, these programmers say you should use virtual functions.

In general, using a virtual function should be preferred over downcasting. However, there are times when downcasting is the better choice:

When you can not modify the base class to add a virtual function (e.g. because the base class is part of the standard library)
When you need access to something that is derived-class specific (e.g. an access function that only exists in the derived class)
When adding a virtual function to your base class doesn’t make sense (e.g. there is no appropriate value for the base class to return).
Using a pure virtual function may be an option here if you don’t need to instantiate the base class.
*/


int main(){
	Derived apple(1,"Apple");
	Base &b=apple;

	Derived &d=dynamic_cast<Derived &>(b);

	cout << "The name of the Derived is " << d.getName() << endl;
	cout << "the Name of the apple is " << apple.getName() << endl;


}


