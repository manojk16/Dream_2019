//
// Created by redbend on 11/09/2019.
//

#ifndef STACK_STACKTYPE_H
#define STACK_STACKTYPE_H
#include <iostream>
#include "stackADT.h"

template<class Type>
class stackType:public stackADT<Type>{
private:
    int maxStackSize;
    int stackTop;  // varaible to point to the top of the stack
    Type *liststack; //pointer to the array that holds the stack elements and due to this we have to overloads the assignment operator and copy constructor
    void copyStack(const stackType<Type> &otherStack);
public:
    // Ovrloads the assignment operator
    const stackType<Type>& operator=(const stackType<Type> &otherStack);
    void initializeStack(); // Initialize stack to Empty State
    bool isEmptyStack();
    bool isFullStack();
    void push(const Type& newItem);
    Type Top(); // Returns the Toip element of the stack
    void pop(); // Removes the Top element from the stack
    // constructor
    stackType(int size=100);
    stackType(const stackType<Type> &otherStack);// copy constructor
    ~stackType();
};
#endif //STACK_STACKTYPE_H

