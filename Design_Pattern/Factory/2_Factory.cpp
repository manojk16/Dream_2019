//
// Created by redbend on 31/08/2019.
// This is 2nd Factory Method of point class means how we can make the constructor
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;


class Point{
private:
    Point(float mX, float mY) : m_x(mX), m_y(mY) {}

public:
    // we can add static method here which will return the Point object as below
    static Point newCartesian(float a, float b){
        return {a,b};
    }
    static Point newPolar(float r, float theta){
        return {r*cos(theta), r*sin(theta)};
    }
    float m_x;
    float m_y;

    friend ostream &operator<<(ostream &os, const Point &point) {
        os << "m_x: " << point.m_x << " m_y: " << point.m_y;
        return os;
    }
};
/*

int main(){
    Point p1= Point::newCartesian(5.0,2.5);
    auto p2=Point::newPolar(5, M_PI_4);
    cout << p2 << endl;
}
*/
