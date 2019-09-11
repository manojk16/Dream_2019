//
// Created by redbend on 03/09/2019.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
// 1. When we create an iterator of type ostream we need to speicfy for which type of the data we are going to iterate


// 2. Syntax :
// ostream_iterator<int> itr(cout,'') //
// here itr has 2 argument 1. is object cout and another is space
// so itr is initialize with the cout beacuse when this iterator outputs the cout oject it is separated with the space

// the below statement
// copy(intArray, intArray+9, itr) -> out put the element of intArray on the itr/screen
// copy(veclist.begin(),veclist.end(),itr) this statement is similiar to
// copy(veclist.begin(), veclist.end(), ostream_itearator<int> (cout,' '));

// This program illustrates how to use the function copy and
// an ostream iterator in a program.
//************************************


int main(){
    int intArray[]={5, 6, 8, 3, 40, 36, 98, 29, 75};
    vector<int> veclist(9);
    ostream_iterator<int> screen(cout," ");
    cout << "InArray *******" << endl;
    copy(intArray, intArray+9, screen);
    cout << endl;

    cout << "Veclist" <<endl;
    copy(intArray, intArray+9, veclist.begin());
    copy(veclist.begin(),veclist.end(),screen);
    cout << endl;
    cout << "Now In Line no. 41 from pos 1 to 9"<<endl;
    copy(intArray+1, intArray+9, screen);
    cout << endl;
    cout << "Again From the Begnining "<<endl;
    copy(intArray, intArray+9, screen);
    cout << endl;
    cout << "From last " <<endl;
    copy(veclist.rbegin()+2, veclist.rend(),screen);

    copy(veclist.rbegin()+2, veclist.rend(), veclist.rbegin());
    cout <<endl;
    cout <<"Again Veclist from Begning to End " <<endl;
    copy(veclist.begin(),veclist.end(),screen);
    cout <<endl;


   // copy()
    return 0;

}


