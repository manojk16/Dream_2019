/*
 * function_ptr_3.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 *
 *      Type inference for function pointers

Much like the auto keyword can be used to infer the type of normal variables,
 the auto keyword can also infer the type of a function pointer.
 */
#include <iostream>
#include <functional>



using namespace std;



int foo(int x){
	return x;
}
int goo(int y){
	return y;
}


int main(){
	//int (*funcptr)()=foo;
	//function<int(int)> funcptr=foo
	auto funcptr=foo;
	cout << funcptr(5);
}



