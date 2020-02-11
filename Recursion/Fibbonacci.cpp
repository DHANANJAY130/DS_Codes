#include<iostream>
using namespace std;

int fibb(int);
int fibb(int n)
{
    int a[30],i=2;
    
    while (i<n)
    {
        if(n==0)
        return 0;
        else if (n==1)
        return 1;
        else
        a[i]=fibb(n-1)+fibb(n-2);
        i++;
    }
    

    
}

int main()
{
    
    return 0;
}