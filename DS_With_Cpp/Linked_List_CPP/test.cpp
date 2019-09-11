
#include <iostream>


class A{
protected:
	int data;
	A *next;
};


class B{
public:
	A *fisrt;
	A *last;
	virtual void searhitem(int item)=0;
};

class C:public B{
public:
	void searhitem(int item){
		A *current;
		bool found=false;
		current=fisrt;
	}
};


int main(){

}