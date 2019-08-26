/*
 * Increment_op_ooverloading.cc
 *
 *  Created on: Jul 23, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;

class Time {
	int hours;
	int minutes;
public:
	Time()
	{
		hours = 0;
		minutes = 0;
	}
	Time(int h, int m)
	{
		hours = h;
		minutes = m;
	}
	void display()
	{
		cout << "Total Time is:  " << hours << " hours " << "and " << minutes
			<< endl;
	}
	// ++ Prefix Operator Overloading
	Time operator ++()
	{
		++minutes;
		if (minutes >= 60)
		{
			++hours;
			minutes -= 60;
		}
		if (hours >= 13)
		{
			hours %= 12;
		}
		return Time(hours, minutes);
	}

	// ++ Postfix Operator Overloading
	Time operator ++(int)
	{
		cout<<"Post Increment fucn get called " << "\n";
		++minutes;
		if (minutes >= 60)
		{
			++hours;
			minutes -= 60;
		}
		if (hours >= 13)
		{
			hours %= 12;
		}
		return Time(hours, minutes);
	}
};

int main(){
	Time T1(11,59),T2(30,40);
	++T1;
	T1.display();
	++T1;
	T1.display();
	T2++;
	T2.display();
	T2++;
	T2.display();
}
