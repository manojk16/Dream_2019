/*
 * Recusion_sum_of_digit.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */
#include <iostream>
using namespace std;
int sumofdigit(int number){
	if(number<10){
		return number;
	}else{
		return sumofdigit(number/10)+number%10;
	}

}


int main(){


	cout<< "Sum of digits are :: " << sumofdigit(93427) <<endl;
}
