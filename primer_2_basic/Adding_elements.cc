/*
 * Adding_elements.cc
 *
 *  Created on: Jul 26, 2019
 *      Author: user1
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main(){
	vector<int> v1;

	for(int i=0;i!=100;i++){
		v1.push_back(i);
	}
	// read words from the standard input and store them as elements in a vector
	string word;
	int num;
	vector<int> v2;
	vector<string> s1;


	/*while(cin >> word){
		s1.push_back(word);
	}*/
	while(cin >> num){
		v2.push_back(num);
	}
	cout << "now print the values"<<"\n";
	for(auto i:v2){
		cout<< i << " ";
	}
	cout<<endl;
// The subscript operator on vector (and string) fetches an existing element; it does not add an element.
// Caution: Subscript Only Elements that are Known to Exist! It is crucially important to understand that we may use the subscript operator
// 	(the [] operator) to fetch only elements that actually exist. For example,

}


