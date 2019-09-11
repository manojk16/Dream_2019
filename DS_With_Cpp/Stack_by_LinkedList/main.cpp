#include "linkedStackType.h"
using namespace std;
void testCopy(linkedStackType<int> OStack)
{
    cout << "Stack in the function testCopy:" << endl;
    while (!OStack.isEmptyStack())
    {
        cout << OStack.Top() << endl;
        OStack.pop();
    }
}
int main() {
    std::cout << "Hello, Linked List Implementation of The STACK !" << std::endl;
    linkedStackType<int> stack;
    linkedStackType<int> otherStack;
    linkedStackType<int> newStack;
    stack.push(23);
    stack.push(29);
    stack.push(19);
    newStack = stack;
    cout << "After the assignment operator, newStack: "
         << endl;
    while(!newStack.isEmptyStack()){
        cout << newStack.Top() << endl;
        newStack.pop();
    }
    otherStack = stack;
    cout << "Testing the copy constructor." << endl;
    testCopy(otherStack);
    cout << "After the copy constructor, otherStack: " << endl;
    while (!otherStack.isEmptyStack())
    {
        cout << otherStack.Top() << endl;
        otherStack.pop();
    }

    return 0;
}