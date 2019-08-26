/*
 * bit_flag_mask.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 */


#include <iostream>
#include <bitset>
using namespace std;



int main(){
// Defining bit flags in C++14
// In order to work with individual bits, we need to have a way to identify the individual bits within a byte, so we can manipulate
	//those bits (turn them on and off). This is typically done by defining a symbolic constant to give a meaningful name to each bit used.
	//The symbolic constant is given a value that represents that bit.

	// Define 8 separate bit flags (these can represent whatever you want)
	const unsigned char option0 = 0b0000'0001; // represents bit 0
	const unsigned char option1 = 0b0000'0010; // represents bit 1
	const unsigned char option2 = 0b0000'0100; // represents bit 2
	const unsigned char option3 = 0b0000'1000; // represents bit 3
	const unsigned char option4 = 0b0001'0000; // represents bit 4
	const unsigned char option5 = 0b0010'0000; // represents bit 5
	const unsigned char option6 = 0b0100'0000; // represents bit 6
	const unsigned char option7 = 0b1000'0000; // represents bit 7


	//Defining bit flags in C++11 or earlier

	//Because C++11 doesn’t support binary literals, we have to use other methods
	//to set the symbolic constants. There are two good methods for doing this.
	//Less comprehensible, but more common, is to use hexadecimal
	// Define 8 separate bit flags (these can represent whatever you want)
	const unsigned char option0 = 0x1; // hex for 0000 0001
	const unsigned char option1 = 0x2; // hex for 0000 0010
	const unsigned char option2 = 0x4; // hex for 0000 0100
	const unsigned char option3 = 0x8; // hex for 0000 1000
	const unsigned char option4 = 0x10; // hex for 0001 0000
	const unsigned char option5 = 0x20; // hex for 0010 0000
	const unsigned char option6 = 0x40; // hex for 0100 0000
	const unsigned char option7 = 0x80; // hex for 1000 0000

	//This can be a little hard to read. One way to make it easier is to use the
	//left-shift operator to shift a bit into the proper location:

	// Define 8 separate bit flags (these can represent whatever you want)
	const unsigned char option0 = 1 << 0; // 0000 0001
	const unsigned char option1 = 1 << 1; // 0000 0010
	const unsigned char option2 = 1 << 2; // 0000 0100
	const unsigned char option3 = 1 << 3; // 0000 1000
	const unsigned char option4 = 1 << 4; // 0001 0000
	const unsigned char option5 = 1 << 5; // 0010 0000
	const unsigned char option6 = 1 << 6; // 0100 0000
	const unsigned char option7 = 1 << 7; // 1000 0000
	// Since we have 8 options above, we'll use an 8-bit value to hold our options
	// Each bit in myflags corresponds to one of the options defined above
	unsigned char myflags = 0; // all bits turned off to start
	// Turning individual bit on
	myflags | = option4;

	// Turning individual bits off
	myflags & =
		1
		myflags &= ~option4; // turn option 4 off


	myflags &= ~(option4 | option5); // turn options 4 and 5 off at the same time


	// Flipping individual bits

	myflags ^= option4; // flip option4 from on to off, or vice versa
	myflags ^= (option4 | option5); // flip options 4 and 5 at the same time

}



