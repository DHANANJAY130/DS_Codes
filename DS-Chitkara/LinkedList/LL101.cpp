#include <iostream>
using namespace std;

void create(int);
void display();
void sum();
int val, n;
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
            cout << ptr->data << '\t';
            ptr = ptr->next;
        }
    }

    void sum()
    {
        int sum = 0;
        node1 *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            sum += ptr->data;
            ptr = ptr->next;
        }
        cout << "\nSum is: " << sum;
    }

    int largestElement(struct Node *head)
    {

        int max = INT_MIN;

        // Check loop while head not equal to NULL
        while (head != NULL)
        {

            if (max < head->data)
                max = head->data;
            head = head->next;
        }
        return max;
    }
};
int main()
{
    linked_list l;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        l.create(val);
    }
    l.display();
    l.sum();
}