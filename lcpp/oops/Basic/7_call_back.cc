/*
 * call_back.cc
 *
 *  Created on: Jul 30, 2019
 *      Author: user1
 *
 *
 *      call back function are passing a function as argument into the other funciton
 *
 *
 *      Passing functions as arguments to other functions : it is done with the help of function pointer
 *      function used as argument to another function is sometimes called call back funciton
 *
 */
// Write a sort function which can sort as in ascending, descending order as user input

#include <algorithm>
#include <iostream>
#include <utility>


using namespace std;
void selectionSort(int *array, int size, bool (*comparisionptr)(int, int)){

	for(int startIndex=0;startIndex<size;startIndex++){
		int bextIndex=startIndex;
		for(int currentIndex=startIndex+1;currentIndex<size;currentIndex++){

			if(comparisionptr(array[bextIndex], array[currentIndex])){
				bextIndex=currentIndex;
			}
		}
		swap(array[startIndex],array[bextIndex]);

	}
}


bool asending(int x, int y){
	return x>y;
}
bool descending(int x, int y){
	return x<y;
}
void printArray(int *array, int size){
	for(int index=0;index<size;++index){
		cout<< array[index];
	}
	cout<<"\n";
}

int main(){

	int array[9]={3, 7, 9, 5, 6, 1, 8, 2, 4};
	selectionSort(array,9,asending);
	printArray(array,9);
	selectionSort(array,9,descending);
	printArray(array,9);

}




