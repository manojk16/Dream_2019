/*
 * Enum_example.cc
 *
 *  Created on: Jul 29, 2019
 *      Author: user1
 */
#include <iostream>
#include <string>

using namespace std;

enum ItemType{
	IITEMTYPE_PEN,
	ITEMTYPE_PENCIL,
	ITEMTYEPE_PAPER,

};

string getItemName(ItemType itemtype){
	if(itemtype==IITEMTYPE_PEN)
		return "PEN";
	if(itemtype==ITEMTYPE_PENCIL)
		return "PENCIL";
	if(itemtype==ITEMTYEPE_PAPER)
		return "PAPER";
	// Just in case we add a new item in the future and forget to update this function
	    return std::string("???");
}
int main(){

	ItemType itemtype;
	itemtype =ITEMTYPE_PENCIL;
	cout<< "You are carrtying a " << getItemName(itemtype) <<endl;
	return 0;
}



