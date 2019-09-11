#include <iostream>
#include "largestElement.h"
#include <list>
#include <algorithm>
#include "PrintlistInreverse.h"
#include "FibnaciNumber.h"
#include "rprintFibnaaci.h"
#include "TowerHanoi.h"
#include "deciToBinary.h"
#include "rDecimalToBinary.h"
using namespace std;


int fact(int n){
    if(n==0|| n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}


int main() {
    std::cout << "Hello, Recursion!" << std::endl;
    int n=5;
    //std::cout<<"Enter the number whose Value you want to find out " << std::endl;
   // std::cin >> n ;
    std::cout<< "Factorial of " << n << " is " << fact(n) << std::endl;

    int array[]={23, 43, 35, 38, 67, 12, 76, 10, 34, 8};
    cout << "Largest element into given array is  :: " << largest(array, 0,9) <<endl;

    // Link list in revesr list
    list<int> linklist{23, 43, 35, 38, 67, 12, 76, 10, 34, 8};
   // reverseprintlist()
/* **********  Fibnaaci series *****************************************/
   /* std::cout<<"Enter The first number in to Fibnacci Sireies \n";
    int firstNunber;
    std::cin >> firstNunber;
    std::cout<<"Enter The second number in to Fibnacci Sereies \n";
    int secondNumber;
    std::cin >> secondNumber;
    std::cout<<"Enter The  Postion of the desired  number Fibnaaci Number \n" ;    int pos;
    std::cin >> pos;
    std::cout << "Desired Fibnaaci Number is " << rFibnnaciNumber(firstNunber,secondNumber,pos) <<std::endl;

    std::cout<<"The fibnaaci Series upto " << pos <<"th position is \n" ;
    int i=0;
    while(i<pos) {
        std::cout << rprintFibnaaci(i) << " ";

        i++;
    }
    std::cout << "\n";*/
    /*********************************  Tower Of Hanoi ****************/
    int needle1,needle2,needle3;
    needle1=1;
    needle2=2;
    needle3=3;
    int count;
   /* std::cout<<"Enter The Number of Disks \n";
    std::cin>>count;
    moveDisk(count,needle1,needle3,needle2);*/


    /*********************************  Dec to Binary with Out recrsion  ****************/
    std::cout <<"Enter The Number and Base \n";
    int base;
    int num;
    std::cin >> num ;
    std::cin >> base;
    deciToBinary(num,base);
    std::cout <<"Decimal to Binary Using recursion \n";
    rDecimalToBinary(num,base);
    cout<<"\n";



    return 0;
}