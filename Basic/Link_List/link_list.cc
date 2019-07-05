/*
 * link_list.cc
 *
 *  Created on: Jul 3, 2019
 *      Author: user1
 */

#include <iostream>
#include <assert.h>
#include "link_list.h"


int findNode(Node* head_ref, int pos)
{
	int count = 0;
	int nodeNumber = pos;
	Node* temp_ptr = head_ref;
	while (temp_ptr != NULL)
	{
		if (count == pos)
		{
			//std::cout<<"Value of the "<<nodeNumber<<" is "<<temp_ptr->data<<"\n";
			return temp_ptr->data;
		}
		count++;
		temp_ptr = temp_ptr->next;
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

Node* deleteNodewithPtr(Node* ptr)
{
	Node* temp;
	while (ptr->next != NULL)
	{
		ptr->data = ptr->next->data;
		temp = ptr;
		ptr = ptr->next;
	}
	delete ptr;
	temp->next = NULL;
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
/*********************************************/
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
	if (len <= 2)
	{
		std::cout << "Length is not sufficient Mid is not possbile" << "\n";
		assert(0);
	}
	count = len / 2;
	count1 = (len + 1) / 2;
	if (len % 2 == 0)
	{
		std::cout << "As length is even then Middle Nodes are as " << "\n";
		while (count - 1)
		{
			count--;
			current = current->next;

		}
		std::cout << "first Mid node is::" << current->data << "\n";
		std::cout << "Second mid Node is::" << current->next->data << "\n";

	}
	else
	{
		while (count1 - 1)
		{
			count1--;
			current = current->next;

		}
		std::cout << "Mid Node is ::" << current->data << "\n";
	}
}
/*******************************************************************/
/*Program for n’th node from the end of a Linked List
 * Algorithm :
 * 	1. Count the number of Nodes in to the list lets say m
 * 	2. traverse from head to the (m-n+1)th Node.
 * 	3. Return data
 * */
// head_ref= ref to the head
// n nodes number to be find out from the end;
int FindNodefromend(Node *head_ref, int n)
{
	Node* temp = head_ref;
	Node* current = head_ref;
	int count = 0;
	int pos = 0;
	if (temp == NULL)
	{
		std::cout << "Linked List is Empty so terminalte the prog\n";
		assert(0);
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		pos = count - n;
	}
	while (pos-- && current->next)
	{
		current = current->next;
	}
	return current->data;

}
/**********************Write a function to delete a Linked List*****************/
void deleteList(Node** head_ref)
{
	Node* temp = *head_ref;
	Node* current;
	if (temp == NULL)
	{
		std::cout << "Linked List is Empty terminate the program\n";
		assert(0);
	}
	else
	{
		while (temp != NULL)
		{
			current = temp;
			temp = temp->next;
			delete current;
		}
		(*head_ref) = NULL;
		std::cout << "Linked List Deleted " << "\n";
	}
}
/************************function that counts the number of times a given int occurs in a Linked List*************/
/*
 * Given a singly linked list and a key, count number of occurrences of given key in linked list
 *
 * */
int countOccurance(Node* head_ref, int key)
{
	Node* temp = head_ref;
	int count = 0;
	while (temp != NULL)
	{
		if (key == temp->data)
		{
			count++;
		}
		temp = temp->next;
	}
	return count;
}

/*******function to return the reversed Linked List***********
 *
 *
 */
Node* reversedLinkedList(Node** head_ref)
{
	Node* current_node = *head_ref;
	Node* previous_node = NULL;
	Node* next_node = NULL;
	if (current_node == NULL || current_node->next == NULL)
	{
		std::cout << "There is either One Node to Empty Linked List So exit\n";
		return *head_ref;
	}
	else
	{
		while (current_node != NULL)
		{
			next_node = current_node->next; // Point to the Next Node
			current_node->next = previous_node; // Linked the current->next to the previous in case of first node it is previous Node=NULL
			previous_node = current_node; // Now previous Node having same address as current Node
			current_node = next_node;
		}

		(*head_ref) = previous_node;
	}
	return *head_ref;

}

/************************** Function to Recursive Reversed Linked list********************/

Node* recursivereverseLinkedList(Node* head_ref)
{
	Node* current_node = head_ref;

	if (current_node == NULL || current_node->next == NULL)
	{
		return head_ref;
	}
		Node* Rnode=recursivereverseLinkedList(head_ref->next);
		(head_ref->next)->next=head_ref;
		head_ref->next=NULL;
		return Rnode;
}
/***************Function to Detect the loop in a Linked List**********/

int detectLoop(Node* head_ref){
	Node* slow_ptr=head_ref;
	Node* fast_ptr=head_ref;
	while(slow_ptr && fast_ptr ){
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(slow_ptr==fast_ptr){
			return 1;

		}
	}
	return 0;
}

/*******************************************************************/
int main()
{
	/*Node* head_ref = new Node(100);
	*** 1. Insertion*********************

	insertatbeg(&head_ref, 70);
	insertatbeg(&head_ref, 60);
	insertatbeg(&head_ref, 50);
	insertatbeg(&head_ref, 50);
	insertatbeg(&head_ref, 30);
	insertatbeg(&head_ref, 10);
*/
	Node* head_ref=insert();
	/***************** 2. find nth Node********************************/

	/*std::cout<<"Node at pos 4 is "<< findNode(head_ref,4)<<"\n";
	 displayList(head_ref);
	 std::cout<<"Node at pos 3 is "<< findNode(head_ref,3)<<"\n";
	 std::cout<<"Node at pos 0 is "<< findNode(head_ref,0)<<"\n";*/

	/**************3. delete only node at which pointer is given*************/
/*
//deleteNodewithPtr(head_ref);
	/*************4. display****************/

//	displayList(head_ref);

	/************************5. find the middle Node *************************/

//findMidNode(head_ref);
	/**********************6. find nth Nodes from the End******************/

//	int nodeData = FindNodefromend(head_ref, 7);

//	std::cout << "7th Node from the End is: " << nodeData << "\n";
	/*********************7. Delete The list*****/
//deleteList(&head_ref);

//	displayList(head_ref);

	/**********************8. counts the number of times a given int occurs in a Linked List ****************************/
//	std::cout << "key=50 occurs " << countOccurance(head_ref, 50) << " times"<< "\n";
	/*********************************9. Reverse The Linked List***************/
//	std::cout<<"Reversed Linked List\n";
//	Node *reverseList = reversedLinkedList(&head_ref);

	/********************************10. */
//	displayList(reverseList);
	/*********************/


	/****************** Recursive Linked List ****************/
// std::cout<<"Recursive Reversed Linked List\n";
//	Node* Rnode=recursivereverseLinkedList(head_ref);

//	displayList(Rnode);
	head_ref->next->next->next->next=head_ref;
int loop=detectLoop(head_ref);
if(loop==1){
	std::cout<<"Loop exist\n";
}else{
	std::cout<<"loop does not exist\n";
}

	delete head_ref;

}
