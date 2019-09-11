/*
 * 1_Program to find sum of elements in a given array.cc
 *
 *  Created on: Aug 30, 2019
 *      Author: user1
 */


#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vect{};
	int n;
	int num;
	cout << "How Many number do you want to Enter \n";
	cin >> n;

	cout<<"enter the number in to array \n";
	for(int i=0;i<n;i++){
		cin >> num;
		vect.push_back(num);
	}
	int sum=0;
	for(auto i:vect){
		sum =sum+i;
	}

	cout << "Sum of total Element is::" << sum << endl;




	return 0;
}



