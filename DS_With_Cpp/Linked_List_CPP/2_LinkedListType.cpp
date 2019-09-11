//
// Created by redbend on 03/09/2019.
//
#include "2_LinkedListType.h"
#include <cassert>
template <class Type>
class linkedListType{

public:
    const linkedListType<Type>& operator=(const linkedListType<Type> &right);
    void initializeList();
    bool isEmptyList() const;
    void print();
    int length() const;
    void destroyList();
    Type front();
    // //Function to return the first element of the list.
    // //Precondition: The list must exist and must not be empty.
    // post Condition : Postcondition: If the list is empty, the program terminates;
    // Otherwise it should returns the first element
    Type back();
    // function is to returns the last element of the list
    // Precondition: The list must exist
    // Post Condition :: If list doesnot exist program should terminiates
    // else it should returs the last element of the lsit
    virtual bool search(const Type &item) const =0;
    // Function to determine whether searchItem is in the list.
    ////Postcondition: Returns true if searchItem is in the list,
    //// otherwise the value false is returned.

    virtual void insertFirst(const Type &item) =0;
    //Function to insert newItem at the beginning of the list.
//Postcondition: first points to the new list, newItem is
// inserted at the beginning of the list, last points to
// the last node in the list, and count is incremented by
// 1.
    virtual void insertLast(const Type& newItem) = 0;
//Function to insert newItem at the end of the list.
//Postcondition: first points to the new list, newItem is
// inserted at the end of the list, last points to the
// last node in the list, and count is incremented by 1.


    virtual void deleteNode(const Type& deleteItem) = 0;
//Function to delete deleteItem from the list.
//Postcondition: If found, the node containing deleteItem is
// deleted from the list. first points to the first node,
// last points to the last node of the updated list, and
// count is decremented by 1.

    linkListIterator<Type> begin();
    //Function to return an iterator at the beginning of the
//linked list.
//Postcondition: Returns an iterator such that current is set
// to first
linkListIterator<Type> end();
//Function to return an iterator one element past the
//last element of the linked list.
//Postcondition: Returns an iterator such that current is set
// to NULL.

    linkedListType();
    linkedListType(const nodeType<Type> &);
    linkedListType(const linkedListType<Type> &otherlist);
    // copy Constructor

    ~linkedListType();
protected:
    int count ; // Varaible to couunt the number of element ;
    nodeType<Type> *first;
    nodeType<Type> *last;

private:
    void copyList(const linkedListType<Type>& otherList);
    // //Function to make a copy of otherList.
    ////Postcondition: A copy of otherList is created and assigned
    //// to this list.
    // This function is private becasue it is used only for implement the copy constructor and overload assignment operator
};
//const linkedListType<Type>& linkedListType :: operator=(const linkedListType<Type> &right){

template<class Type>
bool linkedListType<Type>::isEmptyList() const {
    return (first==nullptr);
}

// default constructor
template<class Type>
linkedListType<Type>::linkedListType() {
    first= nullptr;
    last= nullptr;
    count=0;
}
// Till Now from the definition of the isEmptylist() and default constructor Both the function is of O(1)
template<class Type>
void linkedListType<Type>::destroyList() {
    nodeType<Type> *Temp;
    while(first->next!=NULL){
        Temp= first;
        first=first->next;
        delete Temp;
    }
    last=nullptr; // Initialize last to null first already been initialize to null by while loop
    count=0; // as all list destroyed so set the count -=0;

    // In this While loop iterates also O(n) Times so ...
}

// Initialize the list


template<class Type>
void linkedListType<Type>::initializeList() {
    // We have to understand as constructor already initialize the list
    // asically here we are going to reinitialize the list
    // Or if any node exist destroy the list ans reinitialize
    destroyList();
}

// Print the list
template<class Type>
void linkedListType<Type>::print() {
    nodeType<Type> *current;
    current=first; // current pointer is to traverse the linked list
    while(current!=NULL){
        cout << current->data;
        current=current->next;
    }
    // This function takes O(n) Times
}
// Print the list
template<class Type>
int linkedListType<Type>::length() const {
   /* nodeType<Type> *temp;
    int len=0;
    temp=first;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;*/
   // as we have set count to store the number of node so just return the count
   return count;//

}

// Retrieve the Data of the First Node  or front
template<class Type>
Type linkedListType<Type>::front() {
    assert(first!=NULL);
    return first->data;
}
// Retrieve the Data of the Last Node or back
template<class Type>
Type linkedListType<Type>::back() {
    assert(last!=NULL);
    return last->data;
}

template<class Type>
linkListIterator<Type> linkedListType<Type>::begin() {
    linkListIterator<Type> temp(first);
    return temp;
}
template<class Type>
linkListIterator<Type> linkedListType<Type>::end() {
    linkListIterator<Type> temp(nullptr);
    return last;
}
// From the definitions of the functions length, front, back, begin, and end, it follows
//easily that each of these functions are of O(1).


/*************#########Copy the List **************/
/*In copy list we are assuming that we are having aotherlist and we have to copy this otherlist into our existing list*/

template <class Type>
void linkedListType<Type>::copyList(const linkedListType<Type> &otherList) {
    nodeType<Type> *current;
    nodeType<Type> *newNode;
    if(first!=NULL){
        destroyList();
    }
    if(otherList.first==NULL){
        first=NULL;
        last==NULL;
        count==0;
    }else{
        current=otherList.first;
        count=otherList.count;
        ////copy the first node
        first=new nodeType<Type>;
        first->data=current->data;
        first->next=NULL;
        last=first;
        current=current->next;

        while(current!=NULL){
            newNode= new nodeType<Type>;
            newNode->data=current->data;
            newNode->next=NULL;
            last->link=newNode;
            current=current->next;

        }


    }

}
/********************Copy Constructor *************************************/
template<class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type> &otherlist) {
  first=NULL;
  copyList(otherlist);
}
////////////////////*************************** Overload The Assignment Operatro ***********************/

template<class Type>
const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type> &right) {
    if(this!=right) // Avoid self copy
    {
        copyList(right);
    }else{
        return this;
    }
}
//////////***************************** Distructor ***********************/
template<class Type>
linkedListType<Type>::~linkedListType() {
    destroyList();

}

///*********************************Unordered Linked Lists*******************/
template<class Type>
class unorderedLinkedList:public linkedListType<Type>{
    public:
        unorderedLinkedList()=default;
        bool search(const Type &item) const;
        void insertFirst(const Type& newItem);
        void insertLast(const Type& newItem);
        void deleteNode(const Type& deleteItem);


    };
template<class Type>
bool unorderedLinkedList<Type>::search(const Type &item) const {
    nodeType<Type> *current;
    bool found;
    current=first;
    //current=unorderedLinkedList<Type>::first;
    while(current!=NULL && !found){
        if(item==current->data){
            found = true;
        }else{
            current=current->next;
        }
    }
    return found;
}
/******************************* Insert the Node at first Position **///////////////////

template<class Type>
void unorderedLinkedList<Type>::insertFirst(const Type &newItem) {
    nodeType<Type> *current;
    nodeType<Type> *newNode;
    newNode = new nodeType<Type>;
    newNode->data=newItem;
    newNode->next= unorderedLinkedList<Type>::first;
    unorderedLinkedList<Type>::first=newNode;
    if(unorderedLinkedList<Type>::last==NULL){
        // if the list is empty newNode will also be last Node
        // so
        unorderedLinkedList<Type>::last=newNode;
 ;
    }
}


int main(){
    cout << "Linked List is Ready to Used\n";
}

// page no.317