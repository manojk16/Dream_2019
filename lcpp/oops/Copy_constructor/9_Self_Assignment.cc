/*
 * 9_Self_Assignment.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */


#include <iostream>
#include <string>
using namespace std;

class MyString{
	char *m_data;
	int m_length;

public:
	// defualt constructor
	MyString( const char *data="", int length=0):m_length(length){
		if(!length){
			m_data=nullptr;
		}else{
		m_data=new char[length];
		}
		for(int i=0;i<length;i++){
			m_data[i]=data[i];
		}
	}

	// Assignment Operator Overloads
	MyString& operator=(const MyString &str);

	// out put operator overloads
	 friend ostream& operator<<(ostream &out, const MyString &str);
};


MyString& MyString::operator=(const MyString &str){

	// self assignment
	if(this==&str){
		return *this;
	}
	// If data exist in the current string delete it
	if(m_data){
			delete [] m_data;
		}
		m_length=str.m_length;


	// copy the data from str to implicit object

	m_data= new char[str.m_length];

	for(int i=0;i<str.m_length;i++){
		m_data[i]=str.m_data[i];
	}
	return *this;
}

ostream& operator<<(ostream &out, const MyString &str){
	out << str.m_data<<endl;
	return out;
}


int main(){

	 MyString alex("Alex", 5); // Meet Alex
	 alex = alex; // Alex is himself
	 std::cout << alex; // Say your name, Alex

	  return 0;

}
