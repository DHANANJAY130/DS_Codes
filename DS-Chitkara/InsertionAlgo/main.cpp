#include<iostream>
#include "insfirst.cpp"
using namespace std;

int main()
{
    int n,i,j,pos,a[20];
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    cout<<"Enter Elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter index of item to be deleted: ";
    cin>>pos;
    j=pos;
    while(j<n)
    {
        a[j]=a[j+1];
        j++;
    }
    n--;
    //n++;
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}


/*
int n,i,j,pos,a[10],item;
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    n=n+1;
    cout<<"Enter the position in which element is to be inserted";
    cin>>pos;
    j=n;
    while(j>=pos)
    {
        a[j+1]=a[j];
        j--;
    }
    cout<<"Enter Element to be inserted: ";
    cin>>item;
    a[pos]=item;
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
*/
