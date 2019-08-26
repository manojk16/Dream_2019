/*
 * Heirarchical_Inheritance.cc
 *
 *  Created on: Jul 23, 2019
 *      Author: user1
 */

//* ======================================================= */
/* ===== Sample program for hierarchical inheritance ===== */
/* ======================================================= */
#include <iostream>
using namespace std;

class A{
public:
	int a;
protected:
	float y;

};
class B :  public A{
public:
	int b;
};
class C :  public A{
public:
	int c;
};
class D :  public A{
public:
	int d;
};

int main(){
	//A obj_a;
	B obj_b;
	C obj_c;
	D obj_d;
// In put the values of a, b,c & d
	cout << "Enter the value of obj_b->b " ; cin>> obj_b.b;
	cout << "Enter the value of obj_c->c " ;cin >> obj_c.c;
	cout << "Enter the value of obj_d->d " ;cin >> obj_d.d;
	cout << "Enter the value of obj_b->a " ;cin >> obj_b.a;
	cout << "Enter the value of obj_c->a " ;cin >> obj_c.a;
	cout << "Enter the value of obj_d->a " ;cin >> obj_d.a;
	// Print the values
	cout << "\n the value of obj_b->b " ;cout << obj_b.b;
	cout << "\n the value of obj_c->c " ;cout << obj_c.c;
	cout << "\n the value of obj_d->d " ;cout << obj_d.d;
	cout << "\n the value of obj_b->a " ;cout << obj_b.a;
	cout << "\n the value of obj_c->a " ;cout << obj_c.a;
	cout << "\n the value of obj_d->a " ;cout << obj_d.a << "\n";

	return 0;
}


