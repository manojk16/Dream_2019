//
// Created by redbend on 11/09/2019.
//

#ifndef STACK_BY_LINKEDLIST_NODETYPE_H
#define STACK_BY_LINKEDLIST_NODETYPE_H
template <class Type>
class nodeType{
public:
    Type data;
    nodeType<Type> *next;
};

#endif //STACK_BY_LINKEDLIST_NODETYPE_H
