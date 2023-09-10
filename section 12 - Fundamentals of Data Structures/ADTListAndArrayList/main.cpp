#include <iostream>
#include "./list_models/ArrayList.h"

using namespace std;

int main() 
{

    ArrayList anArrayList; 

    for(int i = 0; i < 15; i++) 
    {
        anArrayList.add(i);
    }

    anArrayList.printList();

    cout << endl << "Size of array: " << anArrayList.size() << endl;

    anArrayList.add(555, 15);

    anArrayList.printList();

    cout << endl << "Size of array after add: " << anArrayList.size() << endl;

    anArrayList.set(987, 3);

    cout << "After set at index 3: " << endl;

    anArrayList.printList();

    cout << "Tries to add an additional element: " << endl;

    anArrayList.add(2);

    



    return 0;
}