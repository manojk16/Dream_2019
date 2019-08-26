/*
 * 10_Member_Initialization_list_quiz.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 *
 *
 *
 */

#include <iostream>
#include <cstdint>
using namespace std;

class RGBA{
	uint_fast8_t m_red;
	uint_fast8_t m_green;
	uint_fast8_t m_blue;
	uint_fast8_t m_alpha;
public:
	RGBA(uint_fast8_t red=0, uint_fast8_t green=0, uint_fast8_t blue=0, uint_fast8_t alpha=255):m_red(red),m_green(green),m_blue(blue),m_alpha(alpha){

	}
	void print(){
		cout << m_red << " " << m_green << " " << m_blue << " " << m_alpha << endl;
	}

};
int main()
{
	RGBA teal(0,127,127);
	teal.print();
}

