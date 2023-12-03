#ifndef LINKED_Q_H
#define LINKED_Q_H

#include "Queue.h"
#include <iostream>
using namespace std;

//----------------Node

class Node
{
    public: 
        Node(int data, Node* next, Node* prev)
        {
            this->data = data;
            this->next = next;
            this->prev = prev;
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

        Node* getPrev() const
        {
            return prev;
        }

        void setNext(Node* next)
        {
            this->next = next;
        }

        void setPrev(Node* prev)
        {
            this->prev = prev;
        }

    private: 
        int data;
        Node* next;
        Node* prev;
};


//------------LinkedQueue

class LinkedQueue : public Queue
{
    public: 
        LinkedQueue()
        {
            front = nullptr;
            back = nullptr;
        }


        void enqueue(int newEntry)
        {
            Node* newNode = new Node(newEntry, back, nullptr);

            if(isEmpty())
            {
                //This is the first node being added
                front = newNode;
            }
            else 
            {
                //This node is added to queue with existing nodes
                back->setPrev(newNode);
            }

            back = newNode; //Queue grows from the back
        }

        int dequeue()
        {   
            int data = 0;

            if(!isEmpty())
            {
                Node* tempRemove = front;
                
                data = front->getData();

                front = front->getPrev();

                delete tempRemove;

                if(front == nullptr)
                {
                    back = nullptr; //Ensure empty scenario
                }
                else{
                    front->setNext(nullptr);
                }
            }   
            else 
            {
                cout << "Error: Cannot dequeue from empty queue!" << endl;
            }

            return data;

        }

        int peekFront() const
        {
            int data = 0;

            if(!isEmpty())
            {
                data = front->getData();
            }
            else 
            {
                cout << "Error: Cannot peek front of empty linked queue!" << endl;
            }
            return data;
        }

        bool isEmpty() const
        {
            return front == nullptr && front == back;
        }

        void makeEmpty()
        {
            while (!isEmpty())
            {
                dequeue();
            }
        }

        private: 
            Node* front; 
            Node* back;

};

#endif