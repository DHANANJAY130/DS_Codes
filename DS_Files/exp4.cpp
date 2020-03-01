#include <iostream>
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
    void create(int val)
    {
        node1 *ptr;
        node1 *newnode = new node1;
        newnode->data = val;
        if (start == NULL)
        {
            start = newnode;
            newnode->next = start;
            cout << "\nnullcase";
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = start;
            cout << "\nnot null";
        }
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
    void insBeg(int val)
    {
        node1 *ptr;
        ptr = start;
        node1 *newnode = new node1;
        newnode->data = val;
        newnode->next = ptr->next;
        while (ptr->next != start)
        {
            ptr = ptr->next;
        }
        start = newnode;
        ptr->next = start;
    }
    void insEnd(int val)
    {
        node1 *ptr;
        ptr = start;
        node1 *newnode = new node1;
        newnode->data = val;
        while (ptr->next != start)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
    }
    void insAfter(int data, int val)
    {
        node1 *ptr;
        ptr = start;
        node1 *newnode = new node1;
        newnode->data = val;
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    void delNode(int data)
    {
        node1 *ptr;
        node1 *temp;
        ptr = start;
        if (ptr == NULL)
        {
            cout << "\nUnderFlow Condition. ";
            return;
        }
        while (ptr->data != data)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        delete ptr;
    }
    void searchElement(int data)
    {
        node1 *ptr;
        ptr = start;
        while (ptr->data != data && ptr->next != start)
        {
            ptr = ptr->next;
        }
        if (ptr->data == data)
            cout << "\nElement is present in the List. ";
        else
            cout << "\nElement is not present in the List. ";
    }
};

struct node
{
    int data;
    node *next;
    node *prev;
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
            newnode->prev = start;
            start->prev = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->next = NULL;
        }
    }
    void display()
    {
        node *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            cout << ptr->data << "\t";
            ptr = ptr->next;
        }
    }
    void insBeg(int val)
    {
        node *ptr;
        ptr = start;
        node *newnode = new node;
        newnode->data = val;
        ptr->prev = newnode;
        newnode->next = ptr;
        newnode->prev = NULL;
        start = newnode;
    }
    void insEnd(int val)
    {
        node *ptr;
        ptr = start;
        node *newnode = new node;
        newnode->data = val;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
        newnode->next = NULL;
    }
    void insAfter(int data, int val)
    {
        node *ptr;
        ptr = start;
        node *newnode = new node;
        newnode->data = val;
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next->prev = newnode;
        newnode->prev = ptr;
        ptr->next = newnode;
    }
    void delNode(int data)
    {
        node *ptr;
        ptr = start;
        if (ptr == NULL)
        {
            cout << "\nUnderFlow Condition. ";
            return;
        }
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        delete ptr;
    }
    void searchElement(int data)
    {
        node *ptr;
        ptr = start;
        while (ptr->data != data)
        {
            ptr = ptr->next;
        }
        if (ptr->data == data)
            cout << "\nElement is present in the List. ";
        else
            cout << "\nElement is not present in the List. ";
    }
};

int main()
{
    int choice, choice2, size, data, ins_val, del_val;
    CLL cll;
    DLL dll;
    do
    {
        cout << "1.Circular Linked List\n";
        cout << "2.Double Linked List\n";
        cout << "Enter -1 to exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            do
            {
                cout << "\nCircular Linked List: \n";
                cout << "1.Create\n";
                cout << "2.Insert Element in the beginning\n";
                cout << "3.Insert Element in the end\n";
                cout << "4.Insert Element in between\n";
                cout << "5.Delete Element\n";
                cout << "6.Search Element\n";
                cout << "Enter -1 to exit.";
                cout << "\nEnter your choice: ";
                cin >> choice2;
                cout << "\nCircular Linked List\n";
                switch (choice2)
                {
                case 1:
                    cout << "Enter size of CLL: ";
                    cin >> size;
                    for (int i = 0; i < size; i++)
                    {
                        cin >> data;
                        cll.create(data);
                    }
                    cout << "\nThe List is: ";
                    cll.display();
                    cout << "\n";
                    break;
                case 2:
                    cout << "Enter Element to be Inserted in the Beginning: ";
                    cin >> ins_val;
                    cll.insBeg(ins_val);
                    cout << "\nList after Insertion is: ";
                    cll.display();
                    cout << "\n";
                    break;
                case 3:
                    cout << "Enter Element to be Inserted in the End: ";
                    cin >> ins_val;
                    cll.insEnd(ins_val);
                    cout << "\nList after Insertion is: ";
                    cll.display();
                    cout << "\n";
                    break;
                case 4:
                    cout << "Enter Element to be Inserted in the Between: ";
                    cin >> ins_val;
                    cout << "Enter Node Value after which Element is to be inserted: ";
                    cin >> data;
                    cll.insAfter(data, ins_val);
                    cout << "\nList after Insertion is: ";
                    cll.display();
                    cout << "\n";
                    break;
                case 5:
                    cout << "Enter Element to be Deleted: ";
                    cin >> del_val;
                    cll.delNode(del_val);
                    cout << "\nList after Deletion is: ";
                    cll.display();
                    cout << "\n";
                    break;
                case 6:
                    cout << "Enter Element to be Searched in the List: ";
                    cin >> data;
                    cll.searchElement(data);
                    break;
                }
            } while (choice2 != -1);
            break;
        case 2:
            do
            {
                cout << "\nDouble Linked List\n";
                cout << "1.Create\n";
                cout << "2.Insert Element in the beginning\n";
                cout << "3.Insert Element in the end\n";
                cout << "4.Insert Element in between\n";
                cout << "5.Delete Element\n";
                cout << "6.Search Element\n";
                cout << "Enter -1 to exit.";
                cout << "\nEnter your choice: ";
                cin >> choice2;
                cout << "\nDouble Linked List\n";
                switch (choice2)
                {
                case 1:
                    cout << "Enter size of DLL: ";
                    cin >> size;
                    for (int i = 0; i < size; i++)
                    {
                        cin >> data;
                        dll.create(data);
                    }
                    cout << "\nThe List is: ";
                    dll.display();
                    cout << "\n";
                    break;
                case 2:
                    cout << "Enter Element to be Inserted in the Beginning: ";
                    cin >> ins_val;
                    dll.insBeg(ins_val);
                    cout << "\nList after Insertion is: ";
                    dll.display();
                    cout << "\n";
                    break;
                case 3:
                    cout << "Enter Element to be Inserted in the End: ";
                    cin >> ins_val;
                    dll.insEnd(ins_val);
                    cout << "\nList after Insertion is: ";
                    dll.display();
                    cout << "\n";
                    break;
                case 4:
                    cout << "Enter Element to be Inserted in the Between: ";
                    cin >> ins_val;
                    cout << "Enter Node Value after which Element is to be inserted: ";
                    cin >> data;
                    dll.insAfter(data, ins_val);
                    cout << "\nList after Insertion is: ";
                    dll.display();
                    cout << "\n";
                    break;
                case 5:
                    cout << "Enter Element to be Deleted: ";
                    cin >> del_val;
                    dll.delNode(del_val);
                    cout << "\nList after Deletion is: ";
                    dll.display();
                    cout << "\n";
                    break;
                case 6:
                    cout << "Enter Element to be Searched in the List: ";
                    cin >> data;
                    dll.searchElement(data);
                    break;
                }
            } while (choice2 != -1);
            break;

        default:
            break;
        }
        cout << "\n";
    } while (choice != -1);

    return 0;
}