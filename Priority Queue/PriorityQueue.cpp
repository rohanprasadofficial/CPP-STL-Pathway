#include <stdio.h>
#include <iostream>
#include <queue> // Header file for queue
using namespace std;

int main()
{

    /*  
        Here in priority queue the elements can be delete which have largest value in the queue. 
         i.e- it can used to implement maxheap  which have applications like hoffman coding (compression algorithm)
         This is the basic difference between the queue and priority queue
    */

    priority_queue<int> q; // Decalration for priority queue

    /*
        Adding elements to the queue & checking the top element of the queue
        push(data)  -- add data to the queue
        top()  -- return the top(i.e - largest element of the queue)  element of the queue
    */

    q.push(1);
    q.push(5);

    cout << q.top() << endl; // Top always be the highest  value element
    q.push(2);
    cout << q.top() << endl; // Top always be the highest  value element
    q.push(100);
    cout << q.top() << endl; // Top always be the highest  value element

    /*
        Removing the element from queue
        pop() - removes the largest element from the queue
    
    */

    q.pop();
    cout << q.top() << endl; // Top always be the highest  value element

    /*
        Getting the size of the queue
        size()  - returns the size of the queue
    */
    cout << q.size() << endl;

    /*
        Checking that queue is empty or not
        empty() -- return true if queue is empty() else  return false
    */

    q.empty() ? cout << "Queue is empty" << endl : cout << "Queue is not empty" << endl;

    return 0;
}