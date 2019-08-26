/*
 * 6_virtual_destructor.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */

#include <iostream>

using namespace std;



class Base{
public:
	virtual ~Base(){
		cout << "Calling Base Destructor \n";
	}
};

class Derived:public Base{
	int *m_array;
public:
	Derived(int length){
		m_array= new int[length];
	}

	~Derived() // note: not virtual (your compiler may warn you about this)
	    {
	        std::cout << "Calling ~Derived()" << std::endl;
	        delete[] m_array;
	    }

};


int main(){
	Derived *derived = new Derived(5);
	Base *base= derived;
	delete base;
}


