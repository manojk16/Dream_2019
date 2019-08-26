/*
 * 9_initialize_list_part2.c
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */


#include <iostream>
#include <cassert>
using namespace std;


class IntArray{
	int m_length;
	int *m_data;
public:
	IntArray(){
		m_length=0;
		m_data=nullptr;
	}
	IntArray(int length):m_length(length){
		m_data=new int[length];
	}
	~IntArray(){
		delete [] m_data;
	}
	int& operator[](int index){
		assert(index >=0 && index < m_length);
		return m_data[index];

	}
	int getlength()const{
		return m_length;
	}
};


// What happens if we try to use an initializer list with this container class?

int main()
{
	// IntArray array { 5, 4, 3, 2, 1 }; // this line doesn't compile
	// This code won’t compile, because the IntArray class doesn’t have a constructor that knows what to do with an initializer list
// 	so we have to use object as below

	IntArray array(5);
	array[0] = 5;
	array[1] = 4;
	array[2] = 3;
	array[3] = 2;
	array[4] = 1;
	for (int count=0; count < 5; ++count)
		std::cout << array[count] << ' ';

	return 0;
}
