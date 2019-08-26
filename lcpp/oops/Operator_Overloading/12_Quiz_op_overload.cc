/*
 * 12_Quiz_op_overload.cc
 *
 *  Created on: Aug 14, 2019
 *      Author: user1
 */

// // Because the increment and decrement operators are both unary operators and they modify their operands,
// Implement the Uniary + for the Ponits Class

class Points{
	double m_x,m_y,m_z;
public:
	Points(int x=0,int y=0,int z=0):m_x(x),m_y(y),m_z(z){}
	Points operator+()const;
	double getX(){ return m_x;}
	double getY(){ return m_y;}
	double getZ(){ return m_z;}

};

Points Points::operator +()const{

	//return (m_x,m_y,m_z);
	return *this;
}
