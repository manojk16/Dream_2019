//
// Created by redbend on 10/09/2019.
//

#ifndef LINKED_LIST_2_LINKEDLISTITERATOR_H
#define LINKED_LIST_2_LINKEDLISTITERATOR_H
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

template<class Type>
class nodeType{
public:
    Type data;
    nodeType<Type> *next;
    nodeType()= default;

};
template<class Type>
class linkedlistIterator{
private:

    nodeType<Type> *current ;// //pointer to point to the current Node in the linked list
public:
    linkedlistIterator();
    linkedlistIterator(const nodeType<Type> *);
    Type operator*();
    linkedlistIterator<Type> operator++();
    bool operator==(const linkedlistIterator<Type> &right) const;
    bool operator!=(const linkedlistIterator<Type> &right) const;


};
template<class Type>
linkedlistIterator<Type>::linkedlistIterator() {
    current=NULL;
}
template<class Type>
linkedlistIterator<Type>::linkedlistIterator(const nodeType<Type> *ptr) {
    current=ptr;
}
template<class Type>
Type linkedlistIterator<Type>::operator*() {
    return  current->data;
}
template<class Type>
linkedlistIterator<Type> linkedlistIterator<Type>::operator++() {
    current=current->next;
    return current;
}

template<class Type>
bool linkedlistIterator<Type>::operator==(const linkedlistIterator<Type> &right) const{
    return (current == right.current);
}
template<class Type>
bool linkedlistIterator<Type>::operator!=(const linkedlistIterator<Type> &right) const{
    return (current!=right.current);
}
#endif //LINKED_LIST_2_LINKEDLISTITERATOR_H
