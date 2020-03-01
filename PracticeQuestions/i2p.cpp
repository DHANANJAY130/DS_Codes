#include<iostream>
using namespace std;

class Stack
{
    private:
    char stack[20];
    int top;
    public:
    Stack()
    {
        top = -1;
    }
    int isEmpty()
    {
        if(top==-1)
        return 1;
        else
        return 0;
    }
    void push(char ch)
    {
        stack[++top] = ch;
    }
    char pop()
    {
        top--;
        return stack[top+1];
    }
    char Top()
    {
        return stack[top];
    }

};
int priority(char ch)
{
    switch(ch)
    {
        case '+':
        case '-':
        return 1;
        case '/':
        case '*':
        case '%':
        return 2;
    }
}
void infixToPostfix(char infix[20])
{
    int i=0;
    char ch,x;
    Stack s;
    while(infix[i]!='\0')
    {
        ch = infix[i];
        i++;
        if((ch >='a' && ch<='z') || (ch >='A' && ch<='Z'))
        {
            cout<<ch;
        }
        else
        {
            if(ch=='(')
            {
                while(s.Top()!='(')
                {
                    cout<<s.pop();
                }
                x= s.pop();
            }
            else
            {
                while(priority(s.Top())>=priority(ch))
                {
                    cout<<s.pop();
                }
                s.push(ch);
            }
            
        }
        
    }
    while(!s.isEmpty() && s.Top()!='(')
    {
        cout<<s.pop();
    }
}

int main()
{
    char infix[20];
    cout<<"\nEnter Infix Expression:\n";
    cin>>infix;
    cout<<"\nPostfix Expression is:\n";
    infixToPostfix(infix);
    cout<<"\n";
}