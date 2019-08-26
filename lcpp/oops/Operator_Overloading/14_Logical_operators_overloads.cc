/*
 * 14_Logical_operators_overloads.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */
// Because the increment and decrement operators are both unary operators and they modify their operands,

//Here’s a different example with an overloaded operator>, operator<, operator>=, and operator<=:

#include <iostream>

using namespace std;


class Cents{
	int m_cents;
public:
	Cents(int cents):m_cents(cents){}

	friend bool operator >(const Cents &c1, const Cents &c2);
	friend bool operator <(const Cents &c1,const Cents &c2);
	friend bool operator >=(const Cents &c1,const Cents &c2);
	friend bool operator <=(const Cents &c1,const Cents &c2);
};

bool operator >(const Cents &c1,const Cents &c2){
	cout << "> operator overloads"<<ends;
	return (c1.m_cents > c2.m_cents);
}

bool operator <(const Cents &c1,const Cents &c2){
	cout << "< Operator overloads"<<endl;
	return (c1.m_cents < c2.m_cents);
}
bool operator >=(const Cents &c1,const Cents &c2){
	cout << "> = overloads"<<endl;
	return (c1.m_cents >= c2.m_cents);
}

bool operator <=(const Cents &c1,const Cents &c2){
	cout << "<= Operator Overloads"<<endl;
	return(c1.m_cents <= c2.m_cents);
}

int main(){
	Cents c1(10);
	Cents c2(5);

	if(c1>c2){
		cout << "c1 is greater then c2"<<endl;
	}
	if(c1<c2)
		cout<< "C1 is less then c2 " <<endl;
	if(c1>=c2)
		cout << "c1 is greather then or equal to c2"<< endl;
	if(c1 <= c2)
		cout << "c1 is less then or equal to c2"<<endl;
}
