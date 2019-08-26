/*
 * 5_Virtual_function.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>

using namespace std;
class Animal {
protected:
	std::string m_name;

	// We're making this constructor protected because
	// we don't want people creating Animal objects directly,
	// but we still want derived classes to be able to use it.
	Animal(std::string name) :
		m_name(name)
	{
	}

public:
	std::string getName()
	{
		return m_name;
	}
	virtual const char* speak()
	{
		return "???";
	}
};

class Cat: public Animal {
public:
	Cat(std::string name) :
		Animal(name)
	{
	}

	const char* speak()
	{
		return "Meow";
	}
};

class Dog: public Animal {
public:
	Dog(std::string name) :
		Animal(name)
	{
	}

	const char* speak()
	{
		return "Woof";
	}
};

void report(Animal &animal)
{
	std::cout << animal.getName() << " says " << animal.speak() << '\n';
}

int main(){
	Cat cat("Fred");
	Dog dog("Garbo");
	report(cat);
	report(dog);

	Cat fred("Fred"), misty("Misty"), zeke("Zeke");
	Dog garbo("Garbo"), pooky("Pooky"), truffle("Truffle");


	Animal *animals[] = { &fred, &garbo, &misty, &pooky, &truffle, &zeke };
	//for (int iii=0; iii < 6; ++iii)
	for(auto animal:animals)
	    std::cout << animal->getName() << " says " << animal->speak() << '\n';


}


