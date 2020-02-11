#include<iostream>
using namespace std;

struct node1
{
    int data;
    node1* next;
    node1* prev;
};
class DLL
{
private:
    node1 *start;
public:
    DLL()
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
            newnode->prev = NULL;
            newnode->next = NULL;
            start = newnode;
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
        node1 *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            cout << '\t' << ptr->data;
            ptr = ptr->next;
        }
    }
};

int main()
{
    DLL l;
    int n,data,i;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        l.create(data);
    }
    cout<<endl;
    l.display();
    cout<<endl;
    return 0;
}