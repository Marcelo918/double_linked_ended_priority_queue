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

class DoubleEndedList
{
private:
    Link *first, *last;

public:
    DoubleEndedList()
    {
        first = NULL;
        last = NULL;
    }

    // displays first item in the list
    void displayFirst()
    {
        cout << "First: ";
        first->display();
    }

    // displays last item in the list
    void displayLast()
    {
        cout << "Last: ";
        last->display();
    }

    // checks if the list is empty
    bool empty()
    {
        cout << boolalpha;
        cout << "Is the queue empty? ";
        return (first == NULL && last == NULL);
    }

    // inserts a new value in order
    void insert(int newValue)
    {
        // makes new link
        Link *newLink = new Link(newValue);

        // if statement to check if there are not links
        if (first == NULL)
        {
            cout << "Inserting the First/Last link: " << endl;
            newLink->display();
            cout << endl;
            newLink->next = NULL;
            newLink->prev = NULL;
            first = newLink;
            last = newLink;
            return;
        }

        if (newValue < first->data)
        {
            cout << "Inserting new First link: " << endl;
            newLink->display();

            first->prev = newLink;
            newLink->prev = NULL;
            newLink->next = first;
            first = newLink;
            return;
        }

        if (newValue > last->data)
        {
            cout << "Inserting new Last link: " << endl;
            newLink->display();

            last->next = newLink;
            newLink->prev = last;
            newLink->next = NULL;
            last = newLink;
            return;
        }
    }
};