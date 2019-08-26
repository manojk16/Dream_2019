/*
 * literals.cpp
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 */
#include <iostream>

using namespace std;


int main(){
	int x{12};
	cout<<"print in decimal " << x <<"\n";
	cout << "Print in Hex " << std::hex << x << "\n";
	cout <<"Again in hexadecimal " << x << "\n";
	cout << "Print in oct " << std::oct << x <<"\n";
	cout << "print in oct Again "<< x << "\n";
	cout <<" Print in dec " << std::dec << x << "\n";
	// use of static cast

	char c='A';
	int z=c;
	cout << "z is " << z <<endl;

	int y{49};
	char ch =static_cast<char>(y);
	cout << ch << endl;

	// input a character from keyboard
	cout << "Input a Charactwer \n";
	char chr{};
	cin >> chr ;
	cout << "ASCII value of Inputed Character is " << static_cast<int> (chr);<< "\n";

	cout << "ASCII value of Inputed Character is " << int(chr) << "\n";

	// Comma operator

	int x_1=5;
	int y_1=6;
	int z_1=(++x_1,++y_1);
	cout << "The Value of z is " << z_1 << endl;
	// but if
	int z_2=x_1,y_1;
	cout << "The value of x2_2 <<endl";

}




