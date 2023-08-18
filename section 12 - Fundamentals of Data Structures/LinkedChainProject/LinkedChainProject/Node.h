// Node.h

#ifndef NODE_H
#define NODE_H

class Node {
public:
    // Constructor to initialize the data and nextNode pointer
    Node(int data, Node* nextNode)
    {
        this->data = data;
        this->nextNode = nextNode;
    }

    // Setter for the data member
    void setData(int data)
    {
        this->data = data;
    }

    // Setter for the nextNode pointer
    void setNextNode(Node* nextNode)
    {
        this->nextNode = nextNode;
    }

    // Getter for the data member
    int get() const
    {
        return data;
    }

    // Getter for the nextNode pointer
    Node* getNext() const
    {
        return nextNode;
    }

private:
    int data;       // Data member to hold the value of the node
    Node* nextNode; // Pointer to the next node in the linked list
};

#endif
