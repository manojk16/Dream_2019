/*
 * 13_Chains_call_this.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 */


#include <iostream>
using namespace std;


class Calc{
	int m_value;
public:
	Calc(){
		m_value=0;
	}
	Calc& add(int value){m_value+=value; return *this;}
	Calc& sub(int value){m_value-=value; return *this;}
	Calc& mul(int value){m_value*=value; return *this;}
	Calc& division(int value){m_value/=value; return *this;}
	int getvalue(){
		return m_value;
	}
};

int main(){
	Calc calc;
	calc.add(5).sub(3).mul(4);
	cout << "M_value is :: "  << calc.getvalue() <<endl;
}

