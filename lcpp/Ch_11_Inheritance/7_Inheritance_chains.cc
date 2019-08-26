/*
 * 7_Inheritance_chains.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;


class A{
public:
	A(int a){
		cout << " A " << a << "\n";
	}
};

class B:public A{
public:
	B(int a, double b):A(a){
		cout << "B: " << b << '\n';
	}
};
class C:public B{
public:
	C(int a, double b, char c):B(a,b){
		cout << "C: " << c << '\n';
	}
};

int main()
{
    C c(5, 4.3, 'R');

    return 0;
}
