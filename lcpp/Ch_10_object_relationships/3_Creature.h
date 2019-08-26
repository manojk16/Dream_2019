/*
 * 3_Creature.h
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 *
 *
 *      This Point2d class is a composition of its parts: location values x and y are part-of Point2D,
 *      and their lifespan is tied to that of a given Point2D instance. Now let’s design our Creature. Our Creature is going to have a few properties:
 *      a name, which will be a string, and a location, which will be our Point2D class.
 */

#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <string>
#include "3_Point2d.h"


class Creature{
	std::string m_name;
	Point2D m_location;
public:
	Creature(const std::string& name, const Point2D& location):m_name(name),m_location(location){}

	friend std::ostream& operator<<(std::ostream& out, const Creature& cr){
		out << cr.m_name << " is at " << cr.m_location <<" location ";
		return out;
	}

	void moveTo(int x, int y){
		m_location.setPoint(x,y);
	}

};
#endif
