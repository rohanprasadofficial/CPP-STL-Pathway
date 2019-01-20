#include <iostream>
#include <set> // Header file for set
#include <stdio.h>
using namespace std;

/*
    Set a important as they cannot contain duplicate elements which have many applications
*/

int main()
{

    set<int> s; //Declaration of set

    /* 
        Inserting element in set
        insert(data) - inserts the data in the set 
    */

    s.insert(2);
    s.insert(3);

    set<int>::iterator it;

    //Displaying set
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "  ";
    }

    cout << endl;
    /*
        There cannot be duplicate elements in the set so the next element doesnot effect the set
    */
    s.insert(2);

    //Displaying set
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    /*

        Finding the size of the set
        size()  - returns the number of elements in the set
    */
    cout << "The size of the set is : " << s.size() << endl;

    /*
        Removing element from a set
        erase(date)  -- Removes the data from the set

    */
    s.erase(3);

    //Displaying set
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;

    /*
        Checking the set is empty or not
        empty() - return true if set is empty else returns fasle
    */
    s.empty() ? cout << "set is empty" << endl : cout << "set is not empty" << endl;

    return 0;
}