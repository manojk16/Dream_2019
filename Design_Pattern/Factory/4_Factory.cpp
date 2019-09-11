//
// Created by redbend on 02/09/2019.
//


#define _USE_MATH_DEFINES
#include <iostream>
#include  <cmath>
using namespace std;


class Point{
// private:

    // friend  class pointFactory;
private: // ##
    Point(float mX, float mY) : m_x(mX), m_y(mY) {}

    // we can add static method here which will return the Point object as below

    // Here we can hide further information by making point class as private so let's make it private
    // but tafter making private it can't be execute becasue private member function can't be access outside the it's own class
    // so  for that we make one isntance of the pointFactory and exposed it from the point class
    // like as below

// public:
//In stance the pointFactory and exposed it publically at line number 44
    class pointFactory {
        pointFactory(){};

    public:
        static Point newCartesian(float a, float b) {
            return {a, b};
        }

        static Point newPolar(float r, float theta) {
            return {r * cos(theta), r * sin(theta)};
        }
    };
public:

    float m_x;
    float m_y;
    static pointFactory factory;
    friend ostream &operator<<(ostream &os, const Point &point) {
        os << "m_x: " << point.m_x << " m_y: " << point.m_y;
        return os;
    }
};


// Here for better feel of the the concept which looks like a factory itself
// we will put the the pointfactory inside the point class itself


// and in that case constructor of the Point class can remain private
//now we can every thing private
// like we can make class Point factory as Private insdie the class
/*int main(){
// auto p=Point::pointFactory::newPolar(5, M_PI_4); // after making pointFactory class a sprivet this line will not get compile so let write it again
auto p = Point::factory.newPolar(5,M_PI_4);
cout << p << endl;
    return 0;
}*/