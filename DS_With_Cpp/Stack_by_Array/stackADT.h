//
// Created by redbend on 11/09/2019.
//

#ifndef STACK_STACKADT_H
#define STACK_STACKADT_H

template<class Type>
class stackADT{
public:
    virtual void initializeStack()=0;
    virtual bool isEmptyStack()=0;
    virtual bool isFullStack()=0;
    virtual void push(const Type&) =0 ;
    virtual int Top()=0;
    virtual void pop() = 0;

};
#endif //STACK_STACKADT_H
