/*
 * CountDuplicate.cc
 *
 *  Created on: Jul 7, 2019
 *      Author: user1
 */

#include "link_list.h"



int CountDuplicate(Node* head_ref)
{
	Node* ptr1 = head_ref;
	Node* ptr2;
	Node* dup;
	int count=0;

	while (ptr1 ->next!= NULL)
	{
		ptr2=ptr1->next;
		while (ptr2!= NULL)
		{
			if (ptr1->data == ptr2->data)
			{
				count++;
				break;

			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	return count;
}

int main(){
	Node* head_ref=insert();
	displayList(head_ref);
	std::cout<<"Number of duplicates elements are: "<< CountDuplicate(head_ref)<<"\n";
	displayList(head_ref);
}
