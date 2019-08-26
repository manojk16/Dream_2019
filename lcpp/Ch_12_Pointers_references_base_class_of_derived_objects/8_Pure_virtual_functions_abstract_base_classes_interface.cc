/*
 * 8_Pure_virtual_functions_abstract_base_classes_interface.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1


1. When we add a pure virtual function to our class, we are effectively saying,
“it is up to the derived classes to implement this function”.

Using a pure virtual function has two main consequences: First, any class with one or more pure virtual functions becomes an abstract base class, which means that it can not be instantiated!

*/
#include <iostream>
using namespace std;
class Animal{
protected:
	string m_name;
public:
	Animal(string name):m_name(name){}
	string& getName(){
		return m_name;
	}
 virtual const char* speak()=0;
 virtual ~ Animal(){

 }
};

class Cow:public Animal{
public:
    Cow(string name)
        : Animal(name)
    {
    }

    virtual const char* speak() { return "Moo"; }
};


int main(){

	Cow cow("Betsy");
    cout << cow.getName() << " says " << cow.speak() << '\n';
    return 0;

}
