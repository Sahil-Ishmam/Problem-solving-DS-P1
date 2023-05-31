#include<bits/stdc++.h>
using namespace std;

stack<int> sort_stack(stack<int>&input)
{
    stack<int> temp_stack;
    while(!input.empty())
    {
        int temp = input.top();input.pop();
        while(!temp_stack.empty() && temp_stack.top()<temp)
        {
            input.push(temp_stack.top());
            temp_stack.pop();
        }
        temp_stack.push(temp);
    }
    return temp_stack;
}

int main()
{
    int n;cin>>n;
    stack<int> st;
    while(n--)
    {
        int val;cin>>val;
        st.push(val);
    }
    stack<int> tempstack = sort_stack(st);
    cout<<"Sorted stack : ";
    while(!tempstack.empty())
    {
        cout<<tempstack.top()<<" ";
        tempstack.pop();
    }



    return 0;
}


