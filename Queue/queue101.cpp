#include<iostream>
using namespace std;

class queue
{
    private:
    int front,rear;
    int a[10];
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    void create(int val)
    {
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
            a[front]=val;
        }
        else
        {
            a[++rear]=val;
        }
        
    }
    void display()
    {
        for (int i = front; i < rear+1; i++)
        {
            cout<<"\t"<<a[i];
        }
                
    }
    void insert_element(int val)
    {
        a[++rear]=val;
    }
    void delete_element()
    {
        front++;
    }
};

int main()
{
    queue q;
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