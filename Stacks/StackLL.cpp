#include<iostream>

using namespace std;

struct node1
{
    int data;
node1* next;
};
class stackLL
{
private:
    node1 *top;
public:
    stackLL()
    {
        top = NULL;
    }
    void push(int val)
    {
        node1 *ptr;
        node1 *newnode = new node1;
        newnode->data = val;
        if (top == NULL)
        {
            // cout<<"\ncase1\n";
            newnode->next = NULL;
            top = newnode;
            // cout<<"\nend of case1\n";
        }
        else
        {
            // cout<<"\ncase2\n";
            ptr = top;
            node1 *newnode = new node1;
            newnode->data = val;
            newnode->next = top;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            top=newnode;
            
        }
    }
    void display()
    {
        node1 *ptr;
        ptr = top;
        cout<<"\nStack is:";
        while (ptr != NULL)
        {
            cout << '\t' << ptr->data;
            ptr = ptr->next;
        }
        cout<<"\n";
    }
    void pop()
    {
        node1 *ptr;
        ptr=top;
        top=ptr->next;
        delete ptr;
    }
};
struct node2
{
    char data;
node1* next;
};
class stackLL
{
private:
    node1 *top;
public:
    stackLL()
    {
        top = NULL;
    }
    void push(char val)
    {
        node1 *ptr;
        node1 *newnode = new node1;
        newnode->data = val;
        if (top == NULL)
        {
            // cout<<"\ncase1\n";
            newnode->next = NULL;
            top = newnode;
            // cout<<"\nend of case1\n";
        }
        else
        {
            // cout<<"\ncase2\n";
            ptr = top;
            node1 *newnode = new node1;
            newnode->data = val;
            newnode->next = top;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            top=newnode;
            
        }
    }
    void display()
    {
        node1 *ptr;
        ptr = top;
        cout<<"\nStack is:";
        while (ptr != NULL)
        {
            cout << '\t' << ptr->data;
            ptr = ptr->next;
        }
        cout<<"\n";
    }
    void pop()
    {
        node1 *ptr;
        ptr=top;
        top=ptr->next;
        delete ptr;
    }
};


// int main()
// {
//     stackLL s;
//     int data,n;
//     // int inp, n;
//     cout << "Enter no. of nodes: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> data;
//         s.push(data);
//     }
//     cout<<"stackLL is: ";
//     s.display();
//     cout<<"\n";
//     s.pop();
//     cout<<"Popped stackLL is: ";
//     s.display();
//     cout<<"\n";
//     return 0;
// }