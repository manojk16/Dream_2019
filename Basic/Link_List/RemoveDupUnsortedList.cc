/*
 * RemoveDupUnsortedList.cc
 *
 *  Created on: Jul 6, 2019
 *      Author: user1
 */

#include "link_list.h"

/*
 * Algorithm:
 * 1. Inititalize ptr1 & ptr2 to head_ref of linked List
 * 2. while loop : till to end of the linked list
 * 		Initialize ptr2=ptr1 to keep track of the next node
 * 		while loop: till the end of the list
 * 			if data in the first node is equal to the data in the next node
 * 			    mark next of ptr2 node as dup
 * 				link first node to third node
 * 				delete the duplicate
 * 			else
 * 				increment the ptr2
 * 		increment prt1
 *
 * */

void RemoveDupUnsortedList(Node* head_ref)
{
	Node* ptr1 = head_ref;
	Node* ptr2;
	Node* dup;

	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;
		while (ptr2->next != NULL)
		{
			if (ptr1->data == ptr2->next->data)
			{
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete dup;
			}
			else
			{
				ptr2 = ptr2->next;
			}
		}
		ptr1 = ptr1->next;
	}
}

int main(){
	Node* head_ref=insert();
	displayList(head_ref);
	RemoveDupUnsortedList(head_ref);
	displayList(head_ref);
}


