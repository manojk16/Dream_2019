/*
 * Constructor_member_initializer_lists.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 */

#include <iostream>
class Something{
	int m_value1;
	double m_value2;
	char m_value3;
public:
	Something(){
		// These are all assignments not the Initialization
		m_value1=1;
		m_value2=2.0;
		m_value3='A';
	}

};
/*
When the class’s constructor is executed, m_value1, m_value2, and m_value3 are created.
Then the body of the constructor is run, where the member data variables are assigned values.
This is similiar to the flow of the following code.

int m_value1;
double m_value2;
char m_value3;

m_value1 = 1;
m_value2 = 2.2;
m_value3 = 'c'

As we know that some type of data like const and ref should be initialize once they are declared

*/

class Something_1{
	const int m_value;
public:
	Something_1(){
		m_value=1; // it will throws the error bcz already variable has been created and const variable can't be updated
	}
};

// In this case Member initializer lists play the roll, For this c++ initialize the class member variable through member initializer list
class Something_2{
	int m_value_1;
	double m_value_2;
	char m_value_3;
public:
	Something_2():m_value_1(1),m_value_2(2.2),m_value_3('c'){
		// Nothing in the Assignments
	}
	void print(){
		std::cout << "Something(" << m_value_1 << ", " << m_value_2 << ", " << m_value_3 << ")\n";
	}
};

// Through constructor member initialize list we can initialze the const member variable before it's creation into the member initialization list
class Somehting_4{
	const int m_value1;
public:
	Somehting_4(int value):m_value1(value){

	}
};
// Perhaps surprisingly, variables in the initializer list are not initialized in the order that they are specified in the initializer
// list. Instead, they are initialized in the order in which they are declared in the class.





