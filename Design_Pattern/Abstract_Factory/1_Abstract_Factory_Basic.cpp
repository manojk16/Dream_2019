//
// Created by redbend on 05/09/2019.
//

#include <iostream>

using namespace std;


/*
 * Product A
 * products implement the same interface so that the classes can refer
 * to the interface not the concrete product
 */
class abstractProductA{
public:
    virtual ~abstractProductA()=default;
    virtual string& getName() const=0;
};

class ConcretAX:public abstractProductA{
public:
    virtual ConcreatAX();

};