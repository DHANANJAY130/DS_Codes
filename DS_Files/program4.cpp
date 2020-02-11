#include<iostream>
using namespace std;

struct node1
{
    int data;
node1* next;
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
            cout<<"\nnullcase";
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = start;
            cout<<"\nnot null";
        }
    }
    void display()
    {
        node1 *ptr;
        ptr=start->next;
        cout<<start->data<<"\t";
        while(ptr!=start)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
        cout<<"\n";
    }
};
struct node
{
    int data;
    node* next;
    node* prev;
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
            newnode->prev=start;
            start->prev=NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->prev=ptr;
            newnode->next = NULL;
        }

    }
    void display()
    {
        node *ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
    }
};

int main()
{
    CLL cll;
    DLL l;
    int data,n,num;

    cout << "Enter no. of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        l.create(data);
    }
    cout<<"\nLinked List is:";
    l.display();
    // cout<<"\nEnter number to be searched: ";
    // cin>>num;
    // l.search(num);
    cout<<"\n";
    return 0;
}