/*
 * 6_Constructor_basic_2.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 *
 *
 *      Direct and uniform initialization using constructors with parameters
 */

#include <iostream>
#include <cassert>

using namespace std;



class Fraction{
	int m_numerator;
	int m_dinominator;
public:
	Fraction(){
		m_numerator=0;
		m_dinominator=1;
	}
	Fraction(int numerator, int dinominator=1){
		assert(dinominator!=0);
		m_numerator=numerator;
	m_dinominator=dinominator;
	}
	int getnumeratro(){
		return m_numerator;
	}
	int getdinomarator(){
		return m_numerator;
	}


	double getvale(){
		return static_cast<double>(m_numerator/m_dinominator) ;
	}
};



