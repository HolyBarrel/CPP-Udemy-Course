#include <iostream>
#include "Node.h"  // Include the Node class header file
using namespace std;

// Function declarations
Node* createChain(int length);
void deleteChain(Node*& headNode);
void printChain(Node* headNode);

int main()
{
    // Pointer to the head of the linked list
    Node* headNode;

    // Create a linked list chain with 25 nodes
    headNode = createChain(25);

    // Print the data in each node of the linked list
    printChain(headNode);

    // Free the memory allocated for the linked list
    deleteChain(headNode);

    return 0;
}

// Function to create a linked list of given length
Node* createChain(int length)
{
    Node* head = nullptr;  // Initialize the head pointer to nullptr
    
    // Iterate and create nodes
    for (int i = 0; i < length; i++)
    {
        // Create a new node with data 'i' and next pointer pointing to the current head
        // This effectively inserts the new node at the beginning of the list
        head = new Node(i, head);
    }

    return head;  // Return the head of the linked list
}

// Function to delete the entire linked list and free the memory
void deleteChain(Node*& headNode)
{
    Node* deleteNode;  // Temporary pointer to hold the node to be deleted

    // Iterate until all nodes are deleted
    while (headNode != nullptr)
    {
        deleteNode = headNode;           // Set the deleteNode pointer to the current head
        headNode = headNode->getNext();  // Move the headNode pointer to the next node
        delete deleteNode;               // Delete the node
    }
}

// Function to print the data in each node of the linked list
void printChain(Node* headNode)
{
    Node* iterator = headNode;  // Initialize an iterator pointer with the head of the list
    int length = 0;
    // Iterate through the linked list and print the data
    while (iterator != nullptr)
    {
        cout << iterator->get() << endl;         // Print the data of the current node
        iterator = iterator->getNext();          // Move the iterator to the next node
        length++;
    }

    cout << "Chain length: " << length << endl;
}

