#include<iostream>
using namespace std;



int main()
{
    int choice,choice2;
    do
    {
        cout<<"1.Circular Linked List\n";
        cout<<"2.Double Linked List\n";
        cout<<"Enter -1 to exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            do{
            cout<<"\nCircular Linked List: \n";
            cout<<"1.Create\n";
            cout<<"2.Insert Element in the beginning\n";
            cout<<"3.Insert Element in the end\n";
            cout<<"4.Insert Element in between\n";
            cout<<"5.Delete Element\n";
            cout<<"6.Search Element\n";
            cout<<"Enter -1 to exit.";
            cin>>choice2;
            }while(choice2!=-1);
            break;
        case 2:
            do{
            cout<<"\nDouble Linked List\n";
            cout<<"1.Create\n";
            cout<<"2.Insert Element in the beginning\n";
            cout<<"3.Insert Element in the end\n";
            cout<<"4.Insert Element in between\n";
            cout<<"5.Delete Element\n";
            cout<<"6.Search Element\n";
            cout<<"Enter -1 to exit.";

            cin>>choice2;
            }while(choice2!=-1);
            break;
        
        default:
            break;
        }
        cout<<"\n";
    } while (choice!=-1);
    
    return 0;
}