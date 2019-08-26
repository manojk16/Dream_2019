/*
 * 2_Order_of_construction_of_derived_classes.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */

#include <iostream>

using namespace std;


class Base{
public:
	int m_id;
	Base(int id=0):m_id(id){
		std::cout << "Base\n";
	}
	int getId() const{
		return m_id;
	}
};

class Derived:public Base{
public:
	double m_cost;
	Derived(double cost=0.0):m_cost(cost){
		 std::cout << "Derived\n";
	}
	int getCost() const{
		return m_cost;
	}
};


int main(){
	//Base base;// call the Base class default constructor ;;/ c++ allocatres the memory for base class oject means member variable and Member function
	// Derived derived; // here Derived class inherit from the base class means c++ allocates the memory for all the member variable and Member function of the base class
	// As derived class having two parts 1. Base part and 2. Derived Part
	// Most base Part is constructed first once the base portion is finished derived portion is constructed

	cout << "Instantiating Base\n";
	Base cBase;
	cout << "Instantiating Derived\n";
	Derived cDerived;

}
