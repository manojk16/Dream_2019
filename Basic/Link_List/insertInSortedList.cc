/*
 * insertInSortedList.cc
 *
 *  Created on: Jul 5, 2019
 *      Author: user1
 */

#include "link_list.h"

void Insert_Sort_Order(Node** head_ref, int value)
{
	Node* new_node = createNewnode(value);
	new_node->next = NULL;
	Node* current = (*head_ref);

	// Special case when either list is empty or insertion need to be happen at very first position
	if (*head_ref == NULL || (*head_ref)->data >= value)
	{
		new_node->next = *head_ref;
		*head_ref = new_node;
	}else{
		// Insertion other then first position
		// It will handle the if we need to enter in to the last node or we need to insert the with equal data
	while (current->next!=NULL && value > current->next->data)
	{
		current = current->next;

	}
	new_node->next = current->next;
	current->next = new_node;
	}
}




int main(){
	Node* head_ref = new Node(100); // First Node
	/*** 1. Insertion*********************/

	insertatbeg(&head_ref, 60);
	insertatbeg(&head_ref, 50);
	insertatbeg(&head_ref, 40);
	insertatbeg(&head_ref, 30);
	insertatbeg(&head_ref, 20);
	insertatbeg(&head_ref, 10);

	displayList(head_ref);
	Insert_Sort_Order(&head_ref,35);
	Insert_Sort_Order(&head_ref,5);
	Insert_Sort_Order(&head_ref,110);
	Insert_Sort_Order(&head_ref,110);
	displayList(head_ref);
	return 0;
}
