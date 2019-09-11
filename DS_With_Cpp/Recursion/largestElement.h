//
// Created by redbend on 11/09/2019.
//

#ifndef RECURSION_LARGESTELEMENT_H
#define RECURSION_LARGESTELEMENT_H
int largest(const int list[], int lowerIndex, int upperIndex){
    int max;
    if(list[lowerIndex]==list[upperIndex]){

        return list[lowerIndex];
    }else{
        max = largest(list, lowerIndex+1, upperIndex);
        if(max <= list[lowerIndex]){
            list[lowerIndex];
        }else{
            return max;
        }
    }
}

#endif //RECURSION_LARGESTELEMENT_H
