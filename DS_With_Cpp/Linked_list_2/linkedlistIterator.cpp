//
// Created by redbend on 10/09/2019.
//
#include "linkedlistIterator.h"
#include <cassert>
template<class Type>
class linkedListType{
public:
    // assignment Operator overloading
    const linkedListType<Type>& operator=(const linkedListType<Type> &right);
    void initializelist();
    bool isEmpty() const;
    void printlist() const;
    int length() const;
    void destroylist();
    Type front();
    Type back();
    virtual bool search(const Type& newItem) =0;
    virtual void insertfirst(const Type& newItem)=0;
    virtual void insertlast(const Type& newItem)=0;
    virtual void deleteNode(const Type& deleteItem) = 0;
    linkedlistIterator<Type> begin();
    linkedlistIterator<Type> end();

    // constructor
    linkedListType();
    linkedListType(const linkedListType<Type> &); // copy constructor

    virtual ~linkedListType();

protected:
    int count ;
    nodeType<Type> *first;
    nodeType<Type> *last;

private:
    void copylist(const linkedListType<Type> &otherlist);

};
template<class Type>
void linkedListType<Type>:: destroylist(){
    nodeType<Type> *temp;

    while(first->next!=NULL){
        temp=first;
        first=first->next;
        delete temp;
    }
    last= nullptr;
    count =0;

}
template <class Type>
void linkedListType<Type>::copylist(const linkedListType<Type> &otherlist) {
    nodeType<Type> *current;
    nodeType<Type> *newNode;
    if(first!=NULL){
        destroylist();
    }
    if(otherlist.first==NULL){
        first=nullptr;
        last= nullptr;
        count=0;
    }else{
        current=otherlist.first;
        count= otherlist.count;
        first= new nodeType<Type>;
        first->data=current->data;
        first->next= nullptr;
        last=first;
        current=current->next;
        while(current!=nullptr){
            newNode = new nodeType<Type>;
            newNode->data= current->data;
            newNode->next= nullptr;
            last->next=newNode;
            current=current->next;
        }
    }


}
template<class Type>
const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type> &right){
    if(right!=this) // Avoid Self copy

        copylist(right);
    else
        return this;


}

template<class Type>
void linkedListType<Type> ::initializelist() {
    destroylist();
}
template<class Type>
bool linkedListType<Type> ::isEmpty() const {
    return (first== nullptr);
}
template<class Type>
void linkedListType<Type>::printlist() const {
    nodeType<Type> *current;
    current=first;
    while(current!= nullptr){
        cout << current->data << " " ;
        current=current->next;
    }
}

template<class Type>
int linkedListType<Type>::length() const {
    return count;
}
template<class Type>
Type linkedListType<Type>::front() {
    assert(first!= nullptr);
    return first->data;
}
template<class Type>
Type linkedListType<Type>::back(){
    assert(first!= nullptr);
    return last->data;
}

template<class Type>
linkedlistIterator<Type> linkedListType<Type>::begin() {
    linkedlistIterator<Type> temp(first);
    return temp;
}
template<class Type>
linkedlistIterator<Type> linkedListType<Type>::end(){
    linkedlistIterator<Type> temp(nullptr);
    return temp;
}

// constructor
template<class Type>
linkedListType<Type>::linkedListType() {
    first= nullptr;
    last= nullptr;
    count=0;
}
template<class Type>
linkedListType<Type>::~linkedListType() {
    destroylist();
}
// copy Constructor
template<class Type>
linkedListType<Type> ::linkedListType(const linkedListType<Type> &other) {
    first=nullptr;
    copylist(other);
}
template<class Type>
class unorderedLinkedList: public linkedListType<Type>
{
    public:
    bool search(const Type& newItem);
    void insertfirst(const Type& newItem) ;
    void insertlast(const Type& newItem)  ;
    void deleteNode(const Type& deleteItem)  ;

    };

template <class Type>
bool unorderedLinkedList<Type>::search(const Type &newItem) {
    nodeType<Type> *current;
    bool found = false;
    current = first;  // why first not getting access here
    while (current != NULL && !found)
        if (current->next== newItem)
            found = true;
}