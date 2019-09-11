#include <iostream>
#include "mystack.h"
using namespace std;

int main() {
    std::cout << "Hello, Stack!" << std::endl;
    stackType<int> stack(50);
    stackType<int> copystack(50);
    stackType<int> dummystack(100);

    stack.initializeStack();
    stack.push(23);
    stack.push(50);
    stack.push(60);
    copystack=stack; // assignment operator called
    cout << "Elements Of the Copystack are \n";
    while(!copystack.isEmptyStack()){
        cout<< copystack.Top()<<" ";
        copystack.pop();
    }
    cout<<endl;
    // Test The Copy constructor
    stackType<int> Testcopy=stack;


    return 0;
}