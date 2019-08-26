/*
 * 3_Composition_Example.h
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */



#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
class Point2D{
	int m_x;
	int m_y;
public:
	Point2D(){
		m_x=0;
		m_y=0;
	}
	Point2D(int x, int y):m_x(x),m_y(y){}


	friend std::ostream& operator<<(std::ostream& out,const Point2D& point){
		out << "(" << point.m_x << ", " << point.m_y <<")";
		return out;
	}
	// access function
	void setPoint(int x, int y){
		m_x=x;
		m_y=y;
	}
};


#endif
