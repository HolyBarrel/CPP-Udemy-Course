#ifndef LIST_H
#define LIST_H

//In practice this class becomes an interface since all methods are pure virtual
class List 
{
    public: 
        virtual void add(int entry) = 0; //pure virtual function
        virtual void add(int entry, int position) = 0; 
        virtual void set(int entry, int position) = 0; 

        virtual bool contains(int entry) const = 0; 
        virtual int find(int entry) const = 0;
        virtual int remove(int position) = 0;
        virtual void makeEmpty() = 0;

        virtual int size() const = 0;
        virtual bool isEmpty() const = 0;
        virtual void printList() const = 0;
};


#endif