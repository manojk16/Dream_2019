/*
 * link_list.cc
 *
 *  Created on: Jul 3, 2019
 *      Author: user1
 */

#include <iostream>
#include <assert.h>

class Node{
public:
	int data;
	Node* next;
	Node(){
		//std::cout<<"Constructor get called\n";
		data=100;
		next=NULL;
	}
	Node(int value){
		data=value;
		next=NULL;
	}
	~Node(){
		std::cout<<"Deleted Everything\n";
	}
};
/*Node* createNewnode(int value){
	Node* new_node=new Node();
	new_node->data=value;
	new_node->next=NULL;
	return new_node;
}*/
void insertatbeg(Node** head_ref, int value){
	Node* temp=(*head_ref);
	//Node* new_node=createNewnode(value);
	Node* new_node=new Node(value);
	if(temp==NULL){
		std::cout<<"Link List Is empty enter the very first Node\n";
		(*head_ref)=new_node;
	} else{
			new_node->next=temp;
			(*head_ref)=new_node;

	}
}
void displayList(Node* head_ref){
	Node* current=head_ref;
	if(current==NULL){
		std::cout<<"Nothing to display\n";
	}else{
		while(current!=NULL){
			std::cout<<current->data<<" ";
			current=current->next;
		}

	}
	std::cout<<"\n";
}
int findNode(Node* head_ref, int pos){
	int count=0;
	int nodeNumber=pos;
	Node* temp_ptr=head_ref;
	while(temp_ptr!=NULL){
		if(count==pos){
			//std::cout<<"Value of the "<<nodeNumber<<" is "<<temp_ptr->data<<"\n";
			return temp_ptr->data;
		}
		count++;
		temp_ptr=temp_ptr->next;
		}
	assert(0); // Need to look , If caller asking for non exitace element
	}



int main(){
Node* head_ref=new Node();
insertatbeg(&head_ref,50);
insertatbeg(&head_ref,40);
insertatbeg(&head_ref,30);
insertatbeg(&head_ref,20);
insertatbeg(&head_ref,10);
std::cout<<"Node at pos 5 is "<< findNode(head_ref,5)<<"\n";
displayList(head_ref);
std::cout<<"Node at pos 7 is "<< findNode(head_ref,7)<<"\n";
delete head_ref;

}
