#include <iostream>
#include "./list_models/LinkedList.h"

using namespace std;

int main() 
{
    LinkedList aList; 
    int data; 

    for(int i = 0; i < 12; i++)
    {
        aList.add(i);
    }

    aList.set(1212, 0);

    aList.set(1293939, 2);

    aList.printList();
    cout << endl << endl;

    aList.add(1929, 12);

    aList.printList();

    cout << endl << endl;
    
    cout << boolalpha << "Does the list contain 1212? -> " << aList.contains(1212) << endl;
    cout << endl << endl;

    while (!aList.isEmpty())
    {
        data = aList.remove(0);
        cout << "Removed value " << data << " from the list"  << endl;
    }
    cout << endl << endl;

    aList.printList();

    cout << boolalpha << "Does the list contain 1212? -> " << aList.contains(1212) << endl;
    cout << endl << endl;


    return 0;
}