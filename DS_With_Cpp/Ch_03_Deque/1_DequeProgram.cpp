//
// Created by redbend on 03/09/2019.
//

// This program illustrates how to use a deque container in program
#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <iostream>

using namespace std;



int main(){
    deque<int> deq;
    ostream_iterator<int> screen(cout," ");
    deq.push_back(13);
    deq.push_back(20);
    deq.push_back(28);
    deq.push_back(35);
    cout << "Display the deq element \n";
    copy(deq.begin(),deq.end(),screen);
    cout <<endl;
    deq.push_front(0);
    deq.push_back(100);
    cout << "After Adding 0 in front and 100 at last \n";
    copy(deq.begin(),deq.end(),screen);
    cout<<endl;
    deq.pop_front();
    deq.pop_front();
    cout << "Two Elements removed from the beg\n";
    copy(deq.begin(),deq.end(),screen);
    cout<<endl;
    deq.pop_back();
    deq.pop_back();
    cout << "Two Elements removed from the back\n";
    copy(deq.begin(),deq.end(),screen);
    cout<<endl;
    deque<int>::iterator itr;
    itr=deq.begin();
    ++itr; // points to the 2nd Element
    deq.insert(itr,444);
    cout << "After Inserting 444 \n";
    copy(deq.begin(),deq.end(),screen);
    cout<<endl;



    return 0;
}
