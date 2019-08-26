/*
 * vector_initialization.cc
 *
 *  Created on: Jul 26, 2019
 *      Author: user1
 */

#include <iostream>
#include <vector>

using namespace std;
int main(){
	int n=5;
	int val=0;
	vector<int> v1; // vector v1 having object of type int
	cout << "Size of the Vector " << v1.size() << endl;
	vector<int>v2;
	vector<int> v3(v2); // v1 having copy of each element of v2
	vector<int>v4=v2;
	vector<int>v5(n,val);// 5 element of v1 are initialize by val
	cout << "Size of the Vector v5 " << v5.size() << endl;
	cout << "elements in v5"<<endl;
	for(auto i:v5){
		cout<< i << " ";
	}
	cout << endl;
	vector<int>v6={1,2,2,3,3};// elements of v1 are initialize by initilizer
	cout << "Size of the Vector v6 " << v6.size() << endl;
		cout << "elements in v6"<<endl;
		for(auto i:v6){
			cout<< i << " ";
		}
		cout << endl;
	vector<int>v7(10); // v1 has 10 element each one initialize by 0
	cout << "Size of the Vector v7 " << v6.size() << endl;
			cout << "elements in v7"<<endl;
			for(auto i:v7){
				cout<< i << " ";
			}
			cout << endl;
	vector<int>v8{10}; // v2 has only one element with value 10
	cout << "Size of the Vector v8 " << v8.size() << endl;
			cout << "elements in v8"<<endl;
			for(auto i:v8){
				cout<< i << " ";
			}
			cout << endl;
	vector<int>v9(10,1);//10 elements with value 1
	cout << "Size of the Vector v9 " << v9.size() << endl;
			cout << "elements in v9"<<endl;
			for(auto i:v9){
				cout<< i << " ";
			}
			cout << endl;
	vector<int>v10{10,1};// two elements with value 10 and 1
	cout << "Size of the Vector v10 " << v10.size() << endl;
			cout << "elements in v10"<<endl;
			for(auto i:v10){
				cout<< i << " ";
			}
			cout << endl;
	vector<string> v11{"hi"}; // list initialization: v6 has one element
	//vector<string> v12("hi"); // error: can't construct a vector from a string literal
	vector<string> v13{10}; // v7 has ten default-initialized elements
	vector<vector<int>> ivec;
	//vector<string> svec = ivec; //error
	vector<string> svec(10, "null");



}





