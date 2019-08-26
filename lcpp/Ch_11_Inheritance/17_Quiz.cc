/*
 * 17_Quiz.cc
 *
 *  Created on: Aug 19, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>
using namespace std;
class Fruit{
	string m_name;
	string m_color;
public:
	Fruit(string color="",string name=""):m_color(color),m_name(name){}
	string getName() const{
		return m_name;
	}
	string getColor() const{
		return m_color;
	}

};


class Apple:public Fruit{
public:
	Apple(string color="",string name="apple"):Fruit(color, name){}
};
class Banana:public Fruit{
public:
	Banana(string color="Yellow",string name="banana"):Fruit(color,name){}
};

int main(){
	Apple a("red");
	Banana b;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";

	return 0;

}
