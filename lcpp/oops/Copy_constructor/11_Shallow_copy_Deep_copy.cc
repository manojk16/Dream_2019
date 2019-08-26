/*
 * 11_Shallow_copy_Deep_copy.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 *      However, when designing classes that handle dynamically allocated memory, memberwise (shallow) copying can get
 *      us in a lot of trouble! This is because shallow copies of a pointer just copy the address of the pointer --
 *      it does not allocate any memory or copy the contents being pointed to!
 *
 *
 *
 */
#include <iostream>
#include <cassert>
#include <cstring>
#include <string>


using namespace std;


class Mystring{
	int m_length;
	char *m_data;
public:
	Mystring(const char *source=""){
		assert(source);
		m_length=strlen(source)+1;

		// Allocate a buffer equal to this length
		m_data=new char[m_length];
		//Copy the parameter string into our internal buffer
		for(int i=0;i<m_length;i++){
			m_data[i]=source[i];
		}
		// Make sure the string is terminated
		m_data[m_length-1]='\0';
	}

	~Mystring(){
		// we need to deallocate string
		delete [] m_data;
	}

	char *getString(){
		return m_data;
	}
	int getlength(){
		return m_length;
	}
Mystring(const Mystring &str);
};
/*The above is a simple string class that allocates memory to hold a string that we pass in. Note that we have not defined a copy constructor or overloaded assignment operator.
 *  Consequently, C++ will provide a default copy constructor and default assignment operator that do a shallow copy. The copy constructor will look something like this:
 *
*/

// Default copy constructor
Mystring::Mystring(const Mystring &str):m_length(str.m_length),m_data(str.m_data){}
// Note that m_data is just a shallow pointer copy of str.m_data, meaning they now both point to the same thing.


int main(){
	Mystring hello("Hello, world!");
	    {
	        Mystring copy = hello; // use default copy constructor
	    } // copy is a local variable, so it gets destroyed here.  The destructor deletes copy's string, which leaves hello with a dangling pointer

	    cout << hello.getString() << '\n'; // this will have undefined behavior

	    return 0;
}

// This program leaves a undefined behaviour due to shallow copy so lets solve it by deep copy

