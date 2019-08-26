/*
 * Dynamic_Allocation.cpp
 *
 *  Created on: Jul 22, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;

class Dynamic_Allocation{
int a;
int b;

public:

	Dynamic_Allocation(){
		cout<<"Default Constructor"<<"\n";
	}
	Dynamic_Allocation(int x, int y){
		a=x;
		b=y;
	}
	~Dynamic_Allocation(){
		cout<<"Default Destructor"<<"\n";
	}

};


int main(){
	Dynamic_Allocation *test_obj=new Dynamic_Allocation(10,20);
	delete test_obj;
	Dynamic_Allocation *test_obj_2=new Dynamic_Allocation[4];

	delete [] test_obj_2;
	return 0;
}


