/*
 * 7_Basic.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 *
 *
 *      Classes containing Classes:
 *
 *      When variable b is constructed, the B() constructor is called. Before the body of the constructor executes,
 *      m_a is initialized, calling the class A default constructor. This prints “A”. Then control returns back to the B constructor,
 *       and the body of the B constructor executes. This makes sense when you think about it, as the B() constructor may want to use
 *       variable m_a -- so m_a had better be initialized first!
 */
#include <iostream>
using namespace std;
class A{
public:
	A(){
		cout << "Inside A "<< endl;
	}
};

class B{
public:
	A m_a;
	B(){
		cout << "B contains B " <<endl;
	}

};

int main(){
	B b;
	return 0;
}
