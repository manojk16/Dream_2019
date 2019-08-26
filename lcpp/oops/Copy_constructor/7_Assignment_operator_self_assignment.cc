/*
 * 7_Assignment_operator_self_assignment.cc
 *
 *  Created on: Aug 15, 2019
 *      Author: user1
 */


/*
 * 20_Overloads_assignment_ops.cc
 *
 *  Created on: Aug 15, 2019
 *      Author: user1
 */

#include <iostream>
using namespace std;


class Fraction{
	int m_numerator;
	int m_dinominator;
public:
	Fraction(int num=0, int den=1):m_numerator(num),m_dinominator(den){} // Defualt Constructor

	// Copy Constructor
	Fraction(const Fraction &fcopy):m_numerator(fcopy.m_numerator),m_dinominator(fcopy.m_dinominator){
		cout << "Copy Constructor is get called" << endl;
	}

	// assignment operator overload

	Fraction& operator=(const Fraction &lhs);

	friend ostream& operator<<(ostream& out, const Fraction &fcopy);
};

Fraction& Fraction::operator=(const Fraction &lhs){
	// do the copy
	cout << "Assignment OPerator is get called" << endl;
	m_numerator=lhs.m_numerator;
	m_dinominator=lhs.m_dinominator;

	return *this;
}

ostream& operator<<(ostream& out, const Fraction &fcopy){
	out << fcopy.m_numerator << " / " << fcopy.m_dinominator <<endl;
	return out;
}


int main(){
	/*Fraction Fivethird(5,3);
	Fraction f;
	f=Fivethird;// Assignment operator overload called
	Fraction Five=Fivethird; // copy Constructor called
	cout << f <<endl;

    Fraction f1(5,3);
    Fraction f2(7,2);
    Fraction f3(9,5);

    f1 = f2 = f3; // chained assignment


*/	Fraction f1(5,3);

	f1=f1 ;// self assessment
	// In self assignment case each member assign to itself it doesn't have any impach but
	return 0;
}
