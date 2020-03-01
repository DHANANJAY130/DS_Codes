#include <iostream>
using namespace std;

class Stack
{
private:
    float stack[20];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    int isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    void push(float ch)
    {
        stack[++top] = ch;
    }
    char pop()
    {
        top--;
        return stack[top + 1];
    }
    char Top()
    {
        return stack[top];
    }
};

float evalPostfix(char postfix[20])
{
    Stack s;
    int i = 0;
    float op1, op2, val;
    while (postfix[i] != '\0')
    {
        if (isdigit(postfix[i]))
            s.push((float)(postfix[i])-'0');
        else
        {
            op2 = s.pop();
            op1 = s.pop();
            switch (postfix[i])
            {
            case '+':
                val = op1 + op2;
                break;
            case '-':
                val = op1 - op2;
                break;
            case '/':
                val = op1 / op2;
                break;
            case '*':
                val = op1 * op2;
                break;
            case '%':
                val = (int)op1 + (int)op2;
                break;
            }
            s.push(val);
        }
        i++;
    }
    return s.pop();
}

int main()
{
    char postfix[20];
    cout<<"\nEnter Postfix expression to be evaluated:\n";
    cin>>postfix;
    cout<<"Evaluated Output is: "<<evalPostfix(postfix)<<"\n";
    return 0;
}