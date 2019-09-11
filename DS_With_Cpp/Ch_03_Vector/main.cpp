#include <iostream>
/*
vecList.at(index)                                 Returns the element at the position specified by index.
vecList[index]                                    Returns the element at the position specified by index.
vecList.front()                                   Returns the first element. (Does not check whether the container is empty.)
vecList.back()                                    Returns the last element. (Does not check whether the container is empty.)
vecList.clear()                                  Deletes all elements from the container.
vecList.erase(position)                         Deletes the element at the position specified by position.
vecList.erase(beg, end)                        Deletes all elements starting at beg until end-1.
vecList.insert(position, elem)                 A copy of elem is inserted at the position specified by position. The position of the new element is returned.
vecList.insert(position, n, elem)              n copies of elem are inserted at the position specified by position.
vecList.insert(position, beg, end)           A copy of the elements, starting at beg  until end-1, is inserted into vecList at the position specified by position.

 vecCont.capacity()                               Returns the maximum number of elements that can be inserted into the container vecCont without reallocation.
vecCont.empty()                              Returns true if the container vecCont is empty and false otherwise.
vecCont.size()                             Returns the number of elements currently in the container vecCont.
vecCont.max_size()                               Returns the maximum number of elements that can be inserted into the container vecCont.

 */
#include <iostream>
#include <vector>
#include <list>

using namespace std;
/*

int main(){
    vector<int> veclist;

}
*/


// Member function comman to all container

// Suppose that ct, ct1, and ct2 are containers of the same type
/*
Default constructor                              Initializes the object to an empty state.
Constructor with parameters                      In addition to the default constructor, every container has constructors with parameters. We
                                              describe these constructors when we discuss a specific container.
Copy constructor                                Executes when an object is passed as a parameter by value, and when an object is declared and initialized using another object of the same type.
Destructor                                       Executes when the object goes out of scope.
ct.empty()                                          Returns true if container ct is empty and false otherwise.
ct.size()                                           Returns the number of elements currently in container ct.
ct.max_size()                                      Returns the maximum number of elements that can be inserted into container ct.
ct1.swap(ct2)                                       Swaps the elements of containers ct1 and ct2.
ct.begin()                                      Returns an iterator to the first element into container ct.
ct.end()                                    Returns an iterator to the last element intocontainer ct.
ct.rbegin()                             Reverse begin. Returns a pointer to the last element into container ct. This function is used to process the elements of ct in reverse.
ct.rend()                               Reverse end. Returns a pointer to the first element into container ct.
ct.insert(position, elem)               Inserts elem into container ct at the position specified by the argument position. Note that here position is an iterator.
 ct.erase(begin, end)                       Deletes all elements between begin...end-1 from container ct.
*/


// Member Functions Common to Sequence Containers

/*
seqCont.insert(position, elem)                   A copy of elem is inserted at the position specified by position. The position of the new element is returned.
seqCont.insert(position, n, elem)                 n copies of elem are inserted at the position specified by position.
seqCont.push_back(elem)
seqCont.pop_back()                              Deletes the last element.
seqCont.erase(position)                          Deletes the element at the position specified by position.
seqCont.erase(beg, end)                            Deletes all elements starting at beg until end-1.
seqCont.clear()                               Deletes all elements from the container.
seqCont.resize(num)                          Changes the number of elements to num. If size() grows, the new elements are created by their default constructor.Changes the number of elements tonum. If size() grows, the new elements are copies of elem.

*/