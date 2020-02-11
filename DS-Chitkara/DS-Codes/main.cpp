#include <iostream>

using namespace std;

//Merging of unsorted array
int main()
{
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, n3, index=0;

    cout<<"\n Enter the number of elements in array2 : ";
    cin>>n1;
    cout<<"Enter elements of first array to be merged: ";
    for(i=0;i<n1;i++)
    {
    cin>>arr1[i];
    }
    cout<<"\n Enter the number of elements in array2 : ";
    cin>>n2;
    cout<<"Enter elements of second array to be merged: ";
    for(i=0;i<n2;i++)
    {
    cin>>arr2[i];
    }
    n3 = n1+n2;
    for(i=0;i<n1;i++)
    {
    arr3[index] = arr1[i];
    index++;
    }
    for(i=0;i<n2;i++)
    {
    arr3[index] = arr2[i];
    index++;
    }
    cout<<"Array after merging: ";
    for(i=0;i<n3;i++)
    cout<<arr3[i]<<" ";
    return 0;
}
/*
//deletion of element of array of specific position
int main()
{
int i, n, pos, arr[20];
cout<<"Enter number of elements in the array: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter the position of elements: ";
cin>>pos;
for(i=pos; i<n-1;i++){
arr[i] = arr[i+1];
}
n--;
cout<<"Array after deletion: \n";
for(i=0;i<n;i++)
cout<<" "<<arr[i];
return 0;
}
*/
/*******************************************************/
/*
Insertion of array at a given position
int main()
{
    int i, n, num, pos, arr[10];
    cout<<"Enter no. of elements";
    cin>>n;
    cout<<"Enter elements of array: "
    for(i=0;i<n;i++)
    {
    cin>>arr[i];

    }
    cout<<"Enter no to be inserted: ";
    cin>>num;
    cout<<"Enter the position of element to be inserted";
    cin>>pos;
    for(i=n-1;i>=pos;i--)
    {
    arr[i+1] = arr[i];
    }
    arr[pos] = num;
    n = n+1;
    cout<<"array after insertion: ";
    for(i=0;i<n;i++)
    cout<<" "<<arr[i];
    return 0;
}
*/
/*******************************************************************/
/*
sorting of array
int main()
{
    int n, arr[50], i, j, t_arr;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter  elements of the array: ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Please wait while array is being sorted \n";
	for(i=1; i<n; i++)
	{
		t_arr=arr[i];
		j=i-1;
		while((t_arr<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}

		arr[j+1]=t_arr;
	}
	cout<<"Sorted array : \n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}

    return 0;
}
*/
