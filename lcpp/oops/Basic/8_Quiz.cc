/*
 * 8_Quiz.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 *
 *      Reference without const doesn't work because "black" is an l-value and non-const
 *      references can't bind to l-values (only r-values).
 */
#include <iostream>
using namespace std;

class Ball{
	string m_color;
	double m_radius;
public:
	Ball(double radius){
		m_color="Black";
		m_radius=radius;
	}

	Ball(const string color="black", double radius=10.0){
		m_color=color;
		m_radius=radius;
	}
	void print(){
		cout << "color :: " << m_color << " :: "<< " Radius  ::" << m_radius <<endl;
	}
};

int main()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	return 0;
}
