/*
 * 3_Converting_constructor_explicit.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */
#include <cassert>
#include <iostream>
using namespace std;

class Fraction{
	int m_numerator;
	int m_dinomirator;
public:

	Fraction(int num=0, int den=1):m_numerator(num),m_dinomirator(den){
		cout << "Default Constructor Called"<<endl;
	}
	Fraction(const Fraction &fcopy):m_numerator(fcopy.m_numerator),m_dinomirator(fcopy.m_dinomirator){
		cout << "Copy Constructor gets Called"<<endl;
	}
	friend ostream& operator<<(ostream &out, const Fraction &frac);
	int getNumerator(){
		return m_numerator;
	}
	void setNumerator(int num){
		m_numerator=num;
	}

};


ostream& operator<<(ostream &out, const Fraction &frac){
	out << frac.m_numerator << " / " << frac.m_dinomirator <<endl;
	return out;

}

Fraction makeNegative(Fraction f){
	f.setNumerator(-f.getNumerator());
	return f;
}



int main()
{
    std::cout << makeNegative(6); // note the integer here

    return 0;
}


// We pass the integer in to a fucntino which is expecting Fraction Object
// As Fraction class having a constructor which can accept single interger and can set the value of
// Denominator and Numinator
// So here compiler be default convert this integer value into Fraction Object
// This implicit conversion works for all kinds of initialization (direct, uniform, and copy).

// Constructor ready to use implicit conversion are called convertable constructor
// Prior to c++11 only constrctor having one parameter can only be convertable constructor
// But with c++ 11 constructor with multiple parameter and are initialize with Uniform Initialization method can also be convertable
// In the above program this conversation does not making any issue but if we will check into nect program it can create the isseu


