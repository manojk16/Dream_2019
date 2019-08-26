/*
 * 11_Uniary_ope_overloads_part_2.cc
 *
 *  Created on: Aug 13, 2019
 *      Author: user1
 */

// Because the increment and decrement operators are both unary operators and they modify their operands,
#include <iostream>

using namespace std;

class Points{
	double m_x,m_y,m_z;
public:
	Points(int x=0,int y=0,int z=0):m_x(x),m_y(y),m_z(z){}
	Points operator-()const;
	bool operator!() const;
	double getX(){ return m_x;}
	double getY(){ return m_y;}
	double getZ(){ return m_z;}

};
Points Points::operator -() const{
	return Points(-m_x,-m_y,-m_z);
}
// return true if the points set to the origin
bool Points::operator!() const{
	return (m_x==0.0 && m_y==0.0 && m_z==0.0);
}


int main(){
	Points p2(10.0,20.0,30.0);
	Points p1;
	if(!p1){
		std::cout << "Points are set to origin"<< "\n";
	}else{
		cout << "Points are not set to origin"<<endl;
	}
	return 0;
}
