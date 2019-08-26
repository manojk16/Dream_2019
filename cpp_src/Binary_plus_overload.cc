/*
 * Binary_plus_overload.cc
 *
 *  Created on: Jul 23, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;

class Time{

	int hours;
	int minutes;
public:
	Time(){
		hours=0;
		minutes=0;

	}
	Time(int h, int m){
		hours=h;
		minutes=m;
	}
void getTime(){
	 cout<<"Enter the values: "<<endl;
	        cin>>hours>>minutes;
}
	void display(){
		cout<<"Total time is " << hours << " and " << minutes << "\n";
	}
// we are using function as inline function if we define the outside the class then use this function as friend of the class
	Time operator+(Time rhs_obj){

		hours=hours+rhs_obj.hours;
		minutes=minutes+rhs_obj.minutes;
		return *this;

	}

	//friend Time operator+(Time lhs_obj, Time rhs_obj);
};

/*
Time operator+(Time lhs_obj, Time rhs_obj){
		Time obj;
		obj.hours=lhs_obj.hours+rhs_obj.hours;
		obj.minutes=lhs_obj.minutes+rhs_obj.minutes;
		return obj;

	}
*/


int main(){
	Time T1(10,20), T2(25,15);
	T1.display();
	T2.display();
	Time T3=T1+T2;
	T3.display();

	return 0;

}

