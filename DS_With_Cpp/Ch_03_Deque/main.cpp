#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;


// Deque stands for double ended queue
// It is implemented as dynmic array such that element can be inserted from the both end
//******************Way to declare *******************
//1. deque<elementType> deq; // creates and empty deque
// 2. deque<elementType> deq(otherdeq) // deq is initialized withelement of otherdeq which is of the sametype
// 3. deque<elementType> deq(size); // creates a deque container of the size
// 4. deque<elementType> deq(n, elem);
// 5. deque<elementType> deq(begin,end);
// *****************Various operations that can be performed on a deque object*****************
/*
deque<int> deq;
int n;
int elem;
deq.assign(n,elem);// n copies of emen
deq.assign(begin,end);// assign all the range between beg to end-1;
deq.push_front(elem);
deq.pop_front();
deq.front() // returns the first Element
deq.last;// returns the last elemnt  //
 */