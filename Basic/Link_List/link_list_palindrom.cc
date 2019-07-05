/*
 * link_list_palindrom.cc
 *
 *  Created on: Jul 5, 2019
 *      Author: user1
 */
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
class Node{
public:
	char data;

	Node(char ch){
		data=ch;
	}
	Node* next;
};

bool isPalindrom(Node* head_ref){

	Node* current=head_ref;
	stack <char> s;
	while(current!=NULL){
		s.push(current->data);
		current=current->next;
	}
	while(head_ref!=NULL){
		int i=s.top();
		s.pop();
		if(head_ref->data!=i){
			return false;
		}
		head_ref=head_ref->next;
	}
	return true;

}

int main(){

	Node* node_one=new Node('R');
	Node* node_two=new Node('A');
	Node* node_three=new Node('D');
	Node* node_four=new Node('A');
	Node* node_five=new Node('R');

	node_five->next=NULL;
	node_one->next=node_two;
	node_two->next=node_three;
	node_three->next=node_four;
	node_four->next=node_five;
	Node* head_ref=node_one;


if(isPalindrom(head_ref)){
	cout<<"Plindrom exist\n";
}else{
	cout<<"There is no Palindrom\n";
}


	return 0;
}






