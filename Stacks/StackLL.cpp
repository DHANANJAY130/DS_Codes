#include <iostream>
using namespace std;
struct node1
{
    int data;
    node1 *next;
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
            newnode->next = NULL;
            top = newnode;
        }
        else
        {
            ptr = top;
            node1 *newnode = new node1;
            newnode->data = val;
            newnode->next = top;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            top = newnode;
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
        cout << "\n";
    }
    void pop()
    {
        node1 *ptr;
        ptr = top;
        if (ptr == NULL)
            return;
        cout << "\n" << ptr->data << "\n";
        top = ptr->next;
        delete ptr;
    }
    int Top()
    {
        return top->data;
    }
};

int main()
{
    stackLL s;
    int data, choice,n;
    cout<<"Enter size of stack: ";
    cin>>n;
    for(int i = 0; i<n ;i++)
    {
        cin>>data;
        s.push(data);
    }

    do
    {
        cout << "\n1.Push Elements into Stack";
        cout << "\n2.Pop Element from the Stack";
        cout << "\n3.Display All Elements of Stack";
        cout << "\n4.Display Top Element of Stack";
        cout<<"\nEnter -1 to exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Data to be pushed into stack: ";
            cin >> data;
            s.push(data);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "\nStack is: ";
            s.display();
            cout << "\n";
            break;
        case 4:
            cout << "\nTop Element is: " << s.Top() << "\n";
            break;
        }
    } while (choice != -1);

    return 0;
}