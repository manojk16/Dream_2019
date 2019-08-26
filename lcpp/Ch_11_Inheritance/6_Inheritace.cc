/*
 * 6_Inheritace.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */

#include <iostream>
using namespace std;


class Base{
	int m_id;
public:
	Base(int id=0):m_id(id){
		cout << "Base\n";
	}
	int getId() const{
		return m_id;
	}
};

class Derived:public Base{
	double m_cost;
public:
	Derived(double cost=0.0, int id=0):Base(id),m_cost(cost){
		cout << "Derived \n";
	}
	double getCost() const {
		return m_cost;
	}
};

int main(){
	Derived derived(1.3,5);
	cout << " id is " << derived.getId()<<endl;
	cout << " cost is " << derived.getCost()<<endl;
	return 0;
}
