/*
 * 9_Iterating_through_set.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */
#include <iostream>
#include <set>

using namespace std;
int main(){

	set<int> myset;
	myset.insert(7);
	myset.insert(1);
	myset.insert(4);
	myset.insert(0);
	myset.insert(-7);
	myset.insert(7);

	set<int>::const_iterator it;
	it=myset.begin();

	while(it!=myset.end()){
		cout << *it << " ";
		++it;
	}
	cout << "\n";
	return 0;
}



