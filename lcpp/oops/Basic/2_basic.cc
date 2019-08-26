/*
 * 2_basic.cc
 *
 *  Created on: Aug 1, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>

using namespace std;



class Employee{

	string m_name;
	int m_id;
	double m_wage;
public:
	void print();
	Employee(string name, int id, double wage){
		m_name=name;
		m_id=id;
		m_wage=wage;
	}

};

void Employee::print(){
	cout << "Employee Name is  " << m_name <<
			" ID " << m_id <<
			" Wage " << m_wage << endl;
}


int main(){
	//Employee e1{"Manoj",2207,15};
	 Employee alex { "Alex", 1, 25.00 };
	 alex.print();
	return 0;
}

