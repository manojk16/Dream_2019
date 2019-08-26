/*
 * 2_Pointer_reference_Inheritance.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>

using namespace std;

class Animal{
	string m_name;
protected:
	Animal(const string name):m_name(name){}
public:
	const string& getName() { return m_name; }
	const char* speak(){
		return "???";
	}

};

class Cat:public Animal{
public:
	Cat(string name):Animal(name){}
	const char* speak(){
		return "Muoow";
	}
};
class Dog:public Animal{
public:
	Dog(string name):Animal(name){}
	const char* speak(){return "BhowBhow";}
};


int main(){
	Cat cat("Fred");;
	cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';
	Dog dog("Garbo");
	cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';

	Animal *pAnimal = &cat;
	cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';
	pAnimal = &dog;
	cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';
	return 0;
}

