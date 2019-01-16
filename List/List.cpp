#include <stdio.h>
#include <iostream>
#include <list> // Header file for list
#include <algorithm>

using namespace std;

int main()
{

    /*Two method for declaration of the list*/

    list<int> l1{1, 2, 4, 3};
    list<int> l2;
    list<int>::iterator it;

    /*
        ADDING FUNCTIONS
    */
    l1.push_front(0); // Adding element to front
    l1.push_back(4);  //Adding element to end

    //Displaying list
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    /*
        DELETING FUNCTIONS
    */

    l1.pop_back();  // Removing element from the end
    l1.pop_front(); // Removing element from the front

    cout << l1.size() << endl;
    l1.sort();

    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l1.remove(4);

    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }

    l1.clear();
    return 0;
}
