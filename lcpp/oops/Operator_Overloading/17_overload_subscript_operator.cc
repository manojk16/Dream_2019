/*
 * 17_overload_subscript_operator.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */


// to allow access to the elements of m_lis array

// The subscript operator is one of the operators that must be overloaded as a member function. An overloaded operator[] function will always take one parameter:


#include <iostream>
using namespace std;


class Intlist{
	int m_list[10];
public:
	int& operator[](int);
	const int& operator[] (int index) const;// for const object
};

int& Intlist::operator [](int index){
	return m_list[index];
}
// for const object

const int& Intlist::operator[] (int index) const // for const objects: can only be used for access
{
    return m_list[index];
}
int main(){
		Intlist list;
	    list[2] = 3; // set a value
	    std::cout << list[2]<<endl; // get a value

	    return 0;
}
// Why operator[] returns a reference

/*Because the subscript operator has a higher precedence than the assignment operator, list[2] evaluates first. list[2] calls operator[],
which we’ve defined to return a reference to list.m_list[2]. Because operator[] is returning a reference,
	it returns the actual list.m_list[2] array element. Our partially evaluated expression becomes list.m_list[2] = 3,
	which is a straightforward integer assignment.

In the lesson a first look at variables, you learned that any value on the left hand side of an assignment statement must be an l-value (which is a variable that has an actual memory address). Because the result of operator[] can be used on the left hand side of an assignment (e.g. list[2] = 3), the return value of operator[] must be an l-value. As it turns out, references are always l-values, because you can only take a reference
	of variables that have memory addresses. So by returning a reference, the compiler is satisfied that we are returning an l-value.*/


