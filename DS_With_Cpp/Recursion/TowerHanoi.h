//
// Created by redbend on 11/09/2019.
//
/* Psuedo code
 *1.  Move the top n - 1 disks from needle 1 to needle 2, using needle 3 as
the intermediate needle.
2. Move disk number n from needle 1 to needle 3.
3. Move the top n-1 disks from needle 2 to needle 3, using needle 1 as
the intermediate needle.
 * */

#ifndef RECURSION_TOWERHANOI_H
#define RECURSION_TOWERHANOI_H
#include <iostream>
void moveDisk(int count, int needle1, int needle3, int needle2  ){
    if(count>0){
        moveDisk(count-1,needle1, needle2,needle3);
        std::cout<<"Move disk " << count << " from " << needle1 << " to " << needle3 <<" . " << std::endl;
        moveDisk(count-1,needle2, needle3,needle1);
    }

}
#endif //RECURSION_TOWERHANOI_H
