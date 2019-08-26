/*
 * function_ptr.cc
 *
 *  Created on: Jul 30, 2019
 *      Author: user1
 */

#include <iostream>
using namespace std;





//int (*funcptr) ()  // funcptr is a pointer to a funciton which doens't have any parameter

// funcptr can point to any function whih match this type
// const function ptr

//int (*const funcptr)()

/*
int foo();
double goo();
int hoo(int x);
*/


// function pointer assignments
/*

int (*funcptr1)()=foo // ok
int (*funcptr2)()=goo; // wrong return type doen't match
double (*funcptr3)=goo;// ok
funcptr1=hoo; // funcptr1 doesn't have parameter but hoo has the parameter
int (*funcptr5)(int)=hoo;// ok
*/



// Example calling the function using explicit derefernce


int foo(int x){
	return x;

}

int main(){

	int (*funcptr)(int)=foo;
	(*funcptr)(5);// explicit dereference
	funcptr(5);// implicit declaration

}



// example call the function using implicit declaration







