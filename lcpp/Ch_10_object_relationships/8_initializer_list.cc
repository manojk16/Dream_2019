/*
 * 8_nitializer_list.cc
 *
 *  Created on: Aug 17, 2019
 *      Author: user1
 */

// initialze an array with Initializer list syntax
#include <iostream>
using namespace std;
/*

int main(){
	int array[5]{2,4,5,8,1};
	for(int count =0; count <5;++count){
		cout << array[count]<< " " ;
	}
}
*/
// This also works for dynamically allocated array


int main(){
	int *array= new int[5]{2,4,5,8,1};
	for(int count =0; count <5;++count){
			cout << array[count]<< " " ;
		}


}

