/*
 * 6_Op_overload_Min_Max_example.cc
 *
 *  Created on: Aug 7, 2019
 *      Author: user1
 */
#include <iostream>


class MinMax{
	int m_min;
	int m_max;

public:
	MinMax(int min, int max):m_min(min),m_max(max){}
	int getMin(){return m_min;}
	int getMax(){return m_max;}
	friend MinMax operator+(const MinMax& lhs, const MinMax& rhs);
	friend MinMax operator+(const MinMax& lhs, int value);
	friend MinMax operator+(int value, const MinMax& rhs);
};

MinMax operator+(const MinMax& lhs, const MinMax& rhs){
	std::cout << "lhs and rhs " << "\n";
	int min=lhs.m_min < rhs.m_min ? lhs.m_min : rhs.m_min;
	int max=lhs.m_max > rhs.m_max ? lhs.m_max : rhs.m_max;
	return MinMax(min,max);
}

MinMax operator+(const MinMax& lhs, int value){
	std::cout << "lhs and value " << "\n";
		int min=lhs.m_min < value ? lhs.m_min : value;
		int max=lhs.m_max > value ? lhs.m_max : value;
		return MinMax(min,max);
}
MinMax operator+(int value, const MinMax& rhs){
	std::cout << "value and rhs " << "\n";
		int min=value < rhs.m_min ? value : rhs.m_min;
		int max=value > rhs.m_max ? value: rhs.m_max;
		return MinMax(min,max);
	// Inshort
	// call operator(Minmax, int)
	//return rhs+value;
}



int main(){
	MinMax m1(10,15);
	MinMax m2(8,11);
	MinMax m3(3,15);
	MinMax M_Final=40+m1+m2+18+15+m3+25;
	std::cout << "Result: (" << M_Final.getMin() << ", " <<
		M_Final.getMax() << ")\n";
}

