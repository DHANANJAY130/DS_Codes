#include<iostream>
using namespace std;

struct node1
{
    int data;
node1* next;
};
class LinkedList
{
private:
    node1 *front;
    node1 *rear;
public:
    LinkedList()
    {
        front = NULL;
        rear = NULL;
    }
    void create(int val)
    {
        node1 *ptr;
        node1 *newnode = new node1;
        newnode->data = val;
        if (front == NULL)
        {
            newnode->next = NULL;
            front = rear = newnode;
            front->next = rear->next = NULL;
        }
        else
        {
            ptr = front;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = NULL;
            rear=newnode;
        }
    }
    void display()
    {
        node1 *ptr;
        ptr = front;
        while (ptr!=rear->next)
        {
            cout<<"\t"<<ptr->data;
            ptr=ptr->next;
        }
        
    }
    void insert_element(int val)
    {
        node1 *newnode;
        newnode->data=val;
        rear->next=newnode;
        rear=newnode;
        rear->next=NULL;
    }
    void delete_element()
    {
        node1 *ptr;
        ptr=front;
        front=ptr->next;
        delete ptr;
    }
};