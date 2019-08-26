/*
 * BST.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1
 */

#include <iostream>
using namespace std;

struct BST_NODE{
	int data;
	BST_NODE* left;
	BST_NODE* right;
};
BST_NODE* getNewnode(int value){
	BST_NODE* new_node=new BST_NODE();
	new_node->data=value;
	new_node->left=new_node->right=nullptr;
	return new_node;
}
void insert(BST_NODE** root_ref, int value){
	BST_NODE* temp=(*root_ref);

	if(temp == nullptr){
		(*root_ref)=getNewnode(value);

	}
	else if (value <= temp->data){
		insert(&temp->left,value);
	} else{
		insert(&temp->right,value);
	}
}
int FindMax(BST_NODE* root_ref){
	BST_NODE* current=root_ref;
	if(current==nullptr){
		return -1;
	} else{
		while(current->right!=nullptr){
			current=current->right;
		}
	}
	return current->data;
}
int findHeight(BST_NODE* root_ref){
	// The logic here is the height of any node(root) is Max of height of left subtree
	// and height of right subtree + 1,
	// this + 1 is for the edges which are connecting to the root node from left sub tree and right subtree

	// Base condition
	if(root_ref==nullptr){
		return -1;
		// Why -1 : because if 0 is return then total height will be max(0,0)+1 =1
		// This confirms that height of the empty tree is -1;
	}
	int leftHeight=findHeight(root_ref->left);
	int rightHeight=findHeight(root_ref->right);
	int height=max(leftHeight,rightHeight)+1;

}


int FindMin(BST_NODE* root_ref){
	BST_NODE* current=root_ref;
	if(current==nullptr){
		return -1;
	} else{
		while(current->left!=nullptr){
			current=current->left;
		}
	}
		return current->data;
}

int main(){
	BST_NODE *rootptr=nullptr;

	insert(&rootptr,15);
	insert(&rootptr,10);
	insert(&rootptr,20);
	insert(&rootptr,25);
	insert(&rootptr,8);
	insert(&rootptr,12);
	cout << "Minimum element in the tree is :: " << FindMin(rootptr)<< endl;
	cout << "Max element in the tree is :: " << FindMax(rootptr)<< endl;
	cout << "Height of the tree is :: " << findHeight(rootptr) <<endl;
	return 0;
}
