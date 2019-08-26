/*
 * 11_member_initialization_list.cc
 *
 *  Created on: Aug 2, 2019
 *      Author: user1
 */

// How to initialilize array with array size

#include <iostream>
using namespace std;

class Stack{
	int arraySize;
	int *array;
public:

	Stack(int arrsize)
			:arraySize{arrsize},
			 array{new int[arrsize]{}}{
		// Uniform Initialization as per c++11

	}

	void print_stack(){
		for(int i{0};i< arraySize;++i){
			cout<< "array[" << i << "] = " << array[i] << endl;
		}
	}
};



int main(){
	cout << " Enter Array size here " << endl;
	int size;
	cin >> size;
	Stack sample_stack{size};
	sample_stack.print_stack();
}

/*

#include <iostream>

class Stack
{
public:
  int arraySize;
  int *numArray;

public:
  Stack(int arrSize)
      : arraySize{ arrSize },
        // Initialize in the member initializer list and initialize the array
        // elements to 0.
        numArray{ new int[arrSize]{} }
  {
  }

  void printStack(void)
  {
    std::cout << std::endl;
    // Brace initialize
    for (int i{ 0 }; i < arraySize; ++i)
    {
      std::cout << "numArray[" << i << "] = " << numArray[i] << std::endl;
    }
  }
};

int main(void)
{
  std::cout << "Enter Array Size: ";
  int arraySize;
  std::cin >> arraySize;

  // Brace initialize
  Stack sample_stack{ arraySize };

  // Not required, because we're initializing numArray in the constructor.
  // You could use this loop to let the user input values.
  // Brace initialize
  // for (int i{ 0 }; i < sample_stack.arraySize; ++i)
  // {
  //   sample_stack.numArray[i] = 0;
  // }

  sample_stack.printStack();

  // return
  return 0;
}
*/
