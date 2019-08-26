/*
 * 9_ops<<_overload.cc
 *
 *  Created on: Aug 7, 2019
 *      Author: user1
 */


//

// //Overloading operator>>  and <<   std::cin is an object of type std::istream.while cout is an object of std::ostream
#include <iostream>
using namespace std;

class Point{
	double m_x,m_y,m_z;
public:

	Point(double x=0.0, double y=0.0, double z=0.0):m_x(x),m_y(y),m_z(z){}

	/*ostream& operator <<(ostream& out){

		out << m_x << m_y << m_z << endl;
		return out;
	}
	istream& operator>>(istream& in){
		in >> m_x;
		in >> m_y;
		in >> m_z;
		return in;
	}*/
	friend std::ostream& operator<<(std::ostream& out, const Point& point);
	friend std::istream& operator>>(std::istream &in, Point &point);

};
std::ostream& operator <<(std::ostream& out, const Point &point){
	out << "Points( " << point.m_x << ", " << point.m_y << " , " << point.m_z << ")"<< std::endl;
	return out;// return std::ostream so we can chain calls to operator<<
}
// note that parameter point must be non-const so we can modify the class members with the input values

std::istream& operator>>(std::istream &in, Point &point){
	  // Since operator>> is a friend of the Point class, we can access Point's members directly.
	    // note that parameter point must be non-const so we can modify the class members with the input values
	in >> point.m_x;
	in >> point.m_y;
	in >> point.m_z;
	return in;
}

int main()
{
	Point point1(2.0, 3.0, 4.0);

	std::cout << point1;

	std::cout << "Enter a point: \n";

	Point point;

	std::cin >> point;

	std::cout << "You entered: " << point << '\n';

    return 0;
}
