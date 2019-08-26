/*
 * 3_Order_of_construction_for_inheritance_chains.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */


#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        std::cout << "A\n";
    }
};

class B: public A
{
public:
    B()
    {
        std::cout << "B\n";
    }
};

class C: public B
{
public:
    C()
    {
        std::cout << "C\n";
    }
};

class D: public C
{
public:
    D()
    {
        std::cout << "D\n";
    }
};

int main()
{
    std::cout << "Constructing A: \n";
    A cA; // A

    std::cout << "Constructing B: \n";
    B cB; //  A
    	  // B

    std::cout << "Constructing C: \n";
    C cC; //  A
    	// B
    	// C

    std::cout << "Constructing D: \n";
    D cD;//  A
		// B
		// C
       // D
}
