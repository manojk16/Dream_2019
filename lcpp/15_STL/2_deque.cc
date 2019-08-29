/*
 * 2_deque.cc
 *
 *  Created on: Aug 27, 2019
 *      Author: user1
 */


// deque is pronounced as deck double neded queue: implemented as dynamic array grows from both end


#include <iostream>
#include <deque>

using namespace std;


int main(){
	deque<int> d;

	for(int count =0;count < 3;++ count){
		d.push_back(count);
		d.push_front(10-count);
	}
	for(int index =0;index < d.size();++index)
	{
		cout << d[index] << " ";
	}
	cout << endl;

}




