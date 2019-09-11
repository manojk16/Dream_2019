//
// Created by redbend on 31/08/2019.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include  <cmath>
// In this pgm : Sometimes We want to have separate method for Object Creation But Sometimes we want sepearte Class for the object creation SO this Time I am going to make separate Class for the Object Creation
// And  This separate class is called Dedicated Factory

using namespace std;


class Point{
// private:

    // friend  class pointFactory;
public: // ##
    Point(float mX, float mY) : m_x(mX), m_y(mY) {}

public:


    float m_x;
    float m_y;

    friend ostream &operator<<(ostream &os, const Point &point) {
        os << "m_x: " << point.m_x << " m_y: " << point.m_y;
        return os;
    }
};
// So Lets make a Factory to construct the Object :
// 1. In that case newCartesian() and newpolar() will be the member of pointFactory
// 2. They may be static or Non Static Member function of PointFactory
// 3. As constructor is Private in to Point class problem will be in return {a,b} and so on
// 4. For this problem there are 2 solution
// (i) Make point factory class as a  friend of point class but in this case it breaking the OCP principle
// (ii) Make the constructor public##

class pointFactory{
public:
    static Point newCartesian(float a, float b){
        return {a,b};
    }
    static Point newPolar(float r, float theta){
        return {r*cos(theta), r*sin(theta)};
    }


};
/*

int main(){
    auto p=pointFactory::newPolar(5,M_PI_4);
    cout << p << endl;
    Point p2{3.0,5.0};
    cout << p2 << endl;
}*/
