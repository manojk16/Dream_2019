/*
 * 10_initializer_list_part3.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 *       There are a few things to know about std::initializer_list. Much like std::array or std::vector, you have to tell std::initializer_list
 *       what type of data the list holds using angled brackets. Therefore, you’ll never see a plain std::initializer_list.
 *       Instead, you’ll see something like std::initializer_list<int> or std::initializer_list<std::string>.

*/

#include <cassert>
#include <initializer_list>
#include <iostream>

using namespace std;

class IntArray {
	int m_length {};
	int *m_data {};
public:
	IntArray() :
		m_length(0), m_data(nullptr)
	{
	}
	IntArray(int length) :
		m_length(length)
	{
		m_data = new int[length];
	}
	IntArray(const initializer_list<int> &list) : // // allow IntArray to be initialized via list initialization
		IntArray(static_cast<int>(list.size()))
	{
		// Now initialize our array from the list
		int count = 0;
		for (auto &element : list)
		{
			m_data[count] = element;
			count++;
		}
	}
	~IntArray()
	{
		delete[] m_data;
	}
	int getLength()
	{
		return m_length;
	}
	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

};

int main()
{
	IntArray array {5, 4, 3, 2, 1}; // initializer list
	for (int count = 0; count < array.getLength(); ++count)
		cout << array[count] << ' ';

	return 0;
}
