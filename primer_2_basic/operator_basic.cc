/*
 * operator_basic.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 *
string s1 = "a string", *p = &s1;
auto n = s1.size(); // run the size member of the string s1
n = (*p).size(); // run size on the object to which p points
n = p->size();
Because dereference has a lower precedence than dot, we must parenthesize the
dereference subexpression.
**************************Bit Wise Operator************************************
1. The left-shift operator (the << operator) inserts 0-valued bits on the right.

2. The behavior of the right-shift operator (the >> operator) depends on the type of the
left-hand operand: If that operand is unsigned, then the operator inserts 0-valued
bits on the left; if it is a signed type, the result is implementation defined—either
copies of the sign bit or 0-valued bits are inserted on the left
*/



#include <iostream>


using namespace std;
unsigned long quiz1 = 0;



int main(){

	return 0;
}









