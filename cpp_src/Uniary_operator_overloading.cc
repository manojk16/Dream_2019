/*
 * Uniary_operator_overloading.cc
 *
 *  Created on: Jul 23, 2019
 *      Author: user1
 */

/* ===================================================================================== */
/* ===== Overload operator '-' to change the sign of all data members in the class ===== */
/* ===================================================================================== */


#include <iostream>
using namespace std;
class Test{
	int a;
	float b;
public:
	Test(){
		a=0;
		b=0;
	}
	Test(int x, float y){
		a=x;
		b=y;
	}
	Test operator -(){

		a=-a;
		b=-b;
		return *this;
	}
	void display(){
		cout <<" Value of a is " << a <<" \n";
		cout<< " value of B is " << b  <<" \n";
	}
};


int main(){
	Test T1(20,20.5);
	T1.display();
	Test T2;
	T2=-T1;
	T2.display();


}


