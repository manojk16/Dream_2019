/*
 * Link_list_reverse_using_stl.cpp
 *
 *  Created on: Jul 18, 2019
 *      Author: user1
 */

#include "link_list.h"
#include <stack>
using namespace std;

void Reverse_Link_list_STL(Node** head_ref){
	stack<Node*> s;
	Node* temp=*head_ref;
	while(temp!=NULL){
		s.push(temp);
		temp=temp->next;
	}
	temp=s.top();
	(*head_ref)=temp;
	s.pop();
	while(!s.empty()){
		temp->next=s.top();
		s.pop();
		temp=temp->next;
	}
	temp->next=NULL;
}



int main(){
	Node* head_ref=insert();
	displayList(head_ref);
	Reverse_Link_list_STL(&head_ref);
	displayList(head_ref);
	return 0;
}


