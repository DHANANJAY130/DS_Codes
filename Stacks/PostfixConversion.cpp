// Steps for creating the code
// push ")" at the bottom of the stack
// void infix_postfix_conversion();
// void precedencer();
// void postfix_evaluation();
#include<iostream>
using namespace std;

struct node1
{
    char data;
    node1 *next;
};
class stack
{
private:
    node1 *top;

public:
    stack()
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
            cout << "\ncase1\n";
            newnode->next = NULL;
            top = newnode;
            cout << "\nend of case1\n";
        }
        else
        {
            cout << "\ncase2\n";
            ptr = top;
            node1 *newnode = new node1;
            newnode->data = val;
            newnode->next = top;
            // cout<<"\nend of case2-0\n";
            while (ptr->next != NULL)
            {
                // cout<<"\nend of case2-1\n";
                ptr = ptr->next;
            }
            // cout<<"\nend of case2-2\n";
            top = newnode;
            // cout<<"\nend of case2\n";
        }
    }
    void display()
    {
        node1 *ptr;
        ptr = top;
        while (ptr != NULL)
        {
            cout << '\t' << ptr->data;
            ptr = ptr->next;
        }
    }
    void pop()
    {
        node1 *ptr;
        ptr = top;
        top = ptr->next;
        delete ptr;
    }
    
};



int main()
{
    stack s;
    s.push(')');
    return 0;
}