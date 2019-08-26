/*
 * 14_Const_class_object_member_function.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 */

// We can make the class using const keyword at the time of calling default constructor
#include <iostream>
using namespace std;

class Something{
	int m_value;
public:
	Something():m_value{0}{}
	void setvalue(int value){m_value=value;}
	//int getvalue(){ return m_value;}
	int getvalue() const{ // this is how can we make function as a const member function
		return m_value;
	}
};


int main(){
	const Something something;//
	//something.m_value=5;// Error voilets the const property
	//something.setvalue(5); //Error C=Voilets the const Property

	// cout << something.getValue();This is also giving compilation error
	// Because const object can only explicitly call the const member function of the class

	// A const member function is the member function that takes gurantee that it will not modify the object or call any non const member function



}
