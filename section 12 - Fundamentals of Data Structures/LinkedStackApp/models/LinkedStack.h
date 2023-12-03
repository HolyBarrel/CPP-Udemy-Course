#ifndef LINKED_STACK_H
#define LINKED_STACK_H
#include "Stack.h"
#include <iostream>
using namespace std;

//----------------Node

class Node
{
    public: 
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        
        }

        int getData() const
        {
            return data;
        }

        void setData(int data)
        {
            this->data = data;
        }

        Node* getNext() const
        {
            return next;
        }

        void setNext(Node* next)
        {
            this->next = next;
        }

    private: 
        int data;
        Node* next;
};

//----------------Linked Stack

class LinkedStack : public Stack
{
    public: 
        LinkedStack()
        {
            top = nullptr;
        }

        virtual ~LinkedStack()
        {
            makeEmpty();
        }

        void push(int newEntry)
        {
            Node* newNode = new Node(newEntry, top);
            top = newNode;
        }

        int pop()
        {
            int data = 0;
            if(!isEmpty())
            {
                Node* temp = top; 
                data = temp->getData();
                top = top->getNext();
                delete temp;
            }
            else
            {
                cout << "Error: cannot pop items on an empty stack!" << endl; 
            }

            return data; 
        }

        int peek()
        {
            int data = 0;

            if(!isEmpty())
            {
                data = top->getData();
            }
            else {
                cout << "Error: cannot peek on an empty stack!" << endl;
            }

            return data;
        }

        bool isEmpty() 
        {
            return top == nullptr;
        }

        void makeEmpty()
        {
            Node* temp; 

            while(top != nullptr)
            {
                temp = top; 
                top = top->getNext();
                delete temp;
            }
        }



    private: 
        Node* top;

};


#endif