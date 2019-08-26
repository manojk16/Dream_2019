/*
 * 5_constructor_initializarion.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 *
 *      // There is a problem in the above method if we want to set the value of m/-cost and m_id from the derived class how we can do it
 */
#include <iostream>
using namespace std;


class Base{
public:
	int m_id;
	Base(int id=0):m_id(id){}
	int getId() const{
		return m_id;
	}
};
// Initializing base class members
class Derived:public Base{
public:
	double m_cost;
	//Derived(double cost=0.0, int id):m_cost(cost)m_id(id){}
	// This is a good attempt, and is almost the right idea. We definitely need to add another parameter to our constructor,
	//otherwise C++ will have no way of knowing what value we want to initialize m_id to.
//However, C++ prevents classes from initializing inherited member variables in the initialization list of a constructor. In other words,
//the value of a variable can only be set in an initialization list of a constructor belonging to the same class as the variable.
// so the method to set the base class varaible through derived object is as below
	// Derived(double cost=0.0, int id=0):m_cost(cost){
	//	m_id=id; // but what happen if m_id is const varaible bcz const variable should be set in initialzer list
	// }

//So how do we properly initialize m_id when creating a Derived class object?

//In all of the examples so far, when we instantiate a Derived class object,
// the Base class portion has been created using the default Base constructor.
//Why does it always use the default Base constructor? Because we never told it to do otherwise!
// Fortunately, C++ gives us the ability to explicitly choose which Base class constructor will be called!
//To do this, simply add a call to the base class Constructor in the initialization list of the derived class:

	Derived(double cost=0.0, int id=0):Base(id), //// Call Base(int) constructor with value id!
		m_cost(cost){

	}
	double getCost() const{
		return m_cost;
	}
};

int main(){
	Derived derived(1.3,5);
	/*
	1.Memory for derived is allocated.
	2.The Derived(double, int) constructor is called, where cost = 1.3, and id = 5
	3.The compiler looks to see if we’ve asked for a particular Base class constructor. We have! So it calls Base(int) with id = 5.
	4.The base class constructor initialization list sets m_id to 5
	5.The base class constructor body executes, which does nothing
	6.The base class constructor returns
	7.The derived class constructor initialization list sets m_cost to 1.3
	8.The derived class constructor body executes, which does nothing
	9.The derived class constructor returns
	*/
}


