/*
 * 12_destructor_Basic.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 */
#include <cassert>
#include <iostream>
using namespace std;

class IntArray{
	int m_length;
	int *m_array;
public:
	IntArray(int length){
		assert(length>0);
		m_length=length;
		m_array=new int[length];

	}
 ~IntArray(){
		delete [] m_array;
	}
	void setvalues(int index, int values){
		m_array[index]=values;
	}
	int getvalues(int index){
		return m_array[index];
	}
	int getlength(){
		return m_length;
	}
};

int main(){
	IntArray arr(10);
	for(int count=0;count<arr.getlength();++count){
		arr.setvalues(count,count+1);
	}
	cout << "The Value of element 5 is " << arr.getvalues(5) << endl;
}
