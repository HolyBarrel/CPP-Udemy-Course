#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"

using namespace std;

class ArrayList : public List
{
    public: 
        ArrayList(int s = 16) : MAX_SIZE(s)
        {
            thisArray = new int[MAX_SIZE];

            numElements = 0;
        }

        void add(int entry)
        {
            if(numElements >= MAX_SIZE)
            {
                cout << "Cannot add element. List has reached capacity!" << endl;
                return;
            }
            thisArray[numElements] = entry;
            ++numElements;

        }

        void add(int entry, int position) 
        {
            if(numElements >= MAX_SIZE)
            {
                cout << "Cannot add element. List has reached capacity!" << endl;
                return;
            }

            if(position < 0 || position > numElements)
            {
                cout << "Index out of range of array list!" << endl;
                return;
            }

            for(int i = numElements; i > position; i--)
            {
                thisArray[i] = thisArray[i-1];
            }
            thisArray[position] = entry;
            ++numElements;

        }

        void set(int entry, int position)
        {
            if(position < 0 || position > numElements)
            {
                cout << "Index out of range of array list for setting entry!" << endl;
                return;
            }

            thisArray[position] = entry;

        }

        bool contains(int entry) const{
            for(int i = 0; i < numElements; i++) 
                if(thisArray[i] == entry) return true;

            return false;
        } 

        int find(int entry) const
        {
            for(int i = 0; i < numElements; i++) 
                if(thisArray[i] == entry) return i;

            return -1;
        }
        int remove(int position)
        {
            if(position < 0 || position >= numElements)
            {
                cout << "The requested index for removal was out of range for the array list!" << endl;
                return -1;
            }

            int temp = thisArray[position];

            for(int i = 0; i < numElements - 1; i++)
            {
                thisArray[i] = thisArray[i + 1];
            }

            --numElements;

            return temp;
        }
        void makeEmpty()
        {
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
            cout << endl << "Array:" << endl;
            for(int i = 0; i < numElements; i++)
            {
                cout << thisArray[i] << endl;
            }
        }

    private: 
        int* thisArray;
        const int MAX_SIZE;
        int numElements;
};

#endif