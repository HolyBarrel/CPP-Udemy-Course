#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "List.h"
using namespace std;

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

class LinkedList : public List
{
    public:
        LinkedList()
        {
            numElements = 0;
            listHead = nullptr;
        } 

        virtual ~LinkedList()
        {
            makeEmpty();
        }

        void add(int entry)
        {
            Node* newNode = new Node(entry, listHead);
            listHead = newNode;

            ++numElements;

        }


        void add(int entry, int position)
        {
            Node* newNode = new Node (entry, listHead);

            if(position >= numElements + 1 || position < 0)
            {
                cout << "Error: could not add an entry at the specified position!" << endl;
                return;
            }

            if(position == 0)
            {
                newNode-> setNext(listHead);
                listHead = newNode;
            }
            else 
            {
                Node* nodeBefore = listHead;
                Node* nodeAfter;

                for(int i = 0; i < position - 1; i++)
                {
                    nodeBefore = nodeBefore->getNext();
                }

                nodeAfter = nodeBefore->getNext();
                newNode->setNext(nodeAfter);
                nodeBefore->setNext(newNode);

            }
            ++numElements;
        } 

        void set(int entry, int position) 
        {
            Node* walker = listHead;

            if (position >= numElements || position < 0)
            {
                cout << "Error: Could not set entry at the specified position!" << endl;
                return;
            }

            for (int i = 0; i < position; i++)
            {
                walker = walker->getNext();
            }

            walker->setData(entry);
        } 

        bool contains(int entry) const
        {
            return find(entry) != -1;
        } 

        int find(int entry) const
        {
            Node* walker = listHead;

            while (walker != nullptr)
            {
                if(walker->getData() == entry) return entry;
                 walker = walker->getNext();
            }

            return -1;
        }

        int remove(int position)
        {
            if(position >= numElements || position < 0)
            {
                cout << "Error: could not remove entry at specified position!" << endl;
                return -1;
            }

            int returnData = 0;

            if(position == 0)
            {
                Node* temp = listHead;
                returnData = temp->getData();
                listHead = listHead->getNext();
                delete temp;
            }
            else 
            {
                Node* nodeBefore = listHead;
                Node* nodeAfter;
                Node* nodeToRemove;

                for(int i = 0; i < position - 1; i++)
                {
                    nodeBefore = nodeBefore->getNext();

                }

                nodeToRemove = nodeBefore->getNext();

                returnData = nodeToRemove->getData();

                nodeAfter = nodeToRemove->getNext();

                nodeBefore->setNext(nodeAfter);

                delete nodeToRemove;
            }

            --numElements;

            return returnData;
        }

        void makeEmpty()
        {
            Node* temp; 
            while(listHead != nullptr)
            {
                temp = listHead;
                listHead = listHead->getNext();
                delete temp;
            }

            numElements = 0;

        }

        int size() const
        {
            return numElements;
        }

        bool isEmpty() const
        {
            return numElements == 0;
        }
        void printList() const
        {

            Node* walker = listHead;

            while(walker != nullptr)
            {
                cout << walker->getData() << endl;
                walker = walker->getNext();
            }
        }

    private:
        Node* listHead;
        int numElements;
};

#endif