#include<iostream>
using namespace std;

struct node1
{
    int data;
node1* next;
};
class linked_list
{
private:
    node1 *start;
public:
    linked_list()
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
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = NULL;
        }
    }
};


int main()
{
    
    return 0;
}