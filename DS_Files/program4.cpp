#include <iostream>
using namespace std;

struct node1
{
    int data;
    node1 *next;
};
class CLL
{
private:
    node1 *start;

public:
    CLL()
    {
        start = NULL;
    }
    void create(int val)
    {
        node1 *ptr;
        node1 *newnode = new node1;
        newnode->data = val;
        if (start == NULL)
        {
            start = newnode;
            newnode->next = start;
            cout << "\nnullcase";
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = start;
            cout << "\nnot null";
        }
    }
    void display()
    {
        node1 *ptr;
        ptr = start->next;
        cout << start->data << "\t";
        while (ptr != start)
        {
            cout << ptr->data << "\t";
            ptr = ptr->next;
        }
        cout << "\n";
    }
};
struct node
{
    int data;
    node *next;
    node *prev;
};
class DLL
{
private:
    node *start;

public:
    DLL()
    {
        start = NULL;
    }
    void create(int val)
    {
        node *ptr;
        node *newnode = new node;
        newnode->data = val;
        if (start == NULL)
        {
            newnode->next = NULL;
            start = newnode;
            newnode->prev = start;
            start->prev = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->next = NULL;
        }
    }
    void display()
    {
        node *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            cout << ptr->data << "\t";
            ptr = ptr->next;
        }
    }
    void insBeg(int val)
    {
        node *ptr;
        ptr = start;
        node *newnode = new node;
        newnode->data = val;
        ptr->prev = newnode;
        newnode->next = ptr;
        newnode->prev = NULL;
        start = newnode;
    }
    void insEnd(int val)
    {
        node *ptr;
        ptr = start;
        node *newnode = new node;
        newnode->data = val;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
        newnode->next = NULL;
    }
    void insAfter(int data, int val)
    {
        node *ptr;
        ptr = start;
        node *newnode = new node;
        newnode->data = val;
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next->prev = newnode;
        newnode->prev = ptr;
        ptr->next = newnode;
    }
    void delNode(int data)
    {
        node *ptr;
        ptr = start;
        if (ptr == NULL)
        {
            cout << "\nUnderFlow Condition. ";
            return;
        }
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        delete ptr;
    }
    void searchElement(int data)
    {
        node *ptr;
        ptr = start;
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        if (ptr->data == data)
            cout << "\nElement is present in the List. ";
        else
            cout << "\nElement is not present in the List. ";
    }
};