#include<iostream>
using namespace std;

int fact(int);

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
    
}

int main()
{
    cout<<endl<<fact(5)<<"\n";
    return 0;
}