//
// Created by redbend on 11/09/2019.
//

#ifndef RECURSION_RPRINTFIBNAACI_H
#define RECURSION_RPRINTFIBNAACI_H
int rprintFibnaaci(int n){
    if(n==1 || n==0){
        return n;
    }else{
        return rprintFibnaaci(n-1) + rprintFibnaaci(n-2);
    }
}
#endif //RECURSION_RPRINTFIBNAACI_H
