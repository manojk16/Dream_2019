/*
 * 20_Quiz.cc
 *
 *  Created on: Aug 3, 2019
 *      Author: user1
 */


#include <iostream>
#include <cmath>

using namespace std;


class Point2d{
	double m_x;
	double m_y;
public:
	Point2d(int x=0, int y=0):m_x(x),m_y(y){}
	void print() const{
		cout << "Point2d(" << m_x << ","<< m_y << ")" <<endl;

	}
	friend int distanceFrom(const Point2d& lhs, const Point2d& rhs);
	int distanceTo(const Point2d& other)const {
		//return ((m_x-obj.m_x)*(m_x-obj.m_x)-(m_y-obj.m_y)*(m_y-obj.m_y));
		return sqrt((m_x - other.m_x)*(m_x - other.m_x) + (m_y - other.m_y)*(m_y - other.m_y));
	}
};
int distanceFrom(const Point2d& first, const Point2d& other){

	 return sqrt((first.m_x - other.m_x)*(first.m_x - other.m_x) + (first.m_y - other.m_y)*(first.m_y - other.m_y));
}
int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}
