#include<bits/stdc++.h>
using namespace std;


void print(queue<int>&q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void reverse_queue(queue<int>&q)
{
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}
int main()
{
    int n;
    cin>>n;
    queue<int> q;
    while(n--)
    {
        int val;cin>>val;
        q.push(val);
    }
    reverse_queue(q);
    print(q);
    return 0;
}


