#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
        Declaring a pair syntax
        pair<datatype,datatype> pair_name;
    */

    pair<string, int> p; // Declaring a pair

    //Making a pair

    p = make_pair("Rohan", 40);

    //Accessing the pair

    cout << p.first;  //Gives the first element
    cout << p.second; // Gives the second element

    return 0;
}