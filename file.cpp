#include <iostream>

using namespace std;

void fun()
{
    extern int x;

    cout << x << endl;
}