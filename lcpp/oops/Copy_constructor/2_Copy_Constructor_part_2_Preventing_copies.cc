/*
 * 2_Copy_Constructor_part_2_Preventing_copies.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */
// Preventing copies of class: By Making copy constructor private

#include <cassert>
#include <iostream>

using namespace std;

class Fraction{
	int m_numerator;
	int m_denominator;

	Fraction(const Fraction &fcopy):m_numerator(fcopy.m_numerator),m_denominator(fcopy.m_denominator){
		cout << "Copy Constructor called"<< endl;
	}
public:
	Fraction(int num=0, int den=1):m_numerator(num),m_denominator(den){
		assert(m_denominator!=0);
	}

	friend ostream& operator<<(ostream& out, const Fraction &frac);
};

ostream& operator<<(ostream& out, const Fraction &frac){
	out << frac.m_numerator << " / " << frac.m_denominator << endl;
	return out;
}


int main(){
	Fraction Fivehird(5,3);// Direct Initialization called the constructor for that
	Fraction fcopy(Fivehird); // compile error
}



