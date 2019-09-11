//
// Created by redbend on 11/09/2019.
//

#ifndef STACK_MYSTACK_H
#define STACK_MYSTACK_H
#include <iostream>
#include <cassert>
#include "stackADT.h"
#include "stackType.h"
template <class Type>
void stackType<Type>::initializeStack() {
    stackTop=0;
}
template<class Type>
bool stackType<Type>::isEmptyStack() {
    return (stackTop==0);

}
template<class Type>
bool stackType<Type>::isFullStack() {
    return(maxStackSize==stackTop);
}
template <class Type>
void stackType<Type>::push(const Type &newItem) {
    if(!isFullStack()){
        liststack[stackTop]=newItem;
        stackTop++;
    }else{
        std::cout<< "New Element can't be added \n";
    }

}
template <class Type>
Type stackType<Type>::Top() {
    assert(stackTop!=0);
    return liststack[stackTop-1];
}
template <class Type>
void stackType<Type>::pop(){
    if(!isEmptyStack()){
        stackTop--;
    }else{
        std::cout<<"Can Not remove the Element \n";
    }
}

// default constructor
template <class Type>
stackType<Type>::stackType(int stackSize) {
    if (stackSize <= 0)
    {
        std::cout << "Size of the array to hold the stack must "
                  << "be positive." << std::endl;
        std::cout << "Creating an array of size 100." << std::endl;
        maxStackSize = 100;
    }else{
        maxStackSize=stackSize;
        stackTop=0;
        liststack= new Type[maxStackSize];
    }

}

/* The function copyStack makes a copy of a stack. The stack to be copied is passed as a
parameter to the function copyStack. We will, in fact, use this function to implement
the copy constructor and overload the assignment operator. The definition of this
function is as follows
 * */


template <class Type>
void stackType<Type>::copyStack(const stackType<Type> &otherStack) {
    delete [] liststack;
    maxStackSize=otherStack.maxStackSize;
    stackTop=otherStack.stackTop;
    liststack = new Type[maxStackSize];
    // copy from other stack to this stack
    for(int i =0; i<stackTop;i++){
        liststack[i]=otherStack.liststack[i];
    }
}
// copy constructor
template <class Type>
stackType<Type>::stackType(const stackType<Type> &otherStack) {
    std::cout<<"In  copy Constructor \n";
    liststack= nullptr;
    copyStack(otherStack);
}

// overload assignment Operator
template <class Type>
const stackType<Type>& stackType<Type>::operator=(const stackType<Type> &otherStack) {
    std::cout<<"In assignment Operator Overload \n";
    if(this!= &otherStack)
        copyStack(otherStack);
    return *this;
}

// distructor
template <class Type>
stackType<Type>:: ~stackType(){
    delete [] liststack;
}
#endif //STACK_MYSTACK_H
