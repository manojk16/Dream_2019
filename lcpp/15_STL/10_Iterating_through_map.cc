/*
 * 10_Iterating_through_map.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){

	map<int, string> mymap;
	mymap.insert(make_pair(4,"apple"));
	mymap.insert(make_pair(1,"MuskMelon"));
	mymap.insert(make_pair(2,"Apapya"));
	mymap.insert(make_pair(6,"WaterMelon"));
	mymap.insert(make_pair(3,"Cucumber"));
	mymap.insert(make_pair(5,"Banana"));
	mymap.insert(make_pair(6,"apple"));


	map<int, string>::const_iterator it;
	it=mymap.begin();
	while(it!=mymap.end()){
		cout << it->first << " " <<it->second << endl;
		++it;
	}

	return 0;
}


