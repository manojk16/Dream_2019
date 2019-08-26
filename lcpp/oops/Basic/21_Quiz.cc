/*
 * 21_Quiz.cc
 *
 *  Created on: Aug 4, 2019
 *      Author: user1
 */

// Write a distructor
#include <iostream>
#include <cmath>

using namespace std;
class HelloWorld
{
private:
	char *m_data;

public:
	HelloWorld()
	{
		m_data = new char[14];
		const char *init = "Hello, World!";
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}

	~HelloWorld()
	{
        delete [] m_data;
	}

	void print() const
	{
		std::cout << m_data<< "\n";
	}

};

int main()
{
	HelloWorld hello;
	hello.print();

    return 0;
}


