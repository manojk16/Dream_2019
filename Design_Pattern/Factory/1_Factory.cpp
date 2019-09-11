
// Factory and Abstract Facrtory
// 1. Motivation : When Object creation is too Convoluted
// 2. Oject Creation in wholesale can be outsourced to:
// 3. A separate function : Factory Method
// 4 . That May Exist in a seperate class Factory
// 5. Can Create Hierarchy of factories with Abstract Factory
//



#include <iostream>
#include <cmath>

using namespace std;

// **
enum class pointType{
    cartesian,
    polar,
};

class Point{
private :
    float m_x;
    float m_y;
public:
    //Point(float x, float y):m_x(x),m_y(y){}
    // Now These points are in the cartesian form suppose we are given points in the form of polar then our
    // constructor will be in the form of as below
    // Point(float rho, float theta){} // But the problem here is two constructor with same number of argument is not allowed in c++
    // and with the constructor we are having another limitation also
    // So the method how we can build the constructor is all about Factory Method
    // In Thie Scenario let's have an enum described above **
    // So Now let's define theh constructor again
    // Param a this is either x ot rho
    // param b this is either y or theta
    Point(float a, float b, pointType type=pointType::cartesian){
        if(type==pointType::cartesian){
            m_x=a;
            m_y=b;
        }else{
            m_x=a*cos(b);
            m_y=b*sin(b);
        }
    }
// This is how we have created the object for both the cases
};
