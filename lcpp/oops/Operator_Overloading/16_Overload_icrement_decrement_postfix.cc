/*
 * 16_Overload_icrement_decrement_postfix.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

//Overloading postfix increment and decrement


#include <iostream>
using namespace std;



class Digit{
	int m_digit;
public:
	Digit(int digit=0):m_digit(digit){}
	Digit& operator++();
	Digit& operator--();

	Digit operator++(int);
	Digit operator--(int);
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
Digit Digit::operator ++(int){
	// Create a temporary variable with our current digit
	    Digit temp(m_digit);

	    // Use prefix operator to increment this digit
	    ++(*this); // apply operator

	    // return temporary result
	    return temp; // return saved state

}
Digit Digit::operator --(int){
	// Create  A temporary Varaible with our Current Digit
	Digit temp(m_digit);

	// use prefix operator to decrement this
		--(*this);
	// return the save state
		return m_digit;
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
	Digit digit(5);

	    /*cout << digit.getDigit()<<endl;
	    ++digit;
	    cout << digit.getDigit()<<endl;
	    ++digit;
	    cout << digit.getDigit()<<endl;;
	    --digit;
	    cout << digit.getDigit()<<endl;
	    --digit;
	    cout << digit.getDigit()<<endl;*/

	 	 /*std::cout << digit;
	    std::cout << ++digit;
	    std::cout << ++digit;
	    std::cout << --digit;
	    std::cout << --digit;*/
		std::cout << digit;
	    std::cout << ++digit; //
	    cout << "calls Digit::operator++();"<<endl;
	    std::cout << digit++; // calls Digit::operator++(int);
	    std::cout << digit;
	    std::cout << --digit; // calls Digit::operator--();
	    std::cout << digit--; // calls Digit::operator--(int);
	    std::cout << digit;
}

