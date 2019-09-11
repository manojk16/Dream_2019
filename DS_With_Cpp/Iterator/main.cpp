#include <iostream>

// Two Most Comman Operation in the Iterator are :
// 1. ++
// 2. dereferencing Operator *
//
/***********************************************Types Of Iterator ****************************/
// 1. Input Iterator
// 2. OutPut Iterator
// 3. Forward Iterator
// 4. Bidirectional Iterator
// 5. random Iterator
/********************************Input Iterators  *********************************/

// Input Iterator with input read access and step forward element by element and returns the value step by step
// These itr used for reading the values from input stream

/**********************Operation on Input Iterators  *******************************/

// 1. *Input_iterator ->    Gives access to the element to which it access
// 2. Input_iterator->member   : Gives access to the member of the element.
// 3. ++Input_iterator : Moves Forward and returns the value
// Input_iterator++ : Returns the value and then moves  forward
// Input_iterator1==Input_iterator2
// Input_iterator1!=Input_iterator2; //   Copies the Iterator

//////////////////////////////////********Output Iterators*******************////////////////////

/*These are with the write access, retuns the value with step by step and write the data to the output stteam
 *
 *  *outputIterator - value     -> writes tehe value at postion specified buoutput iterator
 *  ++ outputIterator
 *  outputIterator++
 *  Type(outputIterator)
 *
 * */


/******************************************Forward Iterators*****************************************/

/*Forward Iterator Combines all the facility of input and output Iterator
 *
 *
 * */

///////////*******************Bidirectional Iterators********************/
// Bidirectional Iterators are the forward iterator who can move in backward direction aslo


/************************Operation On backWard ***////////////////////////////

/*
-- biDirectionalIterator   Moves backward, returns the new position (predecrement).
 biDirectionalIterator--   Moves backward, returns the old position (postdecrement).

 These are the additional Operation

*/

/****************************Random Access Iterators*****/////////
// Random access iterators are bidirectional iterators that can randomly process the elements of a container.
// These iterators can be used with containers of type vector, deque, string,
//and arrays.
// The operations defined for bidirectional iterators
//are also applicable to random access iterators





/********************************Stream Iterators*************************************/

// Another useful set of iterators is stream iterators—istream iterators and ostream iterators.
// istream_iterator The istream iterator is used to input data into a program from an input stream. The class istream_iterator contains the definition of an input
        //stream iterator. The general syntax to use an istream iterator is as follows:
// istream_iterator<Type> isIdentifier(istream&);
/*
ostream_iterator The ostream iterators are used to output data from a program into an output stream.
     ostream_iterator<Type> osIdentifier(ostream&);
                                or
ostream_iterator<Type> osIdentifier(ostream&, char* deLimit);
*/