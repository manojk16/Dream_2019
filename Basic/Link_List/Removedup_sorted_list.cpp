/*
 * Removedup_sorted_list.cpp
 *
 *  Created on: Jul 6, 2019
 *      Author: user1
 */
#include "link_list.h"
void Removedup_sorted_list(Node* head_ref){
	Node* current=head_ref;
	Node* next_node=NULL;

	while(current->next!=NULL){
		if(current->data==current->next->data){
			next_node=current->next->next;
			delete current->next;
			current->next=next_node;
		}else{
			current=current->next;
		}
	}

}

int main(){
	Node* head_ref=insert();
	displayList(head_ref);
	Removedup_sorted_list(head_ref);
	displayList(head_ref);
}



