#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#include "Queue.h"
#include <iostream>
using namespace std; 

class ArrayQueue : public Queue
{
    public:
        ArrayQueue(int s = 16) : MAX_SIZE(s)
        {
            front = 0;
            back = 0;
            mArray = new int[MAX_SIZE];
            numElements = 0;
        }

        virtual ~ArrayQueue()
        {
            delete[] mArray;
        }

        void enqueue(int newEntry)
        {
            if (numElements < MAX_SIZE -1)
            {
                mArray[back] = newEntry;
                back = (back + 1) % MAX_SIZE;
                numElements++;
            }
            else
            {
                cout << "Error: Cannot enqueue onto a full queue!" << endl;
            }
        }

        int dequeue()
        {
            int data = 0;
            if(!isEmpty())
            {
                data = mArray[front];
                front = (front + 1) % MAX_SIZE;
                numElements--;
            }
            else
            {
                cout << "Error: Cannot dequeue when the queue is empty!" << endl;
            }

            return data; 
        }

        int peekFront() const
        {
            int data = 0;
            if(!isEmpty())
            {
                data = mArray[front];
            }
            else
            {
                cout << "Error: Cannot peek front when the queue is empty!" << endl;
            }

            return data;
        }

        bool isEmpty() const
        {
            return numElements == 0;
        }

        void makeEmpty()
        {
            front = 0;
            back = 0;
            numElements = 0;
        }




    private: 
        int* mArray;
        const int MAX_SIZE; 
        int front; 
        int back;
        int numElements; 
};

#endif