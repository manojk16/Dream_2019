/*
 * ReverseLinked_list_stl.cpp
 *
 *  Created on: Jul 13, 2019
 *      Author: user1
 */

#include "link_list.h"
#include <stack>
using namespace std;
void reverseList(Node** head_ref){
	Node* temp=(*head_ref);
	stack <Node*> s;
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
void reverseList_simple(Node** head_ref){
	Node* current_node=*head_ref;
	Node* previous_node=NULL;
	Node* next_node=NULL;
	while(current_node!=NULL){
		next_node=current_node->next;
		current_node->next=previous_node;
		previous_node=current_node;
		current_node=next_node;
		}
		(*head_ref)=previous_node;
	}
void printforward(Node* head_ref){
	Node* temp=head_ref;
	if(head_ref==NULL)
	{
		return;
	}
	cout<< temp->data<<" ";
	printforward(temp->next);

}
void printReverse(Node* head_ref){
	Node* temp=head_ref;
	if(temp==NULL)
	{
		return;
	}
	printReverse(temp->next);
	cout<< temp->data<<" ";


}
int main(){
	Node* head_ref=insert();
	displayList(head_ref);
	reverseList(&head_ref);
	displayList(head_ref);
	reverseList_simple(&head_ref);
	displayList(head_ref);
	cout<<"Print the linked list in to forward direction \n";
	printforward(head_ref);
	cout<<"\n";
	cout<<"Print the linked list in reverse order\n";
	printReverse(head_ref);
	cout<<"\n";


	return 0;
}
