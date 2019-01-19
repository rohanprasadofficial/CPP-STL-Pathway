#include <stdio.h>
#include <iostream>
#include <tuple> // Header file of tuple
using namespace std;

int main()
{

    /*
        Pair and tuple look similar but the basic differences is the tuple can hold many elements in one row
         whereas pair can only two elements i.e -key value pairs 
          */

    /*
            Declaration of the  tuple 
         */
    tuple<int, int, int, int, int> t;
    tuple<int, string> t1;
    tuple<int, int> t2{1, 2};

    /*
        Adding values to a tuple
    */
    t = make_tuple(1, 2, 3, 4, 5);
    t1 = make_tuple(6, "Hello");

    /*
        Accessing the element of the tuple
        get<index>(tuple_name) returns the element at index
    */

    cout << get<4>(t) << endl; // output is 5

    /*
        Getting the size of the tuple
    */
    cout << tuple_size<decltype(t)>::value << endl;

    /*
        unpacking the value of the tuple to store into some variable
        tie()- unpack the elements of tuple
    */
    int x;
    string y;

    tie(x, y) = t1;
    cout << "x= " << x << " ::  y= " << y << endl;

    /*
        The are many other function such swap etc..
    */

    return 0;
}