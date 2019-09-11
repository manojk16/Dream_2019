/*
 * 2_Identify_Class_Object.cpp
 *
 *  Created on: Aug 30, 2019
 *      Author: user1
 */
// Write a PROGRAM to input the DIMENSIONS of a CYLINDER and calculate and print its SURFACE AREA & VOLUME.
#include <cstring>
#include <iostream>
#include <string>


using namespace std;


class romanType{
string m_romanNumber;
int m_sum;

public:
romanType(string roman="", int sum=0):m_romanNumber(roman),m_sum(sum){}
void printRomanNumber(const string &romanNumber);
int converRomanNumber(string romanNumber);
int printDecimal(string romanNumber);

};
void romanType::printRomanNumber(const string &romanNumber){
	cout << "Your Roman Number is " << romanNumber << endl;
}

int romanType::converRomanNumber(string romanNumber){
	cout << "In convert Roman Number " <<endl;
	int total=0;
	int sum;
	int count;
	int len=romanNumber.length();
	for (int i = 0; i < len; i++)
	{
		switch (romanNumber[i])
		{
		case 'M':
			count = 1000;
			break;
		case 'm':
			count = 1000;
			break;
		case 'D':
			count = 500;
			break;
		case 'd':
			count = 500;
			break;
		case 'C':
			count = 100;
			break;
		case 'c':
			count = 100;
			break;
		case 'L':
			count = 50;
			break;
		case 'l':
			count = 50;
			break;
		case 'X':
			count = 10;
			break;
		case 'x':
			count = 10;
			break;
		case 'V':
			count = 5;
			break;
		case 'v':
			count = 5;
			break;
		case 'I':
			count = 1;
			break;
		case 'i':
			count = 1;
			break;
		}
		total=total+count;
		sum=total;
	}
	return sum;

}
int romanType::printDecimal(string romanNumber){
	return converRomanNumber(romanNumber);

}


int main(){
	romanType r;
	string romanNumber;
	char choice;
	int sum;
	cout << "Enter Roman Number " << endl;
	cin >> romanNumber;
	cout << endl;
	    cout << "Do you want the Roman Numeral or the Decimal?" << endl;
	    cout << "Press [D] for Decimal!" << endl << "Press [R] for Roman Numeral!" << endl;
	    cin >> choice;
	        if (choice == 'D' || choice == 'd')
	            cout<< r.converRomanNumber(romanNumber)<<endl;
	        else if (choice == 'R' || choice == 'r')
	      r.printRomanNumber(romanNumber);
	        else
	     cout << "That wasn't the right button!" << endl;


}

