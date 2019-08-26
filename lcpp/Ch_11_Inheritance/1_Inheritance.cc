/*
 * 1_Inheritance.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 *
 *   Object composition is perfect for building new objects that have a “has-a”
 *   relationship with their parts. However, object composition is just one of
 *   the two major ways that C++ lets you construct complex classes.The second way is through inheritance,
 *   which models an “is-a” relationship between two objects.
 *      Inheritance is based on "is-a" relationship
 */

#include <iostream>
#include <string>
using namespace std;


class Person{
public:
	string m_name;
	int m_age;
public:
	Person(string name="", int age=0):m_name(name),m_age(age){}
	string getName(){
		return m_name;
	}
	int getAge(){
		return m_age;
	}
};
class BaseballPlayer:public Person
{
// In this example, we're making our members public for simplicity
public:
    double m_battingAverage;
    int m_homeRuns;

    BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
       : m_battingAverage(battingAverage), m_homeRuns(homeRuns)
    {
    }
};

// // Employee publicly inherits from Person
class Employee : public Person{
public:
	double m_hourle_salary;
	long m_employee_id;
	Employee(double salary=0.0, long id=0):m_hourle_salary(salary),m_employee_id(id){}
	void printNameAndSalary(){
		cout << m_name << " : " << m_hourle_salary <<endl;
	}
};
// BaseballPlayer now having 4 members variables

int main(){
	BaseballPlayer Joe;
	  // Assign it a name (we can do this directly because m_name is public)
	Joe.m_name="Joe";
	 // Print out the name
	cout << Joe.getName() << '\n';

	Employee Frank(20.25,12345);
	Frank.m_name="Frank";
	Frank.printNameAndSalary();

}

