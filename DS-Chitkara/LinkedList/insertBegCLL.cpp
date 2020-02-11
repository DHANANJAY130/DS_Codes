#include<iostream>
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
    void create(int data)
    {
        node1 *ptr;
        node1 *newnode = new node1;
        newnode->data = data;
        if (start == NULL)
        {
            newnode->next = start;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = start;
        }
    }
    void insertbeg(int num)
    {
        node1 *ptr;
        ptr = start;
        node1 *newnode = new node1;
        newnode->data = num;
        newnode->next = ptr->next;
        while (ptr->next != start)
        {
            ptr = ptr->next;
        }
        start=newnode;
        ptr->next = start;
    }
    void display()
    {
        node1 *ptr;
        ptr = start;
        while (ptr->next != start)
        {
            cout << '\t' << ptr->data;
            ptr = ptr->next;
        }
    }
};

int main()
{
    CLL l;
    int data;
    int inp, n;
    cout << "Enter no. of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        l.create(data);
    }
    cout << "Linked List before Insertion: ";
    l.display();
    cout << "\nEnter Number to be inserted: ";
    cin >> inp;

    l.insertbeg(inp);

    cout << "\nLinked List after insertion" << endl;
    l.display();
    return 0;
}