#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<char> v1(5, 'a');
    // cout << v1.size();
    // v1.pop_back();
    // cout << v1.size();
    // v1.clear();
    // cout << v1.size();
    // cout << v1.capacity();
    // cout << v1.at(3);
    // cout << v1.front();
    // cout << v1.back();
    vector<char>::iterator it = v1.begin();
    v1.insert(it, 'A');

    return 0;
}