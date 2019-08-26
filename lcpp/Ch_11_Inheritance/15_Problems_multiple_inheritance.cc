/*
 * 15_Problems_multiple_inheritance.cc
 *
 *  Created on: Aug 19, 2019
 *      Author: user1
 */

#include <iostream>
#include <string>


using namespace std;



class USBDevice{
	long m_id;
public:
	USBDevice(long id):m_id(id){}
	long getID() const{
		return m_id;
	}
};


class NetworkDevice{
	long m_id;
	public:
	NetworkDevice(long id):m_id(id){}
		long getID() const{
			return m_id;
		}
};

class WirelessAdapter:public USBDevice, public NetworkDevice{
public:
	WirelessAdapter(long id_1,long id_2):USBDevice(id_1),NetworkDevice(id_2){}
};


int main(){
	WirelessAdapter c54G(5442, 181742);
	cout << c54G.USBDevice::getID()<<endl;

	return 0;
}
