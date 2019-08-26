/*
 * 13_Overloading_comparison_operators.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

//// Because the increment and decrement operators are both unary operators and they modify their operands,

#include <iostream>
#include <string>
using namespace std;



class Car{
	string m_maker;
	string m_model;
public:
	Car(string maker, string model):m_maker(maker),m_model(model){}
	friend bool operator==(const Car &c1, const Car &c2);
	friend bool operator!=(const Car &c1, const Car &c2);

};

bool operator==(const Car &c1, const Car &c2){
	return(c1.m_maker == c2.m_maker && c1.m_model == c2.m_model);
}
bool operator!=(const Car &c1, const Car &c2){
	return!(c1==c2);
}


int main(){
	Car Amaze("Honda","Amaze");
	Car City("Honda","Amaze");

	if(Amaze==City){
		cout << "Both car are same" << endl;
	}
	if(Amaze!=City){
		cout << "Both car are not same"<<endl;
	}
	return 0;
}
