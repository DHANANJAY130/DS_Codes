#include <iostream>
using namespace std;
void insert(int);
void del();
void display();
int front = -1, rear = -1;
int q[10];
class Cqueue
{
private:
    int a[20];
    int rear, front,max;

public:
    Cqueue()
    {
        rear = -1, front = -1;
        max=0;
    }
    void create(int val)
    {
        max++;
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            a[front] = val;
        }
        else
        {
            a[++rear] = val;
        }
    }
    void display()
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << "\t" << a[i];
        }
    }
    void insert_element(int val)
    {
        max++;
        if(rear==max-1)
        cout<<"\nOverFlow.";
        a[++rear] = val;
    }
    void delete_element()
    {
        if (front == -1)
            cout << "\nUnderflow condition.\n";
        else
            front++;
    }
};

int main()
{
    Cqueue q;
    int n,data;
    int front=-1,rear=-1;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        q.create(data);
    }
    cout<<"\nElements of queue are: ";
    q.display();
    cout<<"\nEnter number to be inserted: ";
    cin>>data;
    q.insert_element(data);
    cout<<"\nElements after insertion are:\n";
    q.display();
    q.delete_element();
    cout<<"\nElements after deletion are:\n";
    q.display();
    cout<<"\n";
    return 0;
}
