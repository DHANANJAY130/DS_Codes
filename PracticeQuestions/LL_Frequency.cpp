#include <iostream>
using namespace std;

struct node1
{
    int data;
    node1 *next;
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
    void search(int num)
    {
        int i = 0;
        node1 *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            i++;
            if (ptr->data == num)
                cout << endl
                     << num << " is present in the Linked List at " << i << " position.\n";

            ptr = ptr->next;
        }
    }
    void frequency(int num)
    {
        int i=0;
        node1 *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            if(ptr->data==num)
            ++i;
            ptr = ptr->next;
        }
        cout<<"\nFrequency of "<<num<<" is: "<<i<<".\n";
    }
};

int main()
{
    linked_list l;
    int data, n, num;

    cout << "Enter no. of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        l.create(data);
    }
    cout << "\nLinked List is:";
    l.display();
    cout << "\nEnter number to find its frequency: ";
    cin >> num;
    // l.search(num);
    // cout<<"\nDuplicate Elements are:";
    l.frequency(num);
    cout<<"\n";
    return 0;
}