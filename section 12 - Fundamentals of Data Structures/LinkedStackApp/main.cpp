#include "models/LinkedStack.h"
#include <iostream>
using namespace std;

void printStack(LinkedStack& printStack);

int main() 
{
    LinkedStack stack; 

    stack.push(1020);
    stack.push(120);
    stack.push(102);
    stack.push(10);
    stack.push(1);
    stack.push(1020);

    cout << "Peeking into the stack: " << stack.peek() << endl;

    printStack(stack);
    printStack(stack);



    return 0;
}


void printStack(LinkedStack& printStack)
{
    LinkedStack tempStack;

    cout << "Printing the stack: " << endl;
    int temp;
    while(!printStack.isEmpty())
    {
        temp = printStack.pop(); 
        cout << temp << endl;
        tempStack.push(temp);
    }

    while(!tempStack.isEmpty()) printStack.push(tempStack.pop());
}
