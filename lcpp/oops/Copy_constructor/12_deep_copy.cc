/*
 * 12_deep_copy.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */

#include <iostream>
#include <cassert>
#include <cstring>
#include <string>

using namespace std;

class Mystring {
	int m_length;
	char *m_data;
public:
	Mystring(const char *source = "")
	{
		assert(source);
		m_length = strlen(source) + 1;

		// Allocate a buffer equal to this length
		m_data = new char[m_length];
		//Copy the parameter string into our internal buffer
		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];
		}
		// Make sure the string is terminated
		m_data[m_length - 1] = '\0';
	}

	~Mystring()
	{
		// we need to deallocate string
		delete[] m_data;
	}

	char *getString()
	{
		return m_data;
	}
	int getlength()
	{
		return m_length;
	}
	Mystring(const Mystring &str);
	Mystring& operator=(const Mystring & source); // assignment operator

	void deepCopy(const Mystring& source); // A deep copy allocates memory for the copy and then copies the actual value, so that the copy lives in distinct memory from the source.
//This way, the copy and source are distinct and will not affect each other in any way
};
/*The above is a simple string class that allocates memory to hold a string that we pass in. Note that we have not defined a copy constructor or overloaded assignment operator.
 *  Consequently, C++ will provide a default copy constructor and default assignment operator that do a shallow copy. The copy constructor will look something like this:
 *
 */

// deep copy implementation
void Mystring::deepCopy(const Mystring &source)
{
	// first we need to deallocate any value that this string is holding!
	delete[] m_data;

	// because m_length is not a pointer, we can shallow copy it
	m_length = source.m_length;

	// m_data is a pointer, so we need to deep copy it if it is non-null
	if (source.m_data)
	{
		// allocate memory for our copy
		m_data = new char[m_length];

		// do the copy
		for (int i = 0; i < m_length; ++i)
			m_data[i] = source.m_data[i];
	}
	else
		m_data = nullptr;
}

// Own copy constructor
Mystring::Mystring(const Mystring &str) :m_data(nullptr)
{
	deepCopy(str);
}


// Assignment operator
Mystring& Mystring::operator=(const Mystring &source)
{
    // check for self-assignment
    if (this == &source)
        return *this;

    // now do the deep copy
    deepCopy(source);

    return *this;
}
// Note that m_data is just a shallow pointer copy of str.m_data, meaning they now both point to the same thing.



int main()
{
	Mystring hello("Hello, world!");
	{
		Mystring copy = hello; // use default copy constructor
	} // copy is a local variable, so it gets destroyed here.  The destructor deletes copy's string, which leaves hello with a dangling pointer

	cout << hello.getString() << '\n'; // this will have undefined behavior

	return 0;
}

