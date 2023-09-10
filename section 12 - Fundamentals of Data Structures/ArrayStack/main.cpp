#include <iostream>
#include "./models/ArrayStack.h"

using namespace std;

int main() 
{
    ArrayStack stack; 

    for (int i = 0; i < 17; i ++) 
        stack.push(i);



    ArrayStack secondaryStack;

     cout << "Primary stack: " << endl;
    while (!stack.isEmpty()) //sets the primary stack in the inverse order into the secondary stack
    {
        int temp = stack.pop();
        cout << temp << endl;
        secondaryStack.push(temp);
    }


    cout << "Secondary stack: " << endl;
    while(!secondaryStack.isEmpty())
    {
        cout << secondaryStack.pop() << endl;
    }

    return 0;
}