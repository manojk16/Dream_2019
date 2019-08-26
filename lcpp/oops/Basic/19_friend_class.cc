/*
 * 19_friend_class.cc
 *
 *  Created on: Aug 3, 2019
 *      Author: user1
 */

#include <iostream>

using namespace std;

class Storage;
class Display{
	bool m_displayIntFirst;
public:
	Display(bool first){
		m_displayIntFirst=first;
	}
	void DisplayItem(const Storage& storage){
		if(m_displayIntFirst){
			cout << storage.m_nValue<< " " <<storage.m_dvalue<<endl;
		}else{
			cout << storage.m_dvalue<< " " << storage.m_nValue <<endl;
		}

	}
};
class Storage{
	int m_nValue;
	double m_dvalue;
public:
	Storage(int nvalue, double dvalue){
		m_nValue=nvalue;
		m_dvalue=dvalue;
	}
	// friend class Display;
	// We can make a single function as friend function
	// But in that case we have to define Display class before the Storage class
	// But still we have the problem because in Display class we are using Storage class object
	// But Till now Display Class doesnot know about the storage class Object
	// So Let's do the forward declaration of the Storage class
	// Now everything is fine
	friend void Display::DisplayItem(const Storage& storage);

};

/*
class Display{
	bool m_displayIntFirst;
public:
	Display(bool first){
		m_displayIntFirst=first;
	}
	void DisplayItem(const Storage& storage){
		if(m_displayIntFirst){
			cout << storage.m_nValue<< " " <<storage.m_dvalue<<endl;
		}else{
			cout << storage.m_dvalue<< " " << storage.m_nValue <<endl;
		}

	}
};
*/


int main(){
	Storage stg(10,20.2);
	Display disp(false);
	disp.DisplayItem(stg);

}
