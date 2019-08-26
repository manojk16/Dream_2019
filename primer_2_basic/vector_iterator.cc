/*
 * vector_iterator.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 *Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
 */
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


int main(){
	vector<int> vec(10);
	int val=5;
	for(auto it=vec.begin();it!=vec.end();it++){
		cin >> *it;
	}
	for(auto it=vec.begin();it!=vec.end();it++){
			cout<< 2*(*it) <<" ";
		}
	cout<<endl;
	return 0;
}


