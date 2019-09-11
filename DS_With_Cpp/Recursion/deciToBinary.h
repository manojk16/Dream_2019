//
// Created by redbend on 11/09/2019.
//

#ifndef RECURSION_DECITOBINARY_H
#define RECURSION_DECITOBINARY_H
#include <iostream>
#include <vector>
#include <algorithm>
void deciToBinary(int num, int base){
    std::vector<int> vect;
    while(num>0){
        int r= num%base;
        vect.push_back(r);
        num=num/base;
    }
    std::reverse(vect.begin(),vect.end());
//    std::vector<int>::reverse_iterator it;
    /*for(it = vect.rbegin(); it != vect.rend(); ++it){
        std::cout<< *it << " " ;
    }*/
    for(auto i:vect){
        std::cout << i <<" ";
    }
    std::cout <<std::endl;
}
#endif //RECURSION_DECITOBINARY_H
