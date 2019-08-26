/*
 * Friend_class.cpp
 *
 *  Created on: Jul 22, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;

class square;

class rectangle{
	int h;
	int w;
public:
	rectangle(int wid, int hieght){
		h=hieght;
		w=wid;
	}
	void display(){
		cout << "Area of the rectangle is " << w*h <<endl;
	}
	void morph(square &);

};
class square{
	int side;
public:
	square(int s=1){
		side=s;
	}
	void display(){
		cout<<"Area of the Square is :: " << side * side <<endl;
	}
	friend class rectangle;
};

void rectangle::morph(square &obj){
	w=obj.side;
	h=obj.side;
}

int main(){
	rectangle rec(5,10);
	square seq(20);
	cout << "Before Morph or Before friend class role" << "\n";
	rec.display();
	seq.display();

	rec.morph(seq);
	cout << "After Morph"<<"\n";
	rec.display();
	seq.display();


	return 0;
}
