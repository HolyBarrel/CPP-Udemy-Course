#ifndef ARRAY_STACK_H

#define ARRAY_STACK_H

#include "Stack.h"
#include <iostream>

using namespace std;

class ArrayStack : public Stack
{
    public:
        ArrayStack(int s = 16) : MAX_SIZE(s) 
        {
            top = -1;
            thisArray = new int[MAX_SIZE];
        }       
        
        void push(int entry)
        {

            if(top < MAX_SIZE - 1)
            {
                top++;
                thisArray[top] = entry;
            }
            else 
            {
                cout << "Error: the stack is full! Could not push additional integer!" << endl;
            }
        }

        int pop()
        {
            int data = -1;

            if(!isEmpty())
            {
                data = thisArray[top];
                top--;
            }
            return data;
        }

        int peek()
        {
            if(!isEmpty()) return thisArray[top];
            return -1;
        }

        bool isEmpty()
        {  
            return top == -1;

        }

        void makeEmpty()
        {
            top = -1;
        }

    private:

        int* thisArray;
        const int MAX_SIZE;
        int top;

};

#endif