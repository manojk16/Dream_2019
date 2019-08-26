/*
 * 3_copy_constructor_basic.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */


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

	//Fraction f1(5,3);//Direct initialize a Fraction, calls Fraction(int, int) constructor
	//Fraction f_copy(f1); // default copy constructor get called, // Direct initialize -- with copy constructor?
	Fraction fiveThirds(Fraction(3,5));
	cout << fiveThirds <<endl;
	// How it works
	// 1. first direct Initialize anonymous Object
	// Then use this ananomyous object as initialize to initialize the fiveThirds Object
	// and this should call the copy constructor  But not calling
// bcz in middle there are two steps as per that copy constructor gets called but at the end there is only one step where fiveThird object is getting directly
	// initialize and it is called elision and in this process compliler opt out the calling of copy constructor

	// So when we write
	//  Fraction fiveThirds(Fraction(5, 3));
	// ompiler changes these to the
	// Fraction fiveThirds(5,3)

}


