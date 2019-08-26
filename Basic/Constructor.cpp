/*
 * Constructor.cpp
 *
 *  Created on: Jul 22, 2019
 *      Author: user1
 */


#include <iostream>
using namespace std;

class sample{
	int a;
	int b;
	int c;
public:
	sample();
	sample(int x, int y, int z);
	sample(const sample &obj);
};
sample :: sample(const sample &obj){
	a=obj.a;
	b=obj.b;
	c=obj.c;
	cout << "Copy Constructor Gets Called"<<endl;
}
sample::sample(int x, int y, int z){
	a=x;
	b=y;
	c=z;
	cout<<"Parameterize constructor gets called"<<"\n";
}
sample::sample(){
	cout<<"default Constructor Called"<<"\n";
}

int main(){
	sample obj;
	sample obj1(10,20,30);
	sample obj2=obj1;
	sample obj3;
	obj3=obj2;

	return 0;
}
