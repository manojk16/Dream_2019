//
// Created by redbend on 11/09/2019.
//

#ifndef RECURSION_FINNACINUMBER_H
#define RECURSION_FINNACINUMBER_H
int rFibnnaciNumber(int a, int b, int n){
    if(n==1){
        return a;
    }else if(n==2){
        return b;
    }else{
        return rFibnnaciNumber(a,b,n-1)+rFibnnaciNumber(a,b,n-2);
    }
}
#endif //RECURSION_FINNACINUMBER_H
