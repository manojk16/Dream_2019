//
// Created by redbend on 11/09/2019.
//

#ifndef RECURSION_RDECIMALTOBINARY_H
#define RECURSION_RDECIMALTOBINARY_H
#include <iostream>
void rDecimalToBinary(int num, int base){
    if(num>0){
        rDecimalToBinary(num/base,base);
        std::cout<<num%base<<" ";
    }

}

#endif //RECURSION_RDECIMALTOBINARY_H
