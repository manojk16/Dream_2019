/*
 * 15_Static_member_function.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 */

// Each Object has it's own copy of the member variable as below but when we declasre any varaible as statich then it is shared across the object
// means static member variable is shared with the class not with the object
#include <iostream>


using namespace std;
class Something{

public:
	int m_value=1;
	static int m_value_2;

};
// Static Value initialization
// Static Member definition is not subject to access control
int Something::m_value_2=5; // it is initialized with the class name not with the help of object so it will remain comman with every object
int main(){
	Something first;
	Something second;
	first.m_value=2;
	cout << first.m_value << " " << second.m_value <<endl;
	//Something::m_value_2+=Something::m_value_2;
	cout << "Static Variable Value is " << Something::m_value_2 << endl;
	second.m_value_2=20;
	cout << first.m_value_2 << " " << second.m_value_2 <<endl;

}

