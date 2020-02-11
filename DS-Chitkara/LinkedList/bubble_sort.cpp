#include<iostream>
using namespace std;

void bubble_sort(int, int);
void display(int, int);
void binary_search(int, int, int);
void binary_search(int *a, int n, int val)
{
    int i,mid,lower_bound=0,upper_bound,pos=-1;
    upper_bound=n-1;
    mid = (upper_bound + lower_bound)/2;
    while(lower_bound<=upper_bound)
	{
		mid=(lower_bound+upper_bound)/2;
		if(a[mid]==val)
		{
			pos=mid+1;
			break;
		}	
		else if(a[mid]>val)
			upper_bound=mid-1;	
		else
			lower_bound=mid+1;	
	}
    if(pos>=0)
    cout<<val<<" is present at location: "<<pos<<endl;
    else
    cout<<val<<" is not present in the array: "<<endl;


}


void display(int *a, int n)
{
    cout<<"\nSorted Elements of Array are:\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<"\t";
    cout<<endl;
}
void bubble_sort(int *a, int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1] = temp;

            }
        }
    }

}


int main()
{
    int i,a[20],n,num;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    cout<<"Enter Elements of the array: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    bubble_sort(a,n);
    display(a,n);
    cout<<"Enter Elements to be searched ";
    cin>>num;
    binary_search(a,n,num);
    cout<<endl;

    return 0;
}
