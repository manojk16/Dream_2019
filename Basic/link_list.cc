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

	}
	Node(int value){
		data=value;
		next=NULL;
	}
	/*~Node(){
		std::cout<<"Deleted Everything\n";
	}*/
};
Node* createNewnode(int value){
	Node* new_node=new Node();
	new_node->data=value;
	new_node->next=NULL;
	return new_node;
}
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
// Given only a pointer/reference to a node to be deleted in a singly linked list, how do you delete it?
// There is no pointer in to head so we can't traverse the linked list for this algo is as below
/*
 * 1. start loop
 * 		copy the data of next node in the node where pointer is given
 * 		continue till NULL encounter
 * 	2. delete the last empty node
 * 	3. PrevNode -> next =NULL;
 *
 *
 * */

Node* deleteNodewithPtr(Node* ptr){
	Node* temp;;
	while(ptr->next!=NULL){
		ptr->data=ptr->next->data;
		temp=ptr;
		ptr=ptr->next;
	}
	delete ptr;
	temp->next=NULL;
}


// Find the Middle Node of a link list
// Algo :
/*
 * 1. find the length of the link list
 * 2. if len is even then there will be two node as Middle Node
 * 		one is : the node at length len/2-1;
 * 		Another is : at length at len/2+1;
 * 	3. else Middle node is at length (l+1)/2;
 *
 * */
void findMidNode(Node* head_ref)
{
	Node* temp = head_ref;
	Node* current = head_ref;
	int len = 0;
	int count, count1;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if(len<=2){
		std::cout<<"Lenth is not sufficient Mid is not possbile"<<"\n";
		assert(0);
	}
	count=len/2;
	count1=(len+1)/2;
	if (len % 2 == 0)
	{
		std::cout << "As lenth is even then Middle Nodes are as " << "\n";
		while (count-1)
		{
			count--;
			current = current->next;

		}
		std::cout << "first Mid node is::" << current->data
			<< "\n";
		std::cout << "Second mid Node is::" << current->next->data
			<< "\n";

	}
	else
	{
		while (count1-1)
		{
			count1--;
			current = current->next;

		}
		std::cout << "Mid Node is ::" << current->data << "\n";
	}
}



int main(){
Node* head_ref=new Node(100);
insertatbeg(&head_ref,50);
insertatbeg(&head_ref,40);
insertatbeg(&head_ref,30);
insertatbeg(&head_ref,20);
insertatbeg(&head_ref,10);
insertatbeg(&head_ref,5);
std::cout<<"Node at pos 4 is "<< findNode(head_ref,4)<<"\n";
displayList(head_ref);
std::cout<<"Node at pos 3 is "<< findNode(head_ref,3)<<"\n";
std::cout<<"Node at pos 0 is "<< findNode(head_ref,0)<<"\n";
deleteNodewithPtr(head_ref);
displayList(head_ref);
findMidNode(head_ref);
delete head_ref;

}
