/*
 * 7_Iterating_through_vector.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */


#include <iostream>
#include <vector>

using namespace std;



int main(){

	vector<int> vec;
	for(int i=0;i<6;i++){
		vec.push_back(i);
	}

	vector<int>::const_iterator it;

	it=vec.begin();

	while(it!=vec.end()){
		cout << *it <<" ";
		++it;
	}
	cout << endl;
	return 0;
}
