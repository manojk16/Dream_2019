/*
 * 14_Multiple_inheritance.cc
 *
 *  Created on: Aug 19, 2019
 *      Author: user1
 */


// Multiple Inheritance
#include <iostream>
#include <string>

using namespace std;



class Person{
	int m_age;
	string m_name;

	public:
	Person(int age, string name):m_age(age),m_name(name){}

	int getAge() const{
		return m_age;
	}
	string getName() const{
		return m_name;
	}

};
class Employee{
	string m_employer;
	double m_wage;
public:
	Employee(string employer, double wage):m_employer(employer), m_wage(wage){}


	string getEmployer() const{
		return m_employer;
	}
	double getWage() const{
		return m_wage;
	}
};


class Teacher:public Person, public Employee{
	int m_teachesGrade;
public:
	Teacher(string name, int age, string employer, double wage, int teachesGrade):Person(name, age),Employee(employer,wage),
	m_teachesGrade(teachesGrade){}

};
