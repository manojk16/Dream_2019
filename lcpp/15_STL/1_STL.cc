/*
 * 1_STL.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */
// The Standard library contains a collection of classes that provide templated containers, algorithms, and iterators.
// Container class falls into 3 different category
// 1. Sequence Container 2. Associative Container and 3. Container Adapter
// 1. Sequence Containers:  That maintaie the ordering of the element into container
// 1. vector 2. list 3. deque 4. forward_list 5 array 6. basic_string

// vector : dynamic array

#include <iostream>
#include <vector>

using namespace std;
int main(){

	vector<int> v;

	for(int index=0;index < 6;++index){
		v.push_back(10-index);
	}
	for(int i=0;i < v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
}


