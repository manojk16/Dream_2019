/*
 * 15_Overload_increment_decrement.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

// Overloading prefix increment and decrement
// Because the increment and decrement operators are both unary operators and they modify their operands,
// they’re best overloaded as member functions.
#include <iostream>
using namespace std;



class Digit{
	int m_digit;
public:
	Digit(int digit=0):m_digit(digit){}
	Digit& operator++();
	Digit& operator--();
	friend std::ostream& operator<< (std::ostream &out, const Digit &d);
	int getDigit(){
		return m_digit;
	}


};

std::ostream& operator<< (std::ostream &out, const Digit &d)
{
	out << d.m_digit;
	return out;
}


Digit& Digit::operator ++(){
	cout << "Prefix Increment operator called"<<"\n";
	// If number ia at already 9 wrap around it to the 0
	if(m_digit==9){
		m_digit=0;
	}else // else increament by one
		++m_digit;

	return *this;
}

Digit& Digit::operator --(){

	cout << "Prefix decrement operator called"<<"\n";
	// if number is at 0 then wrap around it at 9 else decrement by one
	if(m_digit==0)
		m_digit=9;
	else
		--m_digit;

	return *this;
}


int main(){
	Digit digit(8);

	    /*cout << digit.getDigit()<<endl;
	    ++digit;
	    cout << digit.getDigit()<<endl;
	    ++digit;
	    cout << digit.getDigit()<<endl;;
	    --digit;
	    cout << digit.getDigit()<<endl;
	    --digit;
	    cout << digit.getDigit()<<endl;*/

	 	 std::cout << digit;
	    std::cout << ++digit;
	    std::cout << ++digit;
	    std::cout << --digit;
	    std::cout << --digit;
}






