/*
 * Template_class.cc
 *
 *  Created on: Jul 22, 2019
 *      Author: user1
 */

#include <iostream>
using namespace std;

// To DO : Need to be revise template Function with all scenarios
template<class T>

class Base{
	T a;
	T b;
public:
	Base(int x, int y){
		a=x;
		b=y;
	}
	void sum(){
		cout << "sum is " << a+b << "\n";
	}
};


int main()
{
	Base<int> *obj=new Base<int>(10,20);
	obj->sum();
	return 0;

}

