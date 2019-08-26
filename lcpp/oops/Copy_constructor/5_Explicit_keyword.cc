/*
 * 5_Explicit_keyword.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

#include <string>
#include <iostream>

using namespace std;



class MyString{
	string m_string;
public:
	explicit MyString(int x){
		m_string.resize(x); // allocat String of Size x
	}
	MyString(const char *string){ // allocate string to hold the string value
		m_string=string;
	}

	friend ostream& operator<<(ostream &out, const MyString &str);
};

ostream& operator<<(ostream &out, const MyString &str){
	out << str.m_string <<endl;
	return out;
}
int main(){

		// MyString mine = 'x'; // use copy initialization for MyString after writing explicit keyword before the constructor this line will
	// create the error
	//   so wecan write as below
	MyString mine("Manoj");
		std::cout << mine;
		return 0;

	return 0;
}
