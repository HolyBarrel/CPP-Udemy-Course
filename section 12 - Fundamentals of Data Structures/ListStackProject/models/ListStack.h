#ifndef LIST_STACK_H
#define LIST_STACK_H

#include "LinkedList.h"
#include "Stack.h"
#include <iostream>
using namespace std;

class ListStack : Stack 
{
    public: 
        ListStack()
        {
            this->list = LinkedList();
        }

        virtual ~ListStack()
        {
            makeEmpty();
        }

        void push(int entry)
        {
            list.add(entry);
        }

        int pop()
        {
            int data = 0;
            if(list.isEmpty())
            {
                cout << "Error: Cannot pop an empty ListStack!" << endl;
            }
            else 
            {
                data = list.remove(0);
            }
            return data;
        }

        int peek()
        {
            int data = 0;
            if(list.isEmpty())
            {
                cout << "Error: Cannot peek on an empty ListStack!" << endl;
            }
            else 
            {
                data = list.remove(0);
                list.add(data, 0);
            }
            return data;

        }

        bool isEmpty()
        {
            return list.isEmpty();
        }

        void makeEmpty()
        {
            list.makeEmpty();
        }

    private: 
        LinkedList list;

};


#endif
