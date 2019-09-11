//
// Created by redbend on 03/09/2019.
//

#ifndef LINKED_LIST_CPP_2_LINKEDLISTTYPE_H
#define LINKED_LIST_CPP_2_LINKEDLISTTYPE_H


#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

template <class Type>
class nodeType{
protected:
    Type data;
    nodeType<Type> *next;

};
template <class Type>
class linkListIterator{
private:

    nodeType<Type> *current ;// //pointer to point to the current Node in the linked list
public:
    linkListIterator();
    linkListIterator(nodeType<Type> *ptr);
    Type operator*(); // //Function to overload the dereferencing operator *.
    ////Postcondition: Returns the info contained in the node

    linkListIterator<Type> operator++();
    // Overload the preincrement operator.
    //Postcondition: The iterator is advanced to the next node.
    bool operator==(const linkListIterator<Type> &right) const;
    //  Overload the equality operator.
//Postcondition: Returns true if this iterator is equal to
// the iterator specified by right, otherwise it returns
// false.
    bool operator!=(const linkListIterator<Type> &right) const;
//Overload the not equal to operator.
//Postcondition: Returns true if this iterator is not equal to
// the iterator specified by right, otherwise it returns
// false

};
//template <class Type>
template <class Type>
linkListIterator<Type>::linkListIterator() {
    current=NULL;
}

template <class Type>
linkListIterator<Type>::linkListIterator(nodeType<Type> *ptr) {
    current=ptr;
}
template <class Type>
Type linkListIterator<Type>::operator*() {
    return current->data;
}
template <class Type>
linkListIterator<Type> linkListIterator<Type>::operator++() {
    current=current->next;
    return current;
}
template <class Type>
bool linkListIterator<Type>::operator==(const linkListIterator<Type> &right) const {
    return (current==right.current);
}
template <class Type>
bool linkListIterator<Type>::operator!=(const linkListIterator<Type> &right) const{
    return (current!= right.current);
}
#endif //LINKED_LIST_CPP_2_LINKEDLISTTYPE_H
