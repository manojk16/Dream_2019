/*
 * Recursion_Fibnaaci.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */
#include <iostream>


using namespace std;


int fibnaaci(int x){
	if(x==0){
		return 0;
	}
	if(x==1){
		return 1;
	}
	return fibnaaci(x-1)+fibnaaci(x-2);

}


int main(){
	for(int count=0;count<13;++count){
		cout<< fibnaaci(count) << " ";
	}
	cout<<"\n";
}
