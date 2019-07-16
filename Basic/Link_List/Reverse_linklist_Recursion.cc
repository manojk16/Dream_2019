/*
 * Reverse_linklist_Recursion.cc
 *
 *  Created on: Jul 16, 2019
 *      Author: user1
 */

#include "link_list.h"

using namespace std;
Node* ReverseList_recursion(Node* head_ref){
	Node* p=head_ref;
	if(p->next==NULL){
		head_ref=p;
		return head_ref;
	}
	Node* Rnode=ReverseList_recursion(p->next);
	//Node* q=p->next;
	//q->next=p;
	p->next->next=p;
	p->next=NULL;
	return Rnode;

}
int main(){
	Node* head_ref=insert();
	displayList(head_ref);

	Node* head=ReverseList_recursion(head_ref);
	cout<<"After Reverse the Linked list is \n";
	displayList(head);
}

