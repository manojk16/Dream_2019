/*
 * 8_Quiz_Inheritance.cc
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
	Fruit(string name, string color):m_name(name),m_color(color){}
	const string& getName() const { return m_name; }
	const string& getColor() const { return m_color; }
	
};

class Apple:public Fruit{
	double m_fiber;
public:
	Apple(string name, string color, double fiber):Fruit(name, color), m_fiber(fiber){}
	double getFiber() const { return m_fiber; }
	friend ostream& operator<<(std::ostream& out, const Apple& a);
};
ostream& operator<<(std::ostream& out, const Apple& a)
{
	out << "Apple(" << a.getName() << ", " << a.getColor() << ", " << a.getFiber() << ")\n";
	return out;
}

class Banana : public Fruit{
public:
	Banana(string name="", string color=""):Fruit(name, color){}
	friend ostream& operator<<(std::ostream& out, const Banana& b);

};

ostream& operator<<(std::ostream& out, const Banana& b)
{
	out << "Banana(" << b.getName() << ", " << b.getColor() << ")\n";
	return out;
}

int main()
{
	const Apple a("Red delicious", "red", 4.2);
	cout << a;
 
	const Banana b("Cavendish", "yellow");
	cout << b;
 
	return 0;
}