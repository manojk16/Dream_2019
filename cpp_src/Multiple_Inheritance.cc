/*
 * Multiple_Inheritance.cc
 *
 *  Created on: Jul 23, 2019
 *      Author: user1
 */

/* =================================================== */
/* ===== Sample program for multiple inheritance ===== */
/* =================================================== */

#include <iostream>
using namespace std;

class A{
public:
	int a;

};
class B{
public:
	int b;
};
class C: public A,public B{
public:
	int c;

};

int main(){
	C obj_c;
	// Input the value of
	cout << "Enter the value of obj_b->b " ; cin>> obj_c.a;
	cout << "Enter the value of obj_c->c " ;cin >> obj_c.b;
	cout << "Enter the value of obj_d->d " ;cin >> obj_c.c;

	// Print the value

	cout << "\n the value of obj_b->b " ;cout << obj_c.a;
	cout << "\n the value of obj_c->c " ;cout << obj_c.b;
	cout << "\n the value of obj_d->d " ;cout << obj_c.c<< " \n";



}


