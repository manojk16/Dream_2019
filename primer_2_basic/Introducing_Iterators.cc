/*
 * Introducing_Iterators.cc
 *
 *  Created on: Jul 26, 2019
 *      Author: user1
 */
/*
* A valid iterator either denotes an element or denotes a position one past the
* last element in a container.
* Unlike pointers, we do not use the address-of operator to obtain an iterator. Instead,
* types that have iterators have members that return iterators. In particular, these types
* have members named begin and end.
* The iterator returned by end is an iterator positioned “one past the end” of the
* associated container (or string).
*
* If the container is empty, begin returns the same iterator as the one returned by end.
*
* ****************Operation***********************
*    *iter: returns the refrence to the elements denoated by the elemenst iter
*    iter->mem: Dereference the iter and fetch the member element named with the mem, ==(*iter.mem)
*    ++ iter incement the iter to the next position inide the container
*    -- iter .decrement --------------------------------------------
*    iter!=iter1
*    iter1==iter2
* Technically speaking, a string is not a container type, but string supports many of the container
operations. As we’ve seen string, like vector has a subscript operator. Like
vectors, strings also have iterators.
Like pointers (§ 2.3.2, p. 52), iterators
****************************************************************************
* Combining deference and member access
*  (*it).empty()
*  in the above statement parenthesis around "it" is required first "it" get dereference and then . operator get applied.
*  these two operator * and . can be replced be a single operator that is member access "->" operator
*
*   ************************************begin() and end()**************************************
*   The begin() and end() return type depends upon the object on which they operates weather it is a const or non const
*   if the object is const then begin() and end() returns the const itrator or it simple returns the iterator
*   / This behvaiuour is not right istead of this we can use const iterator (const_it) when we need to read and iterator when we want to write
*
*
*   ****************************cbegin() and  cend()**************************************\\
*
*/

#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;


int main(){

	string s="manoj";
	if(s.begin()!=s.end()){
		auto iter=s.begin();
		*iter=toupper(*iter);
		string::iterator it=s.end()-1;
		*it=toupper(*it);

	}
	cout<<"Sting is:: "<< s <<endl;


	//Moving Iterators from One Element to Another
	string s1="manoj kumar";
	for(auto it=s1.begin();it!=s1.end() && !isspace(*it);it++){
	//	*it=toupper(*it);

		cout<<"Sting is:: "<< s1 <<endl;


		 vector<int> v;
		 const vector<int> vec;
		 auto it=v.begin();
		 auto it_const=vec.begin();

	return 0;
}

