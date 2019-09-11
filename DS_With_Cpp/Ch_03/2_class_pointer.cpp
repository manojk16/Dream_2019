//
// Created by redbend on 02/09/2019.
//
// Array-Based Lists
#include <iostream>
using namespace std;
template<typename elemType>

// Class and Pointer
class arrayListType{
public:

    const arrayListType<elemType>& operator=(const arrayListType<elemType> &);
    bool isempty() const;
    bool isFull() const;
    int ListSize() const;
    int maxListSize() const ;
    void print();
    bool isItemequal(int location, const elemType&);




};

