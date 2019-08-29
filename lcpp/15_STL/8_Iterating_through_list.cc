/*
 * 8_Iterating_through_list.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */

#include <iostream>
#include <list>
using namespace std;

int main(){

	list<int> lst;

	for(int count =0; count < 6 ; ++ count){
		lst.push_back(count);
	}
	list<int>::const_iterator it;
	it=lst.begin();

	while(it!=lst.end()){
		cout << *it << " ";
		++it;
	}
	cout << endl;

	return 0;
}


