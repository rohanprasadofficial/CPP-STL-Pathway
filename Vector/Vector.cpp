#include <stdio.h>
#include <iostream>
#include <vector> // Header should to be added to use vector
using namespace std;

int main()
{

    // Initialisation of a int vector
    vector<int> v1{1, 2, 3};

    // Initialisation of a char vector
    vector<char> v2{'a', 'b'};

    //We can also add values later and declare it like this
    vector<int> v3;

    /*  
        Capacity()  return the total capacity of the vector 
     */

    cout << "The Capacity of v1 is " << v1.capacity() << endl; // Output will be 3
    cout << "The Capacity of v3 is " << v3.capacity() << endl; // Output will be 0

    /*
        Size()  return the total size of the vector
    */
    cout << "The Size of v1 is " << v1.size() << endl; // Output will be 3
    /*
        NOTE: capacity() and size() are two different things as capacity return how many elements a vector can hold 
        where as size() return how many elements are present in the vector
    */

    /*
    Adding element at the end of the  vector
    push_back(data) : push_back function takes an element as an argument and and it to the end of the vector
   */

    // Displaying before adding element
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    v1.push_back(4); // Adding element at the end

    // Displaying after adding element
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " "; // 4 is added at end
    }
    cout << endl;

    /*  
        Adding element ot a specific index
        insert(iterator,data) : insert function takes index and element as an argument and add element to the index
    */

    vector<int>::iterator it = v1.begin(); // Here Iterator is used and  we be discussed later
    v1.insert(it, 2);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    /*
      pop_back() :  Removing element from the back of the vector
    */

    v1.pop_back();

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    /*
      at(index) :: getting the element at index 

     */
    cout << "The element at index 0 is : " << v1.at(0) << endl;

    /*
        back() :: return the last element of the vector  
    */

    cout << v1.back() << endl; // return 3

    /*
        front() :: return the first element of the vector  
    */

    cout << v1.front() << endl; // return 2
    return 0;
}
