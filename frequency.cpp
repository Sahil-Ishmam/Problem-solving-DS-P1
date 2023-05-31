#include<bits/stdc++.h>
//#include"my_queue.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<int> q1;
    while(n--)
    {
        int val;cin>>val;
        q1.push(val);
    }
    int m;
    cin>>m;
    queue<int> q2;
    while(m--)
    {
        int val;cin>>val;
        q2.push(val);
    }
    int counter[10] = {0};
    queue<int> temp1 = q1;
    queue <int> temp2 = q2;
    while(!temp1.empty())
    {
        int val = temp1.front();
        temp1.pop();
        counter[val]++;
    }
    while(!temp2.empty())
    {
        int val = temp2.front();
        temp2.pop();
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


