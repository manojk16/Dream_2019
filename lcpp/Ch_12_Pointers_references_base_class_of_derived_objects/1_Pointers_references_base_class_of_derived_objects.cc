/*
 * 1__Pointers_references_base_class_of_derived_objects.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>

using namespace std;
class Base{
protected:
	int m_value;
public:
	Base(int value):m_value(value){}
	const char *getName(){return "Base";}
	int getValue(){return m_value;}
};

class Derived:public Base{
public:
	Derived(int value):Base(value){}
	const char *getName(){return "Derived";}
	int getValueDoubled(){
		return m_value*2;
	}
};


int main(){
	Derived derived(5);
	cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';

    Derived &rDerived = derived;
    cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << '\n';

    Derived *pDerived = &derived;
    cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << '\n';

    Base &rBase = derived; // Base reference tro the derived object
    Base *pBase = &derived; // base Pointer to the derived object


    std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';
    std::cout << "rBase is a " << rBase.getName() << " and has value " << rBase.getValue() << '\n';
    std::cout << "pBase is a " << pBase->getName() << " and has value " << pBase->getValue() << '\n';

	return 0;
}
    /*it turns out that because rBase and pBase are a Base reference and pointer, they can only see members of Base (or any classes that Base inherited).
	So even though Derived::getName() shadows (hides) Base::getName() for Derived objects, the Base pointer/reference
	can not see Derived::getName(). Consequently, they call Base::getName(), which is why rBase and pBase report that
	they are a Base rather than a Derived.

Note Note that this also means it is not possible to call Derived::getValueDoubled() using rBase or pBase. They are unable to see anything in Derived.
*/
