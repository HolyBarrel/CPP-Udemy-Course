#ifndef STACK_H

#define STACK_H

//LIFO Data Structure
class Stack
{
    public: 
        virtual void push(int entry) = 0;
        virtual int pop() = 0;
        virtual int peek() = 0;
        virtual bool isEmpty() = 0;
        virtual void makeEmpty() = 0;
};

#endif