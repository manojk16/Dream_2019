/*
 * vector_sum_of_pairs.cc
 *
 *  Created on: Jul 26, 2019
 *      Author: user1
 *
 *
 */
/* Read a set of integers into a vector. Print the sum of each
 * pair of adjacent elements. Change your program so that it prints the sum of
 * the first and last elements, followed by the sum of the second and second-tolast,
 * and so on.
 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v1;
	int num;
	for(int i=0;i!=10;i++){
		cin>>num;
		v1.push_back(num);
	}
	cout<< "entered number in to Vector" <<endl;
	for(auto i:v1){
		cout << i << " ";
	}
	cout<<endl;
	cout << "vector size is " << v1.size() <<endl;
	cout<< "Sum of each adjacent pair" <<endl;
	int sum=0;
	for(int i=0;i<10;i++){
			if(i+1<10){
			sum=v1[i]+v1[i+1];
			cout << "Sum of elements " <<  i << " and " << i+1 << " is " << sum <<endl;
			}

	}
	int j=v1.size()-1;
	int sum_1=0;
	cout << "Sum of first and last , second and seconf last and so on .."<<endl;
	for(int i=0;i!=10;i++){
		sum_1=v1[i]+v1[j];
		j--;
		cout<<"Sum of "<< i <<"th" << " and " << j << " th element is ::"  << sum_1 <<endl;
	}
	cout<<endl;
	return 0;
	}



