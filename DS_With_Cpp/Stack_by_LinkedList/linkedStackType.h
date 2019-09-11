//
// Created by redbend on 11/09/2019.
//

#ifndef STACK_BY_LINKEDLIST_LINKEDSTACKTYPE_H
#define STACK_BY_LINKEDLIST_LINKEDSTACKTYPE_H
#include "../Stack_by_Array/stackADT.h"
#include "nodeType.h"
#include <iostream>
#include <cassert>
template <class Type>
class linkedStackType:public stackADT<Type>{
private:
    nodeType<Type> *stackTop; //pointer to the stack
    void copyStack(const linkedStackType<Type>& otherStack);
//Function to make a copy of otherStack.
//Postcondition: A copy of otherStack is created and
// assigned to this stack.
public:
// overload assignment operator
const linkedStackType<Type> &operator=(const linkedStackType<Type> &);
bool isEmptyStack();
bool isFullStack();
void push(const Type&);
void initializeStack();
Type Top();
void pop() ;
// Default Constructor
linkedStackType();
//copy constructor
linkedStackType(const linkedStackType<Type> &);
~linkedStackType();
};
template <class Type>
linkedStackType<Type>::linkedStackType() {
    stackTop= nullptr;
}

template <class Type>
bool linkedStackType<Type>::isEmptyStack() {
    return (stackTop== nullptr);
}
template <class Type>
bool linkedStackType<Type>::isFullStack() {
    return false;
}
// Initialize Stack to an empty state

template <class Type>
void linkedStackType<Type>::initializeStack() {
    nodeType<Type> *temp;
    while(stackTop!= nullptr)
    {
        temp=stackTop;
        stackTop=stackTop->next;
        delete temp;
    }
}

template <class Type>
void linkedStackType<Type>::push(const Type &newItem) {

        nodeType<Type> *newNode;
        newNode = new nodeType<Type>;
        newNode->data=newItem;
        newNode->next=stackTop;
        stackTop=newNode;

}

template <class Type>
Type linkedStackType<Type>::Top() {
    assert(stackTop != nullptr);
    return (stackTop->data);
}

template <class Type>
void linkedStackType<Type>::pop(){
    nodeType<Type> *temp;
    if(stackTop!= nullptr){
        temp = stackTop;
        stackTop=stackTop->next;
        delete temp;
    }else{
        std::cout <<"Can not be removed from the Empty Stack \n";
    }
}
template <class Type>
void linkedStackType<Type>::copyStack(const linkedStackType<Type> &otherStack) {
    nodeType<Type> *current, *last,*newNode;
    if(stackTop!= nullptr){
        initializeStack(); //means if non empty make exiting list empty
    }


    if(otherStack.stackTop== nullptr){
        stackTop= nullptr;
    }else{
        current=otherStack.stackTop;
        stackTop=new nodeType<Type>;
        stackTop->data=current->data;
        stackTop->next= nullptr;
        last=stackTop;
        current=current->next;
        while(current!= nullptr){
            newNode = new nodeType<Type>;
            newNode->data=current->data;
            newNode->next= nullptr;
            last->next=newNode;
            last=newNode;
            current=current->next;
        }

    }
}
// copy construtor
template <class Type>
linkedStackType<Type> ::linkedStackType(const linkedStackType<Type> &otherstack) {
    std::cout<<"In Copy Constructor \n";
    stackTop= nullptr;
    copyStack(otherstack);
}
template <class Type>
linkedStackType<Type>::~linkedStackType() {
    initializeStack();
}
template <class Type>
const linkedStackType<Type>& linkedStackType<Type>::operator=(const linkedStackType<Type> &otherstack) {
    std::cout<<"In assignment Operator\n";
    if(this!=&otherstack){
        copyStack(otherstack);
    }else{
        return *this;
    };
}
#endif //STACK_BY_LINKEDLIST_LINKEDSTACKTYPE_H
