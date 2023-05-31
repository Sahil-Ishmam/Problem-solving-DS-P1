#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    queue<int> q1;
    while(n--)
    {
        int val;cin>>val;
        q1.push(val);
    }
    int m; cin>>m;
    queue<int> q2;
    while(m--)
    {
        int val;cin>>val;
        q2.push(val);
    }
    int counter[10] = {0};
    queue<int> temp1 = q1;
    queue <int> temp2 = q2;
    while(!q1.empty())
    {
        int val = q1.front();
        q1.pop();
        counter[val]++;
    }
    while(!q2.empty())
    {
        int val = q2.front();
        q2.pop();
        if(counter[val]<1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<counter[val]<<endl;
        }
    }




    return 0;
}


