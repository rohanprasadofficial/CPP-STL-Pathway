#include <stdio.h>
#include <iostream>
#include <stack> //  Here Stack
using namespace std;

int main()
{

    /*
    Declaring a stack
    */
    stack<int> s;

    //Adding element to the stack
    s.push(1);

    // Removing element from the stack
    s.pop();

    /* pop() just removes the last(top) element and we doesnt get know what was the last element
        So, for getting the last(top) element we can use top() function
    */
    s.push(3);
    s.push(2);
    s.push(1);
    cout << s.top() << endl;
    s.pop(); // Removing  top element
    cout << s.top() << endl;

    /*
        Checking that if stack is empty or not
        empty() - return true if stack is empty
            */

    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is not empty" << endl;

    /*
    
        Getting the size of stack
        size() -- this function the number of elements in stack
    */
    cout << s.size() << endl;

    return 0;
}