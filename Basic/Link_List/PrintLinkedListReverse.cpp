/*
 * PrintLinkedListReverse.cpp
 *
 *  Created on: Jul 5, 2019
 *      Author: user1
 */

#include "link_list.h"
#include <iostream>


void printReverse(Node* head_ref){
	Node* temp=head_ref;
	if(temp==NULL){
		return;
	}
	printReverse(head_ref->next);


	std::cout << head_ref->data<<" ";

	//std::cout<<"\n";
}



int main(){

	Node* head_ref = insert();
	displayList(head_ref);
	printReverse(head_ref);
	std::cout<<"\n";
	return 0;
}
