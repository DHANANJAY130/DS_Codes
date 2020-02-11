#include<iostream>
using namespace std;
int main()
{
    int n, i, val,flag=0;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Value to be searched: ";
    cin>>val;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            cout<<val<<" is found at position "<<i+1;
            flag = 1;
        }
    }
    if(flag==0)
    cout<<val<<" is not present in the array. ";
    return 0;
}