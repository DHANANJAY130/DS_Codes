#include<iostream>
using namespace std;

struct node1
{
    int data;
    node1* next;
    node1* prev;
};
class CDLL
{
private:
    node1 *start;
public:
    CDLL()
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
            newnode->next = NULL;
            newnode->prev = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = start;
            start->prev = newnode;
        }
    }
};


int main()
{
    
    return 0;
}