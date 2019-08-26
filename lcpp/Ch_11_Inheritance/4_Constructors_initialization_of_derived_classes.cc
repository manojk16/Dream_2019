/*
 * 4_Constructors_initialization_of_derived_classes.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
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

class Derived:public Base{
public:
	double m_cost;
	Derived(double cost=0.0):m_cost(cost){}
	double getCost() const{
		return m_cost;
	}
};

int main(){
	Base base(5);
	/* 1. Memory for the base is set aside
	 * 2. Base defualt constructor gets called
	 * 3. Initializer list initialize the value
	 * 4. constructor body executes
	 * 5. Control returns to the caller
	 * */
	Derived derived(20.5);
	/*Note : derived having two portion 1. Base portion and Derived portion
	 * 1. Memory for the derived is set aside.
	 * 2. Appropriate Derived Constructor gets called
	 * 3. IMP : The Base constructor is constructed first using specified base constructor, If no base constructor is specified default base constructor called
	 * 4. The initializer list initilalize the varaibles
	 * 5. constructor body gets executes
	 * 6. controls return to the caller
	 * */


}

// There is a problem in the above method if we want to set the value of m/-cost and m_id from the derived class how we can do it




