/*
 * 1_copy_Constructor.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

// C++ Support
// 1. Direct Initialization x(6)
// 2. Uniform Initialization x{6}

 // In Diurect and Uniform Initialization Object Being Created is directly initialize

// 3. copy Initialization x=6

// if you do not provide a copy constructor for your classes, C++ will create a public copy constructor for you. Because the compiler does not know
// much about your class, by default, the created copy constructor utilizes a method of initialization called memberwise initialization.
// Memberwise initialization simply means that each member of the copy is initialized directly from the member of the class being copied.
#include <cassert>
#include <iostream>
using namespace std;



class Fraction{
	int m_deniminator;
	int m_numerator;
public:
	Fraction(int den=1, int num=0):m_deniminator(den),m_numerator(num){
		assert(m_deniminator!=0);
	}
// We can explicitly define the copy constructor this peice of code running without this explicit definiation also
Fraction(const Fraction &fcopy):m_deniminator(fcopy.m_deniminator),m_numerator(fcopy.m_numerator){
	//m_deniminator=fcopy.m_deniminator;
	//m_numerator=fcopy.m_numerator;
	cout << "copy constructor called "<<endl;
}
	friend ostream& operator<<(ostream& out,const Fraction &in);

};
ostream& operator<<(ostream& out,const Fraction &in){
	out<< in.m_numerator << "/ " << in.m_deniminator <<endl;
	return out;
}

int main(){

	Fraction f1(5,3);//Direct initialize a Fraction, calls Fraction(int, int) constructor
	Fraction f_copy(f1); // default copy constructor get called, // Direct initialize -- with copy constructor?
}
