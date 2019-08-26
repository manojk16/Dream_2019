/*
 * 10_Shallow_copy.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */

// Default copy constructor and default assignment operator provides the Member wise copy or shallow copy
// Shallow copy or Member wise copy i. e c++ do the copy of each member individually using assignment operator
// When Classes are simple they don't contian any dynamic memory allocation then it works well
#include <cassert>
#include <iostream>
using namespace std;
class Fraction{
	int m_numerator;
	int m_denominator;
public:
	// default constructor
	Fraction(int num=0,int deno=1):m_numerator(num),m_denominator(deno){
		assert(m_denominator!=0);
	}

	// default copy constructor

	Fraction(const Fraction &fcopy):m_numerator(fcopy.m_numerator),m_denominator(fcopy.m_denominator){

	}

	// default Assignment Operator

	Fraction& operator=(const Fraction &fcopy);

	friend ostream& operator<<(ostream& out, const Fraction &fcopy);
};


Fraction& Fraction::operator =(const Fraction &fcopy){
	if(this==&fcopy){
		return *this;
	}
	m_numerator=fcopy.m_numerator;
	m_denominator=fcopy.m_denominator;
	return *this;
}

ostream& operator<<(ostream& out, const Fraction &fcopy){
	out << fcopy.m_numerator << "/ " << fcopy.m_denominator <<endl;
	return out;
}

// Here We have written the default version of copy constructor and assignment operator of we will not write these version still this class
// works perfectly bcz complier will generate default version of these two

int main(){

}


