#include <iostream>
using namespace std;

void display(int, int);
void insert(int, int);
void search(int, int);
void delete_position(int, int);

void display(int *a, int n)
{
    cout<<"\nElements of Array are:\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<"\t";
    cout<<endl;
}
void insert(int *arr, int n)
{
    int num,pos,i;
	cout<<"Enter No. to be inserted: ";
	cin>>num;	
	cout<<"Enter Position for insertion: ";
	cin>>pos;
	pos--;
    i=n;
	while(i>=pos)
	{
		arr[i+1]=arr[i];
        i--;
	}
	n++;
	arr[pos]=num;
	cout<<"Array after insertion is: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";

}

void search(int *a, int n)
{
    int flag=0,val,i;
    cout<<"Enter Value to be searched: ";
    cin>>val;
    for(int i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            cout<<val<<" is found at position "<<i+1;
            flag = 1;
        }
    }
    if(flag==0)
    cout<<val<<" is not present in the array. ";
}

void delete_position(int *arr, int n)
{
    int pos,i;
	cout<<"Enter Position: ";
	cin>>pos;
	i=pos-1;
	while(i<n)
	{
		arr[i]=arr[i+1];
        i++;
	}	
	n--;
	cout<<"Array after Deletion is"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";

}

int main()
{
    int n, arr[20], option;
    cout << "Enter size of array:- ";
    cin >> n;
    cout << "Enter Elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // cout << "\nElements of array: \t";
    display(arr,n);
    cout <<endl<< "*************************************\n";
    cout << "*************************************\n";
    cout << "Enter your Option:\n";
    cout << "1. Display Array\n";
    cout << "2. Insert Array\n";
    cout << "3. Search Array\n";
    cout << "4. Delete Element by position\n";
    cout << "*************************************\n";
    cout << "*************************************\n";
    cin >> option;
    switch (option)
    {
    case 1:
        display(arr,n);
        break;
    case 2:
        insert(arr,n);
        break;
    case 3:
        search(arr,n);
        break;
    case 4:
        delete_position(arr,n);
        break;
    default:
    cout<<"\nEnter Valid Choice. ";
        break;
    }
    cout<<endl;
    return 0;
}


