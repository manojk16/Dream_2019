/*
 * 6_Explicit_conversion_part2.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

#include <iostream>

using namespace std;


class Cents{
	int m_cents;
public:
	Cents(){};
	explicit Cents(int cents):m_cents(cents){}
	int getCents(){
		return m_cents;
	}
};


int main(){

	 //Cents c=100; //
	 // Here c is an object of type Cents we are comparing it with the interger value of 100
	// if we write explicit keyword befroe the parameterize constructor it will give error or it will correct the above issue
	// then we have to write as
	Cents c(100);
	cout << c.getCents() <<endl;

}

