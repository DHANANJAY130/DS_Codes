// Convert infix to postfix
#include <iostream> 
// #include <stack> 
#include "StackLL.cpp"
using namespace std; 
  
int main()
{
    stackLL s;
    s.push(5);
    s.push(8);
    s.push(15);
    s.push(18);
    s.display();
    cout<<endl;
    return 0;
}