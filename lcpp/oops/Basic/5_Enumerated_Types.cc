/*
 * Enumerated_Types.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 */


#include <iostream>
using namespace std;


// Define a enumeration named color
enum Color{
	// here is the enumerator
	COLOR_BLACK,
	COLOR_GREEN,
	COLOR_RED,
	COLOR_WHITE,
	COLOR_YELLOW, // Note the comma at the last enumerator also


};

// Define a few variable of enumeration type

Color paint=COLOR_WHITE;
Color house(COLOR_GREEN);
Color apple{COLOR_RED};


// define a new enum names Animal
enum Animal{
	ANIMAL_CAT=-3,
	ANIMAL_DOG, // by default assigned -2
	ANIMAL_PIG, // by default assigned -1
	ANIMAL_HORSE=1,  // share same value as ANIMAL_CHICKEN
	ANIMAL_CHICKEN=1,
	ANIMAL_GERAF=5,
};


int main(){
	int mypet=ANIMAL_HORSE;
	cout << mypet << endl;

	//The compiler will not implicitly convert an integer to an enumerated value. The following will produce a compiler error:
	//Animal animal=5;
	// However, you can force it to do so via a static_cast:

	Color color=static_cast<Color> (5);

	// compiler will not let you input through keyboard
//	/cout << ""
	// cin >> color;

	// It can happen by following method

int myvalue;
cin >> myvalue;
Color Mycolor=static_cast<Color>(myvalue);
cout << "Inputed Value is  " << Mycolor <<endl;



}


// What are enumerators useful for?


// Like when we want to read the states in that case enumeration will be useful  like below


 int ifreadfileContents(){
	 if(!openFile()) return -1;
	 else if(! readFile()) return -2;
	 else if(! parseFile()) return -3;

	 return 0; //success
 }
// Using magicNumber is not very descriptive so better to use enum

 enum ParseResult{
	 SUCCESS=0,
	 ERROR_OPENING_FILE=-1,
	 ERROR_READINF_FILE=-2,
	 ERROR_PARSE_FILE=-3,

 };


 // nOw above funciton will looks like as below

 ParseResult ifreadfileContents(){
	 if(!openFile()) return ERROR_OPENING_FILE;
	 else if(! readFile()) return ERROR_READINF_FILE;
	 else if(! parseFile()) return ERROR_PARSE_FILE;

	 return SUCCESS; //success
 }
