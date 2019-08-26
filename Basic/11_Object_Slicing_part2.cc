/*
 * 11_Object_Slicing_part2.cc
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

// from here also Derived object get sliced off
/*
int main()
{
	std::vector<Base> v;
	v.push_back(Base(5)); // add a Base object to our vector
	v.push_back(Derived(6)); // add a Derived object to our vector

        // Print out all of the elements in our vector
	for (int count = 0; count < v.size(); ++count)
		std::cout << "I am a " << v[count].getName() << " with value " << v[count].getValue() << "\n";

	return 0;
}
*/


