#include <iostream>  //need this for COUT and CIN
using namespace std; // need this for COUT and CIN
#include <iomanip>

class Link
{
public:
    int data;
    Link *prev, *next;
    Link(int newData)
    {
        prev = NULL;
        next = NULL;
        data = newData;
    }

    void display()
    {
        // show memory address of previous and next pointers as well as itself
        cout << "{ " << setw(3) << data << "\t:\t" << setw(14) << prev << "\t:\t\t" << &data << "\t:\t" << setw(14) << next << " }" << endl;
    }
};