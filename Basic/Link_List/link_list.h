/*
 * link_list.h
 *
 *  Created on: Jul 5, 2019
 *      Author: user1
 */
#include <iostream>
#ifndef LINK_LIST_H_
#define LINK_LIST_H_

class Node {
public:
	int data;
	Node* next;
	Node()
	{
		//std::cout<<"Constructor get called\n";

	}
	Node(int value)
	{
		data = value;
		next = NULL;
	}
	~Node()
	{
		std::cout << "Deleted Everything\n";
	}
};

Node* createNewnode(int value)
{
	Node* new_node = new Node();
	new_node->data = value;
	new_node->next = NULL;
	return new_node;
}


void insertatbeg(Node** head_ref, int value)
{
	Node* temp = (*head_ref);
	//Node* new_node=createNewnode(value);
	Node* new_node = new Node(value);
	if (temp == NULL)
	{
		std::cout << "Link List Is empty enter the very first Node\n";
		(*head_ref) = new_node;
	}
	else
	{
		new_node->next = temp;
		(*head_ref) = new_node;

	}
}
void displayList(Node* head_ref)
{
	Node* current = head_ref;
	if (current == NULL)
	{
		std::cout << "Nothing to display\n";
	}
	else
	{
		while (current != NULL)
		{
			std::cout << current->data << " ";
			current = current->next;
		}

	}
	std::cout << "\n";
}
Node* insert(){
		Node* head_ref = new Node(100); // First Node
		/**** 1. Insertion**********************/

		insertatbeg(&head_ref, 50);
		insertatbeg(&head_ref, 50);
		insertatbeg(&head_ref, 40);
		insertatbeg(&head_ref, 20);
		insertatbeg(&head_ref, 10);
		insertatbeg(&head_ref, 10);
		return head_ref;

}
#endif /* LINK_LIST_H_ */
