#include <stdio.h>
#include <iostream>
#include <queue> // Header for using  queue
using namespace std;

int main()
{

    /*
        Declaration of the queue
    */
    queue<int> q;
    /*
    Adding element to the queue
    push(data)- This function allows you all to add data to the rear of the queue
    */
    q.push(1);

    /*
        Getting the element at the front of the queue
        front() - This function returns the element at the front of the queue
    */
    cout << q.front() << endl;

    /*
        Getting the element at the rear of the queue
        back() - This function returns the element at the rear of the queue
    */
    cout << q.back() << endl;

    /*
        Removing the element from the queue
        pop() - removes element from the rear of the queue
    */

    q.pop();

    /*
    Checking for the queue is empty or not
    empty()- returns true if queue is empty else returns false
    */

    q.empty() ? cout << "Queue is empty" << endl : cout << "Queue is not empty" << endl;

    q.push(1);
    q.empty() ? cout << "Queue is empty" << endl : cout << "Queue is not empty" << endl;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    /*
        Getting the size of the queue
        size()- returns the number of elements in the queue

    */

    cout << q.size() << endl;

    return 0;
}