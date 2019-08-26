/*
 * Reference.cc
 *
 *  Created on: Jul 24, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	string::size_type size;
	//while (cin >> word) // read until end-of-file
	//cout << word << endl; // write each word followed by a new line
	while(getline(cin, word)){
		cout << word;
	}
	return 0;

}


