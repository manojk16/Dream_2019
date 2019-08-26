/*
 * 9_diamond_problem_virtual_base_class.cc
 *
 *  Created on: Aug 20, 2019
 *      Author: user1
 */


#include <iostream>

using namespace std;



class PoweredDevice{
public:

	PoweredDevice(int power)
	    {
			cout << "PoweredDevice: " << power << '\n';
	    }
};

class Scanner: virtual public PoweredDevice
{
public:
    Scanner(int scanner, int power)
        : PoweredDevice(power)
    {
		cout << "Scanner: " << scanner << '\n';
    }
};

class Printer: virtual public PoweredDevice
{
public:
    Printer(int printer, int power)
        : PoweredDevice(power)
    {
		cout << "Printer: " << printer << '\n';
    }
};


class Copier: public Scanner, public Printer
{
public:
    /*Copier(int scanner, int printer, int power)
        :Scanner(scanner, power), Printer(printer, power){}*/

	Copier(int scanner, int printer, int power):PoweredDevice(power), // // PoweredDevice is constructed here
	Scanner(scanner, power), Printer(printer, power){}

};

int main(){
	Copier coppier(1,2,3); // Here we end two object of poweredDevice

	return 0;
}
/*
First, virtual base classes are always created before non-virtual base classes, which ensures all bases get created before their derived classes.

Second, note that the Scanner and Printer constructors still have calls to the PoweredDevice constructor. When creating an instance of Copier, these constructor calls are simply ignored because Copier is responsible for creating the PoweredDevice, not Scanner or Printer. However, if we were to create an instance of Scanner or Printer, those constructor calls would be used, and normal inheritance rules apply.

Third, if a class inherits one or more classes that have virtual parents, the most derived class is responsible for constructing the virtual base class. In this case, Copier inherits Printer and Scanner, both of which have a PoweredDevice virtual base class. Copier, the most derived class, is responsible for creation of PoweredDevice. Note that this is true even in a single inheritance case: if Copier was singly inherited from Printer, and Printer was virtually inherited from PoweredDevice, Copier is still responsible for creating PoweredDevice.

Fourth, all classes inheriting a virtual base class will have a virtual table, even if they would normally not have one otherwise, and thus be larger by a pointer.

Because Scanner and Printer derive virtually from PoweredDevice, Copier will only be one PoweredDevice subobject. Scanner and Printer both need to know how to find that single PoweredDevice subobject, so they can access its members (because after all, they are derived from it). This is typically done through some virtual table magic (which essentially stores the offset from each subclass to the PoweredDevice subobject).
*/


