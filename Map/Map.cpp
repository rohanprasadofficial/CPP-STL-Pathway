#include <stdio.h>
#include <iostream>
#include <map> // Header File for import map

using namespace std;

int main()
{

    /*
        Two ways of declaring the map either you can just declare or declare and initialise 
        map<datatype_1,datatype_2) map_name;
    */
    map<int, string> m;
    map<int, string> m1 = {{40, "Rohan"}};

    /*
        Two ways of inserting the values to an map
        
    */
    m[40] = "Rohan";
    cout << m[40] << endl;

    m.insert(pair<int, string>(41, "Rohit"));
    cout << m[41] << endl;

    /* Displaying the values

        Here i have used Iterator that will be discussed later

    */
    map<int, string>::iterator it = m.begin();
    for (it; it != m.end(); it++)
    {
        cout << "Key :" << it->first << " Value: " << it->second << endl;
    }

    /*
        Checking whether the map is empty or not
        empty()- it return true if map is empty else return false
    */

    m.empty() ? cout << "Map is empty" << endl : cout << "Map is not empty" << endl;

    /*
        Getting the size of the map
        size  - returns the number of pairs in map
    */

    cout << m.size() << endl;

    /*
        clearing the whole map
        clear()- remove all the pair from map
    */

    m.clear();
    cout << m.size() << endl; // Now the size of map will be 0

    return 0;
}