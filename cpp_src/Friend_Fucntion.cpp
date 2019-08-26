/*
 * Friend_Fucntion.cpp
 *
 *  Created on: Jul 22, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;


class student{
	int rollNum;
	friend void getstud(student &);
};


void getstud(student &obj_s){
	cout<<"Enter The Roll Number"<<"\n";
	cin >> obj_s.rollNum;
	cout<<"The roll Number is "<< obj_s.rollNum << endl;
}


int main(){
	cout << "Calling the friend fucntino which accessed the private member of the class " << "\n";
	student obj_s;
	getstud(obj_s);
	return 0;
}


