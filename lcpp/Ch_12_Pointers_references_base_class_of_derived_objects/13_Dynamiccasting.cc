/*
 * 13_Dynamiccasting.cc
 *
 *  Created on: Aug 26, 2019
 *      Author: user1
 *
 *      ***************************Need for Dynamic casting*******************
 *      1. When dealing with polymorphism we will deal such scenario where we have pointer or reference to base class but we want to access some information which
 *      exist in the derived class only like below example
 *
 */

#include <iostream>
#include <string>
using namespace std;

class Base{
protected:
	int m_value;
public:
	Base(int value):m_value(value){}
/*virtual const string& getName(){
	return NULL;
}*/
	virtual ~Base(){}
};

class Derived : public Base{
protected:
	string m_name;
public:
	Derived(int value, string name):Base(value), m_name(name){}

	const string& getName(){
		return m_name;
	}
};

Base* getObject(bool bReturnDerived){
	if(bReturnDerived){
		return new Derived(1, "Apple");
	}else{
		return new Base(2);
	}
}

// Here getObject always returning a base pointer which either points to the base oject or derived object
// but how we can call the Derived::getName()
// 1. Add a virtual function getName() in to base class o we could call it with a Base object, and have it dynamically resolve to Derived::getName()).
// But what would this function return if you called it with a Base object? There isn’t really any value that makes sense.
//Furthermore, we would be polluting our Base class with things that really should only be the concern of the Derived class
// C++ will implicitly let you convert a Derived pointer into a Base pointer (in fact, getObject() does just that). This process is sometimes called upcasting.
//However, what if there was a way to convert a Base pointer back into a Derived pointer?
//Then we could call Derived::getName() directly using that pointer, and not have to worry about virtual function resolution at all.

//C++ provides a casting operator named dynamic_cast that can be used for just this purpose. Although dynamic casts have a few different capabilities,
//by far the most common use for dynamic casting is for converting base-class pointers into derived-class pointers. This process is called downcasting

int main(){
	 //Base *b=getObject(true);
	// Now the question here how do we print the derived object here having the base pointer only

	//cout << b->getName()<<endl;
// How to use dynamic_cast here :


	//delete b;
	Base *b=getObject(true);
	Derived *d=dynamic_cast<Derived*>(b);
	// use dynamic cast to convert Base pointer into Derived pointer
	// cout << "The name of the Derived is " << d->getName() << endl;
	// delete b;

	// This is succesful because b points to the derived object
	// If we pass false value into getObject thebn what will happen
	// 1. b will points to the base object it self
	// 2. so conversion from base pointer which points to the object object into derived object is not possible and result of conversion will be nullpointer
 // so before always use the null checking as below
	//
	if(d)
		cout << "The name of the Derived is " << d->getName() << endl;
	delete b;

}

