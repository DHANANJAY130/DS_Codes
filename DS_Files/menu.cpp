#include <iostream>
#include "program4.cpp"
using namespace std;

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
                cin >> choice2;
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
                cin >> choice2;
                cout << "\nDouble Linked List\n";
                switch (choice2)
                {
                case 1:
                    cout << "Enter size of LL: ";
                    cin >> size;
                    for (int i = 0; i < size; i++)
                    {
                        cin >> data;
                        dll.create(data);
                    }
                    break;
                case 2:
                    cout << "Enter Element to be Inserted in the Beginning: ";
                    cin >> ins_val;
                    dll.insBeg(ins_val);
                    break;
                case 3:
                    cout << "Enter Element to be Inserted in the End: ";
                    cin >> ins_val;
                    dll.insEnd(ins_val);
                    break;
                case 4:
                    cout << "Enter Element to be Inserted in the Between: ";
                    cin >> ins_val;
                    cout<<"Enter Node Value after which Element is to be inserted: ";
                    cin>>data;
                    dll.insAfter(data, ins_val);
                    break;
                case 5:
                    cout << "Enter Element to be Deleted: ";
                    cin >> del_val;
                    dll.delNode(del_val);
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