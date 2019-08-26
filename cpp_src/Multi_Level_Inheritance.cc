/*
 * Multi_Level_Inheritance.cc
 *
 *  Created on: Jul 23, 2019
 *      Author: user1
 */

/* ====================================================== */
/* ===== Sample program for multi-level inheritance ===== */
/* ====================================================== */

#include <iostream>
using namespace std;


class A{
public:
	int a;
protected:
	float x;
};
class B:public A{
public:
	int b;
};

class c:public B{
public:
	int c;
};

int main(){
	A obj_a;
	B obj_b;
	c obj_c;
	// Input the value of variable:
		cout << "Enter the value of obj_b->b " ; cin>> obj_c.c;
		cout << "Enter the value of obj_c->c " ;cin >> obj_c.b;
		cout << "Enter the value of obj_d->d " ;cin >> obj_c.a;
		cout << "Enter the value of obj_b->a " ;cin >> obj_b.a;
		cout << "Enter the value of obj_c->a " ;cin >> obj_b.b;
		cout << "Enter the value of obj_d->a " ;cin >> obj_a.a;
	// print the values
		cout << "\n the value of obj_b->b " ;cout << obj_c.c;
		cout << "\n the value of obj_c->c " ;cout << obj_c.b;
		cout << "\n the value of obj_d->d " ;cout << obj_c.a;
		cout << "\n the value of obj_b->a " ;cout << obj_b.a;
		cout << "\n the value of obj_c->a " ;cout << obj_b.b;
		cout << "\n the value of obj_d->a " ;cout << obj_a.a << "\n";


}

