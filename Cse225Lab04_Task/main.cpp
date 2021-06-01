#include <iostream>

using namespace std;

bool isBalance(string s)
{
    StackType<char> ch;
    for(char i : s)
    {
        if(i=='(')
            ch.Push(i);
        else if(i==')')
        {
            if(ch.IsEmpty())
                return false;
            else
                {
                ch.Pop();
                }
        }
    }
    return ch.IsEmpty();
}

int main()
{
    StackType<int>stack;
    if(stack.IsEmpty())
    {
    cout<<"Stack is Empty"<<endl;
    }
    else if (stack.IsFull())
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }
    try{
            stack.Push(5);
            stack.Push(7);
            stack.Push(4);
            stack.Push(2);
            if (!stack.IsEmpty())
            cout<<"Stack is not empty"<<endl;
            if (!stack.IsFull())
            cout<<"Stack is not full"<<endl;
    }
    catch(FullStack e)
    {
        cout<<"Stack is Full" <<endl;
    }
    StackType<int>st;
    while(!stack.IsEmpty())
    {
        st.Push(stack.Top());
        stack.Pop();
    }
    while(!st.IsEmpty())
    {
        stack.Push(st.Top());
        cout<<st.Top()<<" ";
        st.Pop();
    }
    try {
        stack.Push(3);
    }
    catch(FullStack e)
    {
        cout<<"Stack is Full" <<endl;
    }
    cout<<endl;
    while(!stack.IsEmpty())
    {
        st.Push(stack.Top());
        stack.Pop();
    }
    while(!st.IsEmpty())
    {
        stack.Push(st.Top());
        cout<<st.Top()<<" ";
        st.Pop();
    }
        if(stack.IsFull())
        cout<<"\nStack is full"<<endl;
        for(int i =0;i<2;i++) {
        stack.Pop();
        }
        cout<<stack.Top();
        cout<<endl;
        string bal ="()";
    if(isBalance(bal))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
    string a ="(())()(()())()";
    if(isBalance(a))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
    string b ="(())()((()";
    if(isBalance(b))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
    string c ="(())))((()";
    if(isBalance(c))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

    return 0;

}
