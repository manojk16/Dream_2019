/*
 * 8_Self_Assignment_Special_case.cc
 *
 *  Created on: Aug 15, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>

using namespace std;



class Mystring{
private:
	char *m_data;
	int m_length;
public:
	Mystring(const char *data=" ", int length=0):m_length(length){
		if(!length)
			m_data=nullptr;
		else
			m_data=new char[length];
		for(int i=0;i<length;i++){
			m_data[i]=data[i];
		}
	}
	// Overloads Assignment Operator

Mystring& operator=(const Mystring &str);

friend ostream& operator<<(ostream &out, const Mystring &s);


};


Mystring& Mystring::operator=(const Mystring &str){

	// case 2
	if(this==&str){
		return *this; // self assignment check
	}
	// if data exist in the current string delete it
	if(m_data){
		delete [] m_data;
	}
	m_length=str.m_length;

	// copy the data from str to implicit object
	m_data=new char[str.m_length];
	for(int i=0;i<str.m_length;i++){
		m_data[i]=str.m_data[i];
	}
	// return the current object so that we can chain the operator

	return *this;
}

ostream& operator<<(ostream& out, const Mystring &s){
	out << s.m_data<<endl;;
	return out;
}
int main(){
	// case 1:
	/*Mystring alex("Alex", 5); // Meet Alex
	Mystring employee;
	employee = alex; // Alex is our newest employee
	cout << employee; // Say your name, employee*/
// case 2:
	Mystring alex("Alex", 5); // Meet Alex
	alex = alex; // Alex is himself
	cout << alex; // Say your name, Alex
	 return 0;
}
