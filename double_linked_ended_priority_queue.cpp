#include <iostream>     //need this for COUT and CIN
using namespace std;    //need this for COUT and CIN
#include <iomanip>

class Link
{
public:
    int data;
    Link *prev, *next;
    Link (int newData)
    {
        prev = NULL;
        next = NULL;
        data = newData;
    }

};