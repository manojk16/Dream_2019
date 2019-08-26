/*
 * 14_Quiz_Comprehensive_ch_9.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

class IntArray {
	int m_length;
	int *m_arr;
public:

	IntArray(int length = 0, int *arr = nullptr) :
		m_length(length)
	{
		cout << "default constructor called " <<endl;
		assert(length > 0 && "IntArray lenght should be positivie Interger");

		m_arr = new int[m_length] {0};
	}
// copy constructor using deep copy

	IntArray(const IntArray& copy) :m_length(copy.m_length)
	{
		cout << "copy constructor called " <<endl;
		// Allocates a new Memory
		m_arr = new int[m_length];

		//Copy elements from original array to new array
		for (int count = 0; count < copy.m_length; count++)
		{
			m_arr[count] = copy.m_arr[count];
		}

	}

	// destrcutor
	~IntArray()
	{
		cout << "Destructor called " <<endl;
		delete[] m_arr;
	}

	friend ostream& operator<<(ostream& out, const IntArray& arr)
	{

		for (int count = 0; count < arr.m_length; ++count)
		{
			out << arr.m_arr[count] << " ";
		}
		return out;
	}

	// overload of [] operator

	int& operator[](const int index)
	{
		cout << "[] Overloading called " <<endl;
		assert(index >= 0);
		assert(index < m_length);
		return m_arr[index];
	}

	// Assignment Operator that des a deep copy

	IntArray& operator=(const IntArray& array)
	{
		cout << "Assignment Operator Overloading called " <<endl;
		if (this == &array)
		{
			return *this;
		}
		// If array exist delete it to avoid memory leak
		delete[] m_arr;
		m_length = array.m_length;
		// allocates a new memory
		m_arr = new int[m_length];

		// copy the values from old one to new address
		for (int count = 0; count < array.m_length; ++count)
		{
			m_arr[count] = array.m_arr[count];
		}
		return *this;
	}

};
IntArray fillArray()
{
	IntArray a(5); // default constructor
	a[0] = 5; // []
	a[1] = 8; // []
	a[2] = 2; // []
	a[3] = 3; // []
	a[4] = 6; // []

	return a;
}

int main()
{
	IntArray a = fillArray();

	// If you're getting crazy values here you probably forgot to do a deep copy in your copy constructor
	std::cout << a << '\n';

	//auto &ref = a; // we're using this reference to avoid compiler self-assignment errors
	//a = ref;

	IntArray b(1);
	b = a; // asssignment

	// If you're getting crazy values here you probably forgot to do a deep copy in your assignment operator
	// or you forgot your self-assignment check
	std::cout << b << '\n';

	return 0;
}
