/*
 * Encapsualted.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 *
 *
 *      Benefits of Encapsulation:
 *      1. Benefit: encapsulated classes are easier to debug
 *      2. encapsulated classes help protect your data and prevent misuse
 */
#include <iostream>
/*

class something{
public:
	int m_value1;
	int m_value2;
	int m_value3;
};
int main(){
	something obj;
	obj.m_value1=5;
	std::cout << obj.m_value1 << std::endl;

}
*/

// This program will work fine but if we want to change the varaible name not only this
// program will break but all other program which are using this one will also be break out



// so Instead this we can bind the data and operation which will be performed on that data into a single entity


class Something{
	int m_value1;
	int m_value2;
	int m_value3;
public:
	void setvalue(int value){
		m_value1=value;
	}
	int getvalue(){
		return m_value1;
	}
};
 // If we change the class as below
/*

class Something
{
private:
    int m_value[3]; // note: we changed the implementation of this class!

public:
    // We have to update any member functions to reflect the new implementation
    void setValue1(int value) { m_value[0] = value; }
    int getValue1() { return m_value[0]; }
};


 * */

// No need to change into main function,
int main(){
	Something something;
	something.setvalue(5);
	std::cout << something.getvalue() << std::endl;
}

// If we need to change the variable name so it will not effect anything not even this prog get break down

