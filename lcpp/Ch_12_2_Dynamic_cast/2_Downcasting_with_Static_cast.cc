/*
 * 2_Dynamic_Cast_2.cc
 *
 *  Created on: Aug 26, 2019
 *      Author: user1
 */
//1.  Downcasting can be done by static_cast
// 2. It is different from the static_cast in the term of that it doesn't not check the typechecking at runtime
// 3. Due to this static_cast is more faster then dynamic_cast
// 4. But it may be more dengereous
// 5. If we cast a Base* to Derived* it will get successful even if the Base* is not pointing to derived object it will result in
// undefined behaviour when we trying to access derived object

//if you’re absolutely sure that the pointer you’re downcasting will succeed, then using static_cast is acceptable. One way to ensure that you know what t
	//type of object you’re pointing to is to use a virtual function. Here’s one (not great because it uses a global variable) way to do that:
//
#include <iostream>
#include <string>

using namespace std;
enum ClassID{
	BASE,
	DERIVED,
};


class Base{
private:
	int m_value;
public:
	Base(int value):m_value(value){}
	virtual ~Base(){}
	 virtual ClassID getClassID(){
		return BASE;
	}
};
class Derived : public Base{
	string m_name;
public:
	Derived(int value, string name):Base(value),m_name(name){}
	virtual ClassID getClassID(){return DERIVED;}
	const string& getName(){return m_name;}
};


Base* getObject(bool breturnedValue){
	if(breturnedValue){
		return new Derived(1, "Apple");
	}else{
		return new Base(2);
	}
}


int main(){
	Base *b= getObject(true);
	if(b->getClassID()==DERIVED){
		//Derived *d=static_cast<Derived *>(b);
		 Derived *d= dynamic_cast<Derived *>(b);
		 if(d)
		cout << "The Name of the Derived is " <<  d->getName() << endl;
		 else{
			 cout << "Error\n";
		 }
	}
	else{
		cout << "In base \n";
	}
	delete b;
	return 0;
}





