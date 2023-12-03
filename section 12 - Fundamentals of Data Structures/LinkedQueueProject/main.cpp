#include <iostream>
#include "models/LinkedQueue.h"
using namespace std;

int main()
{
    LinkedQueue queue;

    cout << "Enqueueing 10 numbers: " << endl;

    for(int i = 1; i <= 10; i++)
    {
        cout << "enqueueing: " << i*100 << endl;

        queue.enqueue(i*100);
    }

    queue.enqueue(1234);

    
    cout << "Dequeueing 10 numbers: " << endl;

    while(!queue.isEmpty())
    {
        cout << "dequeueing: " << queue.dequeue() << endl;
    }

    cout << "Testing for error dequeue on empty queue:" << endl;

    queue.dequeue();

    return 0; 
}