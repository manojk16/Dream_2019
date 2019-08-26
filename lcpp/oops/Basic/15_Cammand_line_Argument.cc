/*
 * Cammand_line_Argument.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */

#include <iostream>


int main(int argc, char *argv[]){

	std::cout<< "There are " << argc << "arguments " << "\n";

	for(int count=0;count<argc;++count){
		std::cout << count << " " << argv[count] << "\n";
	}
}


