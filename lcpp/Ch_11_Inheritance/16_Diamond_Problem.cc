/*
 * 16_Diamound_Problem.cc
 *
 *  Created on: Aug 19, 2019
 *      Author: user1
 */



#include <iostream>
#include <string>


using namespace std;


class PowerDevice{};


class Scanner:public PowerDevice{};

class Printer:public PowerDevice{};


class Copier:public Scanner, public Printer{};
